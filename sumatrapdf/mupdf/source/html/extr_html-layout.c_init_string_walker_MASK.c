
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rtl; char const* start; char const* end; char const* s; int script; int language; int small_caps; int * next_font; int * font; int * base_font; int * hb_buf; int * ctx; } ;
typedef TYPE_1__ string_walker ;
typedef int hb_buffer_t ;
typedef int fz_font ;
typedef int fz_context ;



__attribute__((used)) static void FUNC_0(fz_context *VAR_0, string_walker *VAR_1, hb_buffer_t *VAR_2, int VAR_3, fz_font *VAR_4, int VAR_5, int VAR_6, int VAR_7, const char *VAR_8)
{
 VAR_1->ctx = VAR_0;
 VAR_1->hb_buf = VAR_2;
 VAR_1->rtl = VAR_3;
 VAR_1->start = VAR_8;
 VAR_1->end = VAR_8;
 VAR_1->s = VAR_8;
 VAR_1->base_font = VAR_4;
 VAR_1->script = VAR_5;
 VAR_1->language = VAR_6;
 VAR_1->font = ((void*)0);
 VAR_1->next_font = ((void*)0);
 VAR_1->small_caps = VAR_7;
}
