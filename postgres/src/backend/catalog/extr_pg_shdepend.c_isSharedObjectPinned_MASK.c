
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ deptype; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_shdepend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7(Oid VAR_6, Oid VAR_7, Relation VAR_8)
{
 bool VAR_9 = 0;
 ScanKeyData VAR_10[2];
 SysScanDesc VAR_11;
 HeapTuple VAR_12;

 FUNC_3(&VAR_10[0],
    VAR_0,
    VAR_2, VAR_3,
    FUNC_2(VAR_6));
 FUNC_3(&VAR_10[1],
    VAR_1,
    VAR_2, VAR_3,
    FUNC_2(VAR_7));

 VAR_11 = FUNC_4(VAR_8, VAR_5, 1,
         ((void*)0), 2, VAR_10);







 VAR_12 = FUNC_6(VAR_11);
 if (FUNC_1(VAR_12))
 {
  Form_pg_shdepend VAR_13 = (Form_pg_shdepend) FUNC_0(VAR_12);

  if (VAR_13->deptype == VAR_4)
   VAR_9 = 1;
 }

 FUNC_5(VAR_11);

 return VAR_9;
}
