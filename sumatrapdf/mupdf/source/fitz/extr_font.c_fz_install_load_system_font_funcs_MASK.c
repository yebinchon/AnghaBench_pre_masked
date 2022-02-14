
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_load_system_font_fn ;
typedef int fz_load_system_fallback_font_fn ;
typedef int fz_load_system_cjk_font_fn ;
struct TYPE_5__ {TYPE_1__* font; } ;
typedef TYPE_2__ fz_context ;
struct TYPE_4__ {int * load_fallback_font; int * load_cjk_font; int * load_font; } ;



void FUNC_0(fz_context *VAR_0,
  fz_load_system_font_fn *VAR_1,
  fz_load_system_cjk_font_fn *VAR_2,
  fz_load_system_fallback_font_fn *VAR_3)
{
 VAR_0->font->load_font = VAR_1;
 VAR_0->font->load_cjk_font = VAR_2;
 VAR_0->font->load_fallback_font = VAR_3;
}
