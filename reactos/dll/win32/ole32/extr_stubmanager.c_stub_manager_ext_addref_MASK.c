
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_manager {int extrefs; int weakrefs; scalar_t__ extern_conn; int oid; int lock; } ;
typedef int ULONG ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,struct stub_manager*,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;

ULONG FUNC_6(struct stub_manager *VAR_2, ULONG VAR_3, BOOL VAR_4)
{
    BOOL VAR_5;
    ULONG VAR_6;

    FUNC_0(&VAR_2->lock);

    VAR_5 = VAR_3 && !VAR_2->extrefs;


    VAR_3 = FUNC_4(VAR_3, (VAR_1-1 - VAR_2->extrefs));
    VAR_6 = (VAR_2->extrefs += VAR_3);

    if (VAR_4)
        VAR_6 += ++VAR_2->weakrefs;

    FUNC_2(&VAR_2->lock);

    FUNC_3("added %u refs to %p (oid %s), rc is now %u\n", VAR_3, VAR_2, FUNC_5(VAR_2->oid), VAR_6);





    if(VAR_5 && VAR_2->extern_conn)
        FUNC_1(VAR_2->extern_conn, VAR_0, 0);

    return VAR_6;
}
