
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct quat {int w; } ;


 int FUNC_0 (struct vec3*,struct quat const*) ;
 int FUNC_1 (struct vec3*,struct vec3*,struct vec3*) ;
 int FUNC_2 (struct vec3*,struct vec3*,struct vec3*) ;
 int FUNC_3 (struct vec3*,struct vec3*) ;
 int FUNC_4 (struct vec3*,struct vec3*,int) ;

void FUNC_5(struct quat *VAR_0, const struct quat *VAR_1, const struct quat *VAR_2)
{
 struct vec3 VAR_3, VAR_4;
 struct vec3 VAR_5, VAR_6;

 FUNC_0(&VAR_3, VAR_1);
 FUNC_0(&VAR_4, VAR_2);

 FUNC_4(&VAR_5, &VAR_4, VAR_1->w);
 FUNC_4(&VAR_6, &VAR_3, VAR_2->w);
 FUNC_1(&VAR_5, &VAR_5, &VAR_6);
 FUNC_2(&VAR_6, &VAR_3, &VAR_4);
 FUNC_1((struct vec3 *)VAR_0, &VAR_5, &VAR_6);

 VAR_0->w = (VAR_1->w * VAR_2->w) - FUNC_3(&VAR_3, &VAR_4);
}
