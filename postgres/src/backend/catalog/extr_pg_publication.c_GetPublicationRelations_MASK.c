
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prrelid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_publication_rel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

List *
FUNC_10(Oid VAR_7)
{
 List *VAR_8;
 Relation VAR_9;
 ScanKeyData VAR_10;
 SysScanDesc VAR_11;
 HeapTuple VAR_12;


 VAR_9 = FUNC_9(VAR_6, VAR_0);

 FUNC_3(&VAR_10,
    VAR_1,
    VAR_2, VAR_3,
    FUNC_2(VAR_7));

 VAR_11 = FUNC_5(VAR_9, VAR_5,
         1, ((void*)0), 1, &VAR_10);

 VAR_8 = VAR_4;
 while (FUNC_1(VAR_12 = FUNC_7(VAR_11)))
 {
  Form_pg_publication_rel VAR_13;

  VAR_13 = (Form_pg_publication_rel) FUNC_0(VAR_12);

  VAR_8 = FUNC_4(VAR_8, VAR_13->prrelid);
 }

 FUNC_6(VAR_11);
 FUNC_8(VAR_9, VAR_0);

 return VAR_8;
}
