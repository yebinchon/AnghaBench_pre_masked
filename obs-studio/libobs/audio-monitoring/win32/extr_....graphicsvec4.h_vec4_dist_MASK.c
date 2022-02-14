
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {int dummy; } ;


 float FUNC_0 (float) ;
 float FUNC_1 (struct vec4*,struct vec4*) ;
 int FUNC_2 (struct vec4*,struct vec4 const*,struct vec4 const*) ;

__attribute__((used)) static inline float FUNC_3(const struct vec4 *VAR_0, const struct vec4 *VAR_1)
{
 struct vec4 VAR_2;
 float VAR_3;

 FUNC_2(&VAR_2, VAR_0, VAR_1);
 VAR_3 = FUNC_1(&VAR_2, &VAR_2);
 return (VAR_3 > 0.0f) ? FUNC_0(VAR_3) : 0.0f;
}
