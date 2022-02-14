
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float w; int z; int y; int x; } ;



__attribute__((used)) static inline void FUNC_0(struct vec3 *VAR_0, const struct vec3 *VAR_1)
{
 VAR_0->x = -VAR_1->x;
 VAR_0->y = -VAR_1->y;
 VAR_0->z = -VAR_1->z;
 VAR_0->w = 0.0f;
}
