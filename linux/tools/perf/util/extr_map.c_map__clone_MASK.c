
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int * groups; int dso; int rb_node; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct map* FUNC_2 (struct map*,int) ;
 int FUNC_3 (int *,int) ;

struct map *FUNC_4(struct map *VAR_0)
{
 struct map *VAR_1 = FUNC_2(VAR_0, sizeof(*VAR_1));

 if (VAR_1 != ((void*)0)) {
  FUNC_3(&VAR_1->refcnt, 1);
  FUNC_0(&VAR_1->rb_node);
  FUNC_1(VAR_1->dso);
  VAR_1->groups = ((void*)0);
 }

 return VAR_1;
}
