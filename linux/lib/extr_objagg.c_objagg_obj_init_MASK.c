
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {int dummy; } ;
struct objagg {int dummy; } ;


 int FUNC_0 (struct objagg*,struct objagg_obj*,int*) ;
 int FUNC_1 (struct objagg*,struct objagg_obj*) ;
 int FUNC_2 (struct objagg*,struct objagg_obj*,int *) ;

__attribute__((used)) static int FUNC_3(struct objagg *VAR_0,
      struct objagg_obj *VAR_1)
{
 bool VAR_2;
 int VAR_3;




 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_2)
  return 0;


 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3)
  return 0;

 return FUNC_2(VAR_0, VAR_1, ((void*)0));
}
