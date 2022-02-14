
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ format; } ;
struct gs_texture_2d {scalar_t__ width; scalar_t__ height; TYPE_1__ base; } ;
struct gs_stage_surface {scalar_t__ format; scalar_t__ width; scalar_t__ height; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(struct gs_stage_surface *VAR_2, struct gs_texture_2d *VAR_3)
{
 if (!VAR_3) {
  FUNC_0(VAR_1, "Source texture is NULL");
  return 0;
 }

 if (VAR_3->base.type != VAR_0) {
  FUNC_0(VAR_1, "Source texture must be a 2D texture");
  return 0;
 }

 if (!VAR_2) {
  FUNC_0(VAR_1, "Destination surface is NULL");
  return 0;
 }

 if (VAR_3->base.format != VAR_2->format) {
  FUNC_0(VAR_1, "Source and destination formats do not match");
  return 0;
 }

 if (VAR_3->width != VAR_2->width || VAR_3->height != VAR_2->height) {
  FUNC_0(VAR_1, "Source and destination must have the same "
    "dimensions");
  return 0;
 }

 return 1;
}
