
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ inhparent; } ;
struct TYPE_6__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_inherits ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int,int *,int,int *) ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

bool
FUNC_11(Oid VAR_6, Oid VAR_7)
{
 bool VAR_8 = 0;
 Relation VAR_9;
 ScanKeyData VAR_10;
 SysScanDesc VAR_11;
 HeapTuple VAR_12;




 VAR_9 = FUNC_10(VAR_3, VAR_5);
 FUNC_5(&VAR_10,
    VAR_0,
    VAR_1, VAR_2,
    FUNC_3(VAR_6));
 VAR_11 = FUNC_6(VAR_9, VAR_4,
         1, ((void*)0), 1, &VAR_10);

 while (FUNC_2(VAR_12 = FUNC_8(VAR_11)))
 {
  Oid VAR_13;


  VAR_13 = ((Form_pg_inherits) FUNC_1(VAR_12))->inhparent;
  if (!FUNC_4(VAR_7) || VAR_13 == VAR_7)
  {
   FUNC_0(VAR_9, &VAR_12->t_self);
   VAR_8 = 1;
  }
 }


 FUNC_7(VAR_11);
 FUNC_9(VAR_9, VAR_5);

 return VAR_8;
}
