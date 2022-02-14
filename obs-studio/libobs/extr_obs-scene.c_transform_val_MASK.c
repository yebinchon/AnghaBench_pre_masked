
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int y; int x; } ;
struct vec2 {int y; int x; } ;
struct matrix4 {int dummy; } ;


 int FUNC_0 (struct vec3*,int ,int ,float) ;
 int FUNC_1 (struct vec3*,struct vec3*,struct matrix4*) ;

__attribute__((used)) static inline void FUNC_2(struct vec2 *VAR_0, struct matrix4 *VAR_1)
{
 struct vec3 VAR_2;
 FUNC_0(&VAR_2, VAR_0->x, VAR_0->y, 0.0f);
 FUNC_1(&VAR_2, &VAR_2, VAR_1);
 VAR_0->x = VAR_2.x;
 VAR_0->y = VAR_2.y;
}
