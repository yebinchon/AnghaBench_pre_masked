
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct bounds {int min; int max; } ;


 int FUNC_0 (struct vec3*,struct vec3 const*) ;
 float FUNC_1 (struct vec3*,struct vec3*) ;
 int FUNC_2 (struct vec3*,int *,int *) ;

__attribute__((used)) static inline float FUNC_3(const struct bounds *VAR_0,
          const struct vec3 *VAR_1)
{
 struct vec3 VAR_2, VAR_3;
 FUNC_2(&VAR_2, &VAR_0->max, &VAR_0->min);
 FUNC_0(&VAR_3, VAR_1);
 return FUNC_1(&VAR_2, &VAR_3);
}
