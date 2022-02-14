
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct matrix4 {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct matrix4*,struct vec3 const*,struct matrix4*) ;
 int VAR_0 ;
 struct matrix4* FUNC_2 (int ) ;

void FUNC_3(const struct vec3 *VAR_1)
{
 struct matrix4 *VAR_2;

 if (!FUNC_0("gs_matrix_translate"))
  return;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  FUNC_1(VAR_2, VAR_1, VAR_2);
}
