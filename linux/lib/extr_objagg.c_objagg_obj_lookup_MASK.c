
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int dummy; } ;
struct objagg {int ht_params; int obj_ht; } ;


 struct objagg_obj* FUNC_0 (int *,void*,int ) ;

__attribute__((used)) static struct objagg_obj *FUNC_1(struct objagg *VAR_0, void *VAR_1)
{
 return FUNC_0(&VAR_0->obj_ht, VAR_1, VAR_0->ht_params);
}
