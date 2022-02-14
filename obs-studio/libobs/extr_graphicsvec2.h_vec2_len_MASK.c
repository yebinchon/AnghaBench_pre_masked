
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec2 {int x; int y; } ;


 float FUNC_0 (int) ;

__attribute__((used)) static inline float FUNC_1(const struct vec2 *VAR_0)
{
 return FUNC_0(VAR_0->x * VAR_0->x + VAR_0->y * VAR_0->y);
}
