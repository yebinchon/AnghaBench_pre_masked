
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec2 {scalar_t__ x; scalar_t__ y; } ;



__attribute__((used)) static inline void FUNC_0(struct vec2 *VAR_0, const struct vec2 *VAR_1,
       const struct vec2 *VAR_2)
{
 if (VAR_1->x > VAR_2->x)
  VAR_0->x = VAR_2->x;
 if (VAR_1->y > VAR_2->y)
  VAR_0->y = VAR_2->y;
}
