
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int gs_texture_t ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int*,int *,int *) ;
 int * FUNC_2 (int ,int ,int,int,int const**,int ) ;

gs_texture_t *FUNC_3(const char *VAR_0)
{
 enum gs_color_format VAR_1;
 uint32_t VAR_2;
 uint32_t VAR_3;
 uint8_t *VAR_4 = FUNC_1(VAR_0, &VAR_1, &VAR_2, &VAR_3);
 gs_texture_t *VAR_5 = ((void*)0);

 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1, 1,
     (const uint8_t **)&VAR_4, 0);
  FUNC_0(VAR_4);
 }

 return VAR_5;
}
