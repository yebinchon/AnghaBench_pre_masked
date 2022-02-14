
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int refcount; } ;
struct objagg {int dummy; } ;


 scalar_t__ FUNC_0 (struct objagg_obj*) ;
 struct objagg_obj* FUNC_1 (struct objagg*,void*) ;
 int FUNC_2 (struct objagg_obj*) ;
 int FUNC_3 (struct objagg*,struct objagg_obj*,int ) ;

struct objagg_obj *FUNC_4(struct objagg *VAR_0, void *VAR_1)
{
 struct objagg_obj *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return VAR_2;
 FUNC_2(VAR_2);
 FUNC_3(VAR_0, VAR_2, VAR_2->refcount);
 return VAR_2;
}
