
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ conindid; scalar_t__ oid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,int *,int,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

Oid
FUNC_8(Oid VAR_7, Oid VAR_8)
{
 Relation VAR_9;
 SysScanDesc VAR_10;
 ScanKeyData VAR_11;
 HeapTuple VAR_12;
 Oid VAR_13 = VAR_6;

 VAR_9 = FUNC_7(VAR_3, VAR_0);

 FUNC_2(&VAR_11,
    VAR_1,
    VAR_2,
    VAR_5,
    FUNC_1(VAR_7));
 VAR_10 = FUNC_3(VAR_9, VAR_4,
         1, ((void*)0), 1, &VAR_11);
 while ((VAR_12 = FUNC_5(VAR_10)) != ((void*)0))
 {
  Form_pg_constraint VAR_14;

  VAR_14 = (Form_pg_constraint) FUNC_0(VAR_12);
  if (VAR_14->conindid == VAR_8)
  {
   VAR_13 = VAR_14->oid;
   break;
  }
 }
 FUNC_4(VAR_10);

 FUNC_6(VAR_9, VAR_0);
 return VAR_13;
}
