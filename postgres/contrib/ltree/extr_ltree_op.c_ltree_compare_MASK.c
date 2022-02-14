
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
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;

int
FUNC_4(const ltree *VAR_0, const ltree *VAR_1)
{
 ltree_level *VAR_2 = FUNC_1(VAR_0);
 ltree_level *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_0->numlevel;
 int VAR_5 = VAR_1->numlevel;

 while (VAR_4 > 0 && VAR_5 > 0)
 {
  int VAR_6;

  if ((VAR_6 = FUNC_3(VAR_2->name, VAR_3->name, FUNC_2(VAR_2->len, VAR_3->len))) == 0)
  {
   if (VAR_2->len != VAR_3->len)
    return (VAR_2->len - VAR_3->len) * 10 * (VAR_4 + 1);
  }
  else
  {
   if (VAR_6 < 0)
    VAR_6 = -1;
   else
    VAR_6 = 1;
   return VAR_6 * 10 * (VAR_4 + 1);
  }

  VAR_4--;
  VAR_5--;
  VAR_2 = FUNC_0(VAR_2);
  VAR_3 = FUNC_0(VAR_3);
 }

 return (VAR_0->numlevel - VAR_1->numlevel) * 10 * (VAR_4 + 1);
}
