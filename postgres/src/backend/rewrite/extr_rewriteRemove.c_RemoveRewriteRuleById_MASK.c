
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ev_class; } ;
struct TYPE_6__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_rewrite ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

void
FUNC_12(Oid VAR_9)
{
 Relation VAR_10;
 ScanKeyData VAR_11[1];
 SysScanDesc VAR_12;
 Relation VAR_13;
 HeapTuple VAR_14;
 Oid VAR_15;




 VAR_10 = FUNC_11(VAR_7, VAR_8);




 FUNC_5(&VAR_11[0],
    VAR_1,
    VAR_2, VAR_4,
    FUNC_4(VAR_9));

 VAR_12 = FUNC_7(VAR_10, VAR_6, 1,
        ((void*)0), 1, VAR_11);

 VAR_14 = FUNC_9(VAR_12);

 if (!FUNC_3(VAR_14))
  FUNC_6(VAR_3, "could not find tuple for rule %u", VAR_9);






 VAR_15 = ((Form_pg_rewrite) FUNC_2(VAR_14))->ev_class;
 VAR_13 = FUNC_11(VAR_15, VAR_0);




 FUNC_1(VAR_10, &VAR_14->t_self);

 FUNC_8(VAR_12);

 FUNC_10(VAR_10, VAR_8);





 FUNC_0(VAR_13);


 FUNC_10(VAR_13, VAR_5);
}
