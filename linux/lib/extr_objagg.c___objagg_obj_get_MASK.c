
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int dummy; } ;
struct objagg {int dummy; } ;


 struct objagg_obj* FUNC_0 (struct objagg*,void*) ;
 struct objagg_obj* FUNC_1 (struct objagg*,void*) ;
 int FUNC_2 (struct objagg_obj*) ;

__attribute__((used)) static struct objagg_obj *FUNC_3(struct objagg *VAR_0, void *VAR_1)
{
 struct objagg_obj *VAR_2;




 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_2);
  return VAR_2;
 }

 return FUNC_0(VAR_0, VAR_1);
}
