
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct vec2 {int y; int x; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct vec3*) ;
 int FUNC_2 (struct vec3*,int ,int ,float) ;

void FUNC_3(const struct vec2 *VAR_0)
{
 struct vec3 VAR_1;

 if (!FUNC_0("gs_vertex2v"))
  return;

 FUNC_2(&VAR_1, VAR_0->x, VAR_0->y, 0.0f);
 FUNC_1(&VAR_1);
}
