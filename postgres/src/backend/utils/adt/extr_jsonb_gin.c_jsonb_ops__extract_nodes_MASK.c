
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ lax; } ;
struct TYPE_11__ {TYPE_2__* items; } ;
struct TYPE_10__ {scalar_t__ type; int keyName; struct TYPE_10__* parent; } ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef int List ;
typedef TYPE_1__ JsonbValue ;
typedef TYPE_2__ JsonPathGinPathItem ;
typedef TYPE_3__ JsonPathGinPath ;
typedef int JsonPathGinNode ;
typedef TYPE_4__ JsonPathGinContext ;
typedef scalar_t__ GinTernaryValue ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_1__*,int) ;
 int * FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static List *
FUNC_4(JsonPathGinContext *VAR_9, JsonPathGinPath VAR_10,
       JsonbValue *VAR_11, List *VAR_12)
{
 JsonPathGinPathItem *VAR_13;

 if (VAR_11)
 {
  JsonPathGinNode *VAR_14;





  for (VAR_13 = VAR_10.items; VAR_13; VAR_13 = VAR_13->parent)
  {
   if (VAR_13->type == VAR_8)
    VAR_12 = FUNC_0(VAR_12, FUNC_1(VAR_13->keyName));
  }


  if (VAR_11->type == VAR_4)
  {
   JsonPathGinPathItem *VAR_15 = VAR_10.items;
   GinTernaryValue VAR_16;
   if (VAR_9->lax)
    VAR_16 = VAR_1;
   else if (!VAR_15)
    VAR_16 = VAR_0;
   else if (VAR_15->type == VAR_6 || VAR_15->type == VAR_7)
    VAR_16 = VAR_2;
   else if (VAR_15->type == VAR_5)
    VAR_16 = VAR_1;
   else
    VAR_16 = VAR_0;

   if (VAR_16 == VAR_1)
   {
    JsonPathGinNode *VAR_17 = FUNC_2(VAR_11, 1);
    JsonPathGinNode *VAR_18 = FUNC_2(VAR_11, 0);

    VAR_14 = FUNC_3(VAR_3, VAR_17, VAR_18);
   }
   else
   {
    VAR_14 = FUNC_2(VAR_11,
              VAR_16 == VAR_2);
   }
  }
  else
  {
   VAR_14 = FUNC_2(VAR_11, 0);
  }

  VAR_12 = FUNC_0(VAR_12, VAR_14);
 }

 return VAR_12;
}
