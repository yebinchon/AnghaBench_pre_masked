
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct plane {float dist; int dir; } ;


 int FUNC_0 (int *,struct vec3 const*) ;

__attribute__((used)) static inline void FUNC_1(struct plane *VAR_0, const struct vec3 *VAR_1,
        float VAR_2)
{
 FUNC_0(&VAR_0->dir, VAR_1);
 VAR_0->dist = VAR_2;
}
