
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* items; } ;
struct TYPE_9__ {int type; struct TYPE_9__* parent; int keyName; } ;
struct TYPE_8__ {int type; } ;
typedef TYPE_1__ JsonPathItem ;
typedef TYPE_2__ JsonPathGinPathItem ;
typedef TYPE_3__ JsonPathGinPath ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;






 char* FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_2__* FUNC_3 (int) ;

__attribute__((used)) static bool
FUNC_4(JsonPathGinPath *VAR_1, JsonPathItem *VAR_2)
{
 JsonPathGinPathItem *VAR_3;
 Datum VAR_4;

 switch (VAR_2->type)
 {
  case 128:
   VAR_1->items = ((void*)0);
   return 1;

  case 129:
   {
    int VAR_5;
    char *VAR_6 = FUNC_1(VAR_2, &VAR_5);

    VAR_4 = FUNC_2(VAR_0, VAR_6, VAR_5);
    break;
   }

  case 133:
  case 131:
  case 132:
  case 130:
   VAR_4 = FUNC_0(((void*)0));
   break;

  default:

   return 0;
 }

 VAR_3 = FUNC_3(sizeof(*VAR_3));

 VAR_3->type = VAR_2->type;
 VAR_3->keyName = VAR_4;
 VAR_3->parent = VAR_1->items;

 VAR_1->items = VAR_3;

 return 1;
}
