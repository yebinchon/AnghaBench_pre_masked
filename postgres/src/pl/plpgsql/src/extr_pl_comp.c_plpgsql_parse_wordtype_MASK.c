
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_9__ {int fn_input_collation; } ;
struct TYPE_8__ {scalar_t__ typrelid; int typisdefined; } ;
struct TYPE_7__ {int itemtype; size_t itemno; } ;
struct TYPE_6__ {int * datatype; } ;
typedef TYPE_1__ PLpgSQL_var ;
typedef int PLpgSQL_type ;
typedef TYPE_2__ PLpgSQL_nsitem ;
typedef scalar_t__ HeapTuple ;
typedef TYPE_3__* Form_pg_type ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int *,int) ;

 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (scalar_t__,int,int ,int *) ;
 int * FUNC_4 (char*) ;
 scalar_t__* VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_2__* FUNC_5 (int ,int,char*,int *,int *,int *) ;
 int FUNC_6 () ;

PLpgSQL_type *
FUNC_7(char *VAR_3)
{
 PLpgSQL_type *VAR_4;
 PLpgSQL_nsitem *VAR_5;
 TypeName *VAR_6;
 HeapTuple VAR_7;




 VAR_5 = FUNC_5(FUNC_6(), 0,
       VAR_3, ((void*)0), ((void*)0),
       ((void*)0));

 if (VAR_5 != ((void*)0))
 {
  switch (VAR_5->itemtype)
  {
   case 128:
    return ((PLpgSQL_var *) (VAR_1[VAR_5->itemno]))->datatype;



   default:
    return ((void*)0);
  }
 }





 VAR_6 = FUNC_4(VAR_3);
 VAR_7 = FUNC_1(((void*)0), VAR_6, ((void*)0), 0);
 if (VAR_7)
 {
  Form_pg_type VAR_8 = (Form_pg_type) FUNC_0(VAR_7);

  if (!VAR_8->typisdefined ||
   VAR_8->typrelid != VAR_0)
  {
   FUNC_2(VAR_7);
   return ((void*)0);
  }

  VAR_4 = FUNC_3(VAR_7, -1,
          VAR_2->fn_input_collation,
          VAR_6);

  FUNC_2(VAR_7);
  return VAR_4;
 }





 return ((void*)0);
}
