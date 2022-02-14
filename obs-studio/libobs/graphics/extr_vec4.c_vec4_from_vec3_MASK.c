
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {float w; int m; } ;
struct vec3 {int m; } ;



void FUNC_0(struct vec4 *VAR_0, const struct vec3 *VAR_1)
{
 VAR_0->m = VAR_1->m;
 VAR_0->w = 1.0f;
}
