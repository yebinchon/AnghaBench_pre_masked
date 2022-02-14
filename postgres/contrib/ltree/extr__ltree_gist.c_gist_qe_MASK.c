
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ltree_gist ;
struct TYPE_14__ {int val; } ;
typedef TYPE_1__ lquery_variant ;
struct TYPE_15__ {int numvar; } ;
typedef TYPE_2__ lquery_level ;
struct TYPE_16__ {int numlevel; } ;
typedef TYPE_3__ lquery ;
typedef int BITVECP ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_9(ltree_gist *VAR_0, lquery *VAR_1)
{
 lquery_level *VAR_2 = FUNC_5(VAR_1);
 BITVECP VAR_3 = FUNC_7(VAR_0);
 int VAR_4 = VAR_1->numlevel;

 if (FUNC_6(VAR_0))
  return 1;

 while (VAR_4 > 0)
 {
  if (VAR_2->numvar && FUNC_2(VAR_2))
  {
   bool VAR_5 = 0;
   int VAR_6 = VAR_2->numvar;
   lquery_variant *VAR_7 = FUNC_3(VAR_2);

   while (VAR_6 > 0)
   {
    if (FUNC_1(VAR_3, FUNC_0(VAR_7->val)))
    {
     VAR_5 = 1;
     break;
    }
    VAR_7 = FUNC_8(VAR_7);
    VAR_6--;
   }
   if (!VAR_5)
    return 0;
  }

  VAR_2 = FUNC_4(VAR_2);
  VAR_4--;
 }

 return 1;
}
