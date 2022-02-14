
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_font_t ;
typedef int hb_codepoint_t ;
typedef int hb_bool_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static hb_bool_t
FUNC_0 (hb_font_t *VAR_2, void *VAR_3,
     hb_codepoint_t VAR_4, hb_codepoint_t VAR_5,
     hb_codepoint_t *VAR_6,
     void *VAR_7)
{
  switch (VAR_4) {
  case 'T': *VAR_6 = 1; return VAR_1;
  case 'e': *VAR_6 = 2; return VAR_1;
  case 's': *VAR_6 = 3; return VAR_1;
  }
  return VAR_0;
}
