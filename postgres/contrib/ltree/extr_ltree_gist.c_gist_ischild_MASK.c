
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ltree_gist ;
struct TYPE_7__ {scalar_t__ numlevel; } ;
typedef TYPE_1__ ltree ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_5(ltree_gist *VAR_0, ltree *VAR_1)
{
 ltree *VAR_2 = FUNC_2(FUNC_0(VAR_0));
 ltree *VAR_3 = FUNC_2(FUNC_1(VAR_0));
 bool VAR_4 = 1;

 if (VAR_2->numlevel > VAR_1->numlevel)
  VAR_2->numlevel = VAR_1->numlevel;

 if (FUNC_3(VAR_1, VAR_2) < 0)
  VAR_4 = 0;

 if (VAR_3->numlevel > VAR_1->numlevel)
  VAR_3->numlevel = VAR_1->numlevel;

 if (VAR_4 && FUNC_3(VAR_1, VAR_3) > 0)
  VAR_4 = 0;

 FUNC_4(VAR_2);
 FUNC_4(VAR_3);

 return VAR_4;
}
