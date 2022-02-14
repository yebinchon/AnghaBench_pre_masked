
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float w; int m; } ;
struct quat {int m; } ;



__attribute__((used)) static inline void FUNC_0(struct vec3 *VAR_0, const struct quat *VAR_1)
{
 VAR_0->m = VAR_1->m;
 VAR_0->w = 0.0f;
}
