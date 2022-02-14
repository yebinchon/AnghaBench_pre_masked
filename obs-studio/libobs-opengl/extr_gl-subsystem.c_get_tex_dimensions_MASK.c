
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct gs_texture_cube {int size; } ;
struct gs_texture_2d {int height; int width; } ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ gs_texture_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(gs_texture_t *VAR_3, uint32_t *VAR_4,
          uint32_t *VAR_5)
{
 if (VAR_3->type == VAR_0) {
  struct gs_texture_2d *VAR_6 = (struct gs_texture_2d *)VAR_3;
  *VAR_4 = VAR_6->width;
  *VAR_5 = VAR_6->height;
  return 1;

 } else if (VAR_3->type == VAR_1) {
  struct gs_texture_cube *VAR_7 = (struct gs_texture_cube *)VAR_3;
  *VAR_4 = VAR_7->size;
  *VAR_5 = VAR_7->size;
  return 1;
 }

 FUNC_0(VAR_2, "Texture must be 2D or cubemap");
 return 0;
}
