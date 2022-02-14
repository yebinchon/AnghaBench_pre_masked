
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int name; } ;
typedef TYPE_1__ ltree_level ;
struct TYPE_10__ {int numlevel; } ;
typedef TYPE_2__ ltree ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

bool
FUNC_3(const ltree *VAR_0, const ltree *VAR_1)
{
 ltree_level *VAR_2 = FUNC_1(VAR_0);
 ltree_level *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_1->numlevel;

 if (VAR_4 > VAR_0->numlevel)
  return 0;

 while (VAR_4 > 0)
 {
  if (VAR_2->len != VAR_3->len)
   return 0;
  if (FUNC_2(VAR_2->name, VAR_3->name, VAR_2->len) != 0)
   return 0;

  VAR_4--;
  VAR_2 = FUNC_0(VAR_2);
  VAR_3 = FUNC_0(VAR_3);
 }
 return 1;
}
