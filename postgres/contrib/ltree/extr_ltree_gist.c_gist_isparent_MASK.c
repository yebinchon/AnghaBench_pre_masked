
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ltree_gist ;
struct TYPE_4__ {int numlevel; } ;
typedef TYPE_1__ ltree ;
typedef void* int32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static bool
FUNC_3(ltree_gist *VAR_0, ltree *VAR_1)
{
 int32 VAR_2 = VAR_1->numlevel;
 int VAR_3;

 for (VAR_3 = VAR_1->numlevel; VAR_3 >= 0; VAR_3--)
 {
  VAR_1->numlevel = VAR_3;
  if (FUNC_2(VAR_1, FUNC_0(VAR_0)) >= 0 && FUNC_2(VAR_1, FUNC_1(VAR_0)) <= 0)
  {
   VAR_1->numlevel = VAR_2;
   return 1;
  }
 }

 VAR_1->numlevel = VAR_2;
 return 0;
}
