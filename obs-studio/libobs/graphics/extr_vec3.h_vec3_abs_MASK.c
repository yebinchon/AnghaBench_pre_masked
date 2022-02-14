
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float w; void* z; void* y; void* x; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static inline void FUNC_1(struct vec3 *VAR_0, const struct vec3 *VAR_1)
{
 VAR_0->x = FUNC_0(VAR_1->x);
 VAR_0->y = FUNC_0(VAR_1->y);
 VAR_0->z = FUNC_0(VAR_1->z);
 VAR_0->w = 0.0f;
}
