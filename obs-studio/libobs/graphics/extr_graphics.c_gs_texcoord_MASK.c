
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec2 {int dummy; } ;


 int FUNC_0 (struct vec2*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct vec2*,float,float) ;

void FUNC_3(float VAR_0, float VAR_1, int VAR_2)
{
 struct vec2 VAR_3;

 if (!FUNC_1("gs_texcoord"))
  return;

 FUNC_2(&VAR_3, VAR_0, VAR_1);
 FUNC_0(&VAR_3, VAR_2);
}
