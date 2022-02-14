
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec2 {scalar_t__ y; scalar_t__ x; } ;


 int FUNC_0 (struct vec2*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct vec2 *VAR_0, const struct vec2 *VAR_1,
       const struct vec2 *VAR_2)
{
 FUNC_0(VAR_0, VAR_1->x + VAR_2->x, VAR_1->y + VAR_2->y);
}
