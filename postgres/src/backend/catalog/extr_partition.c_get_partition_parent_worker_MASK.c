
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inhparent; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_inherits ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static Oid
FUNC_8(Relation VAR_7, Oid VAR_8)
{
 SysScanDesc VAR_9;
 ScanKeyData VAR_10[2];
 Oid VAR_11 = VAR_6;
 HeapTuple VAR_12;

 FUNC_4(&VAR_10[0],
    VAR_0,
    VAR_2, VAR_4,
    FUNC_3(VAR_8));
 FUNC_4(&VAR_10[1],
    VAR_1,
    VAR_2, VAR_3,
    FUNC_2(1));

 VAR_9 = FUNC_5(VAR_7, VAR_5, 1,
         ((void*)0), 2, VAR_10);
 VAR_12 = FUNC_7(VAR_9);
 if (FUNC_1(VAR_12))
 {
  Form_pg_inherits VAR_13 = (Form_pg_inherits) FUNC_0(VAR_12);

  VAR_11 = VAR_13->inhparent;
 }

 FUNC_6(VAR_9);

 return VAR_11;
}
