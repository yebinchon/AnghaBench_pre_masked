
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec2 {float x; float y; } ;



__attribute__((used)) static inline float FUNC_0(const struct vec2 *VAR_0, const struct vec2 *VAR_1)
{
 return VAR_0->x * VAR_1->x + VAR_0->y * VAR_1->y;
}
