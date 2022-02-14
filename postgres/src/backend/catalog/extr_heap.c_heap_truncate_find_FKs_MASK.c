
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ contype; int conrelid; int confrelid; } ;
typedef int SysScanDesc ;
typedef int Relation ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int,int *,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

List *
FUNC_11(List *VAR_6)
{
 List *VAR_7 = VAR_4;
 Relation VAR_8;
 SysScanDesc VAR_9;
 HeapTuple VAR_10;





 VAR_8 = FUNC_10(VAR_2, VAR_0);

 VAR_9 = FUNC_6(VAR_8, VAR_3, 0,
          ((void*)0), 0, ((void*)0));

 while (FUNC_1(VAR_10 = FUNC_8(VAR_9)))
 {
  Form_pg_constraint VAR_11 = (Form_pg_constraint) FUNC_0(VAR_10);


  if (VAR_11->contype != VAR_1)
   continue;


  if (!FUNC_4(VAR_6, VAR_11->confrelid))
   continue;


  if (!FUNC_4(VAR_6, VAR_11->conrelid))
   VAR_7 = FUNC_2(VAR_7, VAR_11->conrelid);
 }

 FUNC_7(VAR_9);
 FUNC_9(VAR_8, VAR_0);


 FUNC_5(VAR_7, VAR_5);
 FUNC_3(VAR_7);

 return VAR_7;
}
