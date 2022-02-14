
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct matrix3 {int dummy; } ;


 int FUNC_0 (struct matrix3*,struct matrix3 const*,struct vec3*) ;
 int FUNC_1 (struct vec3*,float,float,float) ;

__attribute__((used)) static inline void FUNC_2(struct matrix3 *VAR_0,
           const struct matrix3 *VAR_1, float VAR_2,
           float VAR_3, float VAR_4)
{
 struct vec3 VAR_5;
 FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_0, VAR_1, &VAR_5);
}
