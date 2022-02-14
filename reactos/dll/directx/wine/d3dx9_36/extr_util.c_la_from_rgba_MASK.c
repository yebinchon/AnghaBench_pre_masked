
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {float x; float y; float z; int w; } ;



__attribute__((used)) static void FUNC_0(const struct vec4 *VAR_0, struct vec4 *VAR_1)
{
    VAR_1->x = VAR_0->x * 0.2125f + VAR_0->y * 0.7154f + VAR_0->z * 0.0721f;
    VAR_1->w = VAR_0->w;
}
