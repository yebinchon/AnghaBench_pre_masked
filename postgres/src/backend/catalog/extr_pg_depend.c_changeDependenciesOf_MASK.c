
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int objid; } ;
struct TYPE_10__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_depend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

long
FUNC_12(Oid VAR_7, Oid VAR_8,
      Oid VAR_9)
{
 long VAR_10 = 0;
 Relation VAR_11;
 ScanKeyData VAR_12[2];
 SysScanDesc VAR_13;
 HeapTuple VAR_14;

 VAR_11 = FUNC_11(VAR_4, VAR_6);

 FUNC_4(&VAR_12[0],
    VAR_0,
    VAR_2, VAR_5,
    FUNC_3(VAR_7));
 FUNC_4(&VAR_12[1],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_3(VAR_8));

 VAR_13 = FUNC_7(VAR_11, VAR_3, 1,
         ((void*)0), 2, VAR_12);

 while (FUNC_2((VAR_14 = FUNC_9(VAR_13))))
 {
  Form_pg_depend VAR_15 = (Form_pg_depend) FUNC_1(VAR_14);


  VAR_14 = FUNC_5(VAR_14);
  VAR_15 = (Form_pg_depend) FUNC_1(VAR_14);

  VAR_15->objid = VAR_9;

  FUNC_0(VAR_11, &VAR_14->t_self, VAR_14);

  FUNC_6(VAR_14);

  VAR_10++;
 }

 FUNC_8(VAR_13);

 FUNC_10(VAR_11, VAR_6);

 return VAR_10;
}
