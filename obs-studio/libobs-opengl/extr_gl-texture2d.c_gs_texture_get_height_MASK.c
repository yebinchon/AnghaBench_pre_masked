
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_texture_2d {int height; } ;
typedef int gs_texture_t ;


 int FUNC_0 (int const*,char*) ;

uint32_t FUNC_1(const gs_texture_t *VAR_0)
{
 const struct gs_texture_2d *VAR_1 = (const struct gs_texture_2d *)VAR_0;
 if (!FUNC_0(VAR_0, "gs_texture_get_height"))
  return 0;

 return VAR_1->height;
}
