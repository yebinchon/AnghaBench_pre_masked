
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;


 float FUNC_0 (float) ;
 float FUNC_1 (struct vec3*,struct vec3*) ;
 int FUNC_2 (struct vec3*,struct vec3 const*,struct vec3 const*) ;

__attribute__((used)) static inline float FUNC_3(const struct vec3 *VAR_0, const struct vec3 *VAR_1)
{
 struct vec3 VAR_2;
 float VAR_3;

 FUNC_2(&VAR_2, VAR_0, VAR_1);
 VAR_3 = FUNC_1(&VAR_2, &VAR_2);
 return (VAR_3 > 0.0f) ? FUNC_0(VAR_3) : 0.0f;
}
