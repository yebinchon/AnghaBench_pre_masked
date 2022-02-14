
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float w; int m; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct vec3 *VAR_0, const struct vec3 *VAR_1,
       const struct vec3 *VAR_2)
{
 VAR_0->m = FUNC_0(VAR_1->m, VAR_2->m);
 VAR_0->w = 0.0f;
}
