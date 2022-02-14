
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;


 int FUNC_0 (struct vec3*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct vec3*,float,float,float) ;

void FUNC_3(float VAR_0, float VAR_1, float VAR_2)
{
 struct vec3 VAR_3;

 if (!FUNC_1("gs_normal3f"))
  return;

 FUNC_2(&VAR_3, VAR_0, VAR_1, VAR_2);
 FUNC_0(&VAR_3);
}
