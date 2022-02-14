
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {int * ptr; } ;
struct matrix4 {int dummy; } ;


 int FUNC_0 (struct matrix4*,struct matrix4*) ;
 int FUNC_1 (struct vec4 const*,struct vec4*) ;
 int FUNC_2 (struct vec4*,float const,float const,float const,float const) ;

void FUNC_3(struct matrix4 *VAR_0, const struct matrix4 *VAR_1,
   const struct matrix4 *VAR_2)
{
 const struct vec4 *VAR_3 = (const struct vec4 *)VAR_1;
 const float *VAR_4 = (const float *)VAR_2;
 struct vec4 VAR_5[4];
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   struct vec4 VAR_8;
   FUNC_2(&VAR_8, VAR_4[VAR_7], VAR_4[VAR_7 + 4], VAR_4[VAR_7 + 8],
     VAR_4[VAR_7 + 12]);
   VAR_5[VAR_6].ptr[VAR_7] = FUNC_1(&VAR_3[VAR_6], &VAR_8);
  }
 }

 FUNC_0(VAR_0, (struct matrix4 *)VAR_5);
}
