
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int * (* extract_nodes ) (TYPE_2__*,int ,int *,int *) ;int (* add_path_item ) (int *,TYPE_1__*) ;} ;
struct TYPE_13__ {int type; } ;
typedef int List ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonPathItem ;
typedef int JsonPathGinPath ;
typedef int JsonPathGinNode ;
typedef TYPE_2__ JsonPathGinContext ;


 int * VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int ,TYPE_1__*,int) ;


 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (TYPE_2__*,int ,int *,int *) ;

__attribute__((used)) static List *
FUNC_6(JsonPathGinContext *VAR_1, JsonPathGinPath VAR_2,
       JsonPathItem *VAR_3, JsonbValue *VAR_4)
{
 JsonPathItem VAR_5;
 List *VAR_6 = VAR_0;

 for (;;)
 {
  switch (VAR_3->type)
  {
   case 129:
    break;

   case 128:
    {
     JsonPathItem VAR_7;
     JsonPathGinNode *VAR_8;

     FUNC_1(VAR_3, &VAR_7);

     VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_7, 0);

     if (VAR_8)
      VAR_6 = FUNC_3(VAR_6, VAR_8);

     break;
    }

   default:
    if (!VAR_1->add_path_item(&VAR_2, VAR_3))





     return VAR_6;
    break;
  }

  if (!FUNC_2(VAR_3, &VAR_5))
   break;

  VAR_3 = &VAR_5;
 }





 return VAR_1->extract_nodes(VAR_1, VAR_2, VAR_4, VAR_6);
}
