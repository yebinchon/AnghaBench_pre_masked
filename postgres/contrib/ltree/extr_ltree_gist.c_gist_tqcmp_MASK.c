
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ len; int name; } ;
typedef TYPE_1__ ltree_level ;
struct TYPE_14__ {int numlevel; } ;
typedef TYPE_2__ ltree ;
struct TYPE_15__ {scalar_t__ len; int name; } ;
typedef TYPE_3__ lquery_variant ;
typedef int lquery_level ;
struct TYPE_16__ {int firstgood; } ;
typedef TYPE_4__ lquery ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_4__*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(ltree *VAR_0, lquery *VAR_1)
{
 ltree_level *VAR_2 = FUNC_4(VAR_0);
 lquery_level *VAR_3 = FUNC_3(VAR_1);
 lquery_variant *VAR_4;
 int VAR_5 = VAR_0->numlevel;
 int VAR_6 = VAR_1->firstgood;
 int VAR_7 = 0;

 while (VAR_5 > 0 && VAR_6 > 0)
 {
  VAR_4 = FUNC_1(VAR_3);
  if ((VAR_7 = FUNC_6(VAR_2->name, VAR_4->name, FUNC_5(VAR_2->len, VAR_4->len))) == 0)
  {
   if (VAR_2->len != VAR_4->len)
    return VAR_2->len - VAR_4->len;
  }
  else
   return VAR_7;
  VAR_5--;
  VAR_6--;
  VAR_2 = FUNC_0(VAR_2);
  VAR_3 = FUNC_2(VAR_3);
 }

 return FUNC_5(VAR_0->numlevel, VAR_1->firstgood) - VAR_1->firstgood;
}
