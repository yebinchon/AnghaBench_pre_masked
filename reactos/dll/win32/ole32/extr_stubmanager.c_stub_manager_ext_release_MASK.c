
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_manager {scalar_t__ extrefs; scalar_t__ weakrefs; scalar_t__ extern_conn; int oid; int lock; } ;
typedef scalar_t__ ULONG ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__,struct stub_manager*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct stub_manager*) ;
 int FUNC_6 (int ) ;

ULONG FUNC_7(struct stub_manager *VAR_1, ULONG VAR_2, BOOL VAR_3, BOOL VAR_4)
{
    BOOL VAR_5;
    ULONG VAR_6;

    FUNC_0(&VAR_1->lock);


    VAR_2 = FUNC_4(VAR_2, VAR_1->extrefs);
    VAR_6 = (VAR_1->extrefs -= VAR_2);

    if (VAR_3)
        --VAR_1->weakrefs;
    if (!VAR_4)
        VAR_6 += VAR_1->weakrefs;

    VAR_5 = VAR_2 && !VAR_1->extrefs;

    FUNC_2(&VAR_1->lock);

    FUNC_3("removed %u refs from %p (oid %s), rc is now %u\n", VAR_2, VAR_1, FUNC_6(VAR_1->oid), VAR_6);

    if (VAR_5 && VAR_1->extern_conn)
        FUNC_1(VAR_1->extern_conn, VAR_0, 0, VAR_4);

    if (VAR_6 == 0)
        if (!(VAR_1->extern_conn && VAR_4 && VAR_1->weakrefs))
            FUNC_5(VAR_1);

    return VAR_6;
}
