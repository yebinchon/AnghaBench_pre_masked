
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int refcount; } ;
struct objagg {int dummy; } ;


 int FUNC_0 (struct objagg*,struct objagg_obj*) ;
 int FUNC_1 (struct objagg_obj*) ;
 int FUNC_2 (struct objagg*,struct objagg_obj*,int ) ;

void FUNC_3(struct objagg *VAR_0, struct objagg_obj *VAR_1)
{
 FUNC_2(VAR_0, VAR_1, VAR_1->refcount);
 FUNC_1(VAR_1);
 FUNC_0(VAR_0, VAR_1);
}
