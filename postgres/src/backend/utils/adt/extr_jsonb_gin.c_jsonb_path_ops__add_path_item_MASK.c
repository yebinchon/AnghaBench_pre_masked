
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int hash; } ;
struct TYPE_13__ {int type; } ;
struct TYPE_10__ {int len; int val; } ;
struct TYPE_11__ {TYPE_1__ string; } ;
struct TYPE_12__ {TYPE_2__ val; int type; } ;
typedef TYPE_3__ JsonbValue ;
typedef TYPE_4__ JsonPathItem ;
typedef TYPE_5__ JsonPathGinPath ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int VAR_0 ;




 int FUNC_1 (TYPE_4__*,int *) ;

__attribute__((used)) static bool
FUNC_2(JsonPathGinPath *VAR_1, JsonPathItem *VAR_2)
{
 switch (VAR_2->type)
 {
  case 128:
   VAR_1->hash = 0;
   return 1;

  case 129:
   {
    JsonbValue VAR_3;

    VAR_3.type = VAR_0;
    VAR_3.val.string.val = FUNC_1(VAR_2, &VAR_3.val.string.len);

    FUNC_0(&VAR_3, &VAR_1->hash);
    return 1;
   }

  case 130:
  case 131:
   return 1;

  default:

   return 0;
 }
}
