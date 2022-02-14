
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct world {int * key_refs; struct objagg_obj** objagg_objs; } ;
struct objagg_obj {int dummy; } ;
struct objagg {int dummy; } ;


 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (struct objagg*,struct objagg_obj*) ;

__attribute__((used)) static void FUNC_2(struct world *VAR_0, struct objagg *VAR_1,
     unsigned int VAR_2)
{
 struct objagg_obj *VAR_3;

 if (!VAR_0->key_refs[FUNC_0(VAR_2)])
  return;
 VAR_3 = VAR_0->objagg_objs[FUNC_0(VAR_2)];
 FUNC_1(VAR_1, VAR_3);
 VAR_0->key_refs[FUNC_0(VAR_2)]--;
}
