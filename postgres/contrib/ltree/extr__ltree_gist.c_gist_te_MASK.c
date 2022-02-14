
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int name; } ;
typedef TYPE_1__ ltree_level ;
typedef int ltree_gist ;
struct TYPE_9__ {int numlevel; } ;
typedef TYPE_2__ ltree ;
typedef int BITVECP ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;
 unsigned int FUNC_6 (int ,int ) ;

__attribute__((used)) static bool
FUNC_7(ltree_gist *VAR_0, ltree *VAR_1)
{
 ltree_level *VAR_2 = FUNC_5(VAR_1);
 BITVECP VAR_3 = FUNC_4(VAR_0);
 int VAR_4 = VAR_1->numlevel;
 unsigned int VAR_5;

 if (FUNC_3(VAR_0))
  return 1;

 while (VAR_4 > 0)
 {
  VAR_5 = FUNC_6(VAR_2->name, VAR_2->len);
  if (!FUNC_1(VAR_3, FUNC_0(VAR_5)))
   return 0;
  VAR_2 = FUNC_2(VAR_2);
  VAR_4--;
 }

 return 1;
}
