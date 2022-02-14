
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nargs; int entryDatum; int entryIndex; } ;
struct TYPE_5__ {int type; struct TYPE_5__** args; TYPE_1__ val; } ;
typedef TYPE_2__ JsonPathGinNode ;
typedef int GinEntries ;





 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(JsonPathGinNode *VAR_0, GinEntries *VAR_1)
{
 FUNC_1();

 switch (VAR_0->type)
 {
  case 129:

   VAR_0->val.entryIndex = FUNC_0(VAR_1, VAR_0->val.entryDatum);
   break;

  case 128:
  case 130:
   {
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->val.nargs; VAR_2++)
     FUNC_2(VAR_0->args[VAR_2], VAR_1);

    break;
   }
 }
}
