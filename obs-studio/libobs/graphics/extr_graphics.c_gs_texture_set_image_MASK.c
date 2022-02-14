
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int gs_texture_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int **,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int *,int const*) ;
 int FUNC_4 (int *,int const*,int) ;

void FUNC_5(gs_texture_t *VAR_0, const uint8_t *VAR_1,
     uint32_t VAR_2, bool VAR_3)
{
 uint8_t *VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 int32_t VAR_7;
 int32_t VAR_8;

 if (!FUNC_3("gs_texture_set_image", VAR_0, VAR_1))
  return;

 VAR_7 = (int32_t)FUNC_0(VAR_0);

 if (!FUNC_1(VAR_0, &VAR_4, &VAR_5))
  return;

 VAR_6 = (VAR_2 < VAR_5) ? VAR_2 : VAR_5;

 if (VAR_3) {
  for (VAR_8 = VAR_7 - 1; VAR_8 >= 0; VAR_8--)
   FUNC_4(VAR_4 + (uint32_t)VAR_8 * VAR_5,
          VAR_1 + (uint32_t)(VAR_7 - VAR_8 - 1) * VAR_2,
          VAR_6);

 } else if (VAR_2 == VAR_5) {
  FUNC_4(VAR_4, VAR_1, VAR_6 * VAR_7);

 } else {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   FUNC_4(VAR_4 + (uint32_t)VAR_8 * VAR_5,
          VAR_1 + (uint32_t)VAR_8 * VAR_2, VAR_6);
 }

 FUNC_2(VAR_0);
}
