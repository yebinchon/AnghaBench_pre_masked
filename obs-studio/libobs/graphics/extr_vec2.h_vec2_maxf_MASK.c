
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec2 {float x; float y; } ;



__attribute__((used)) static inline void FUNC_0(struct vec2 *VAR_0, const struct vec2 *VAR_1, float VAR_2)
{
 if (VAR_1->x > VAR_2)
  VAR_0->x = VAR_2;
 if (VAR_1->y > VAR_2)
  VAR_0->y = VAR_2;
}
