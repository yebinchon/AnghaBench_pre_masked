
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct vec3*) ;
 int FUNC_2 (struct vec3*,float,float,float) ;

void FUNC_3(float VAR_0, float VAR_1)
{
 struct vec3 VAR_2;

 if (!FUNC_0("gs_verte"))
  return;

 FUNC_2(&VAR_2, VAR_0, VAR_1, 0.0f);
 FUNC_1(&VAR_2);
}
