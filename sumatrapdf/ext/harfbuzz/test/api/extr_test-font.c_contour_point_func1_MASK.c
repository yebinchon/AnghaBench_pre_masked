
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_position_t ;
typedef int hb_font_t ;
typedef int hb_codepoint_t ;
typedef int hb_bool_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static hb_bool_t
FUNC_0 (hb_font_t *VAR_2, void *VAR_3,
       hb_codepoint_t VAR_4, unsigned int VAR_5,
       hb_position_t *VAR_6, hb_position_t *VAR_7,
       void *VAR_8)
{
  if (VAR_4 == 1) {
    *VAR_6 = 2;
    *VAR_7 = 3;
    return VAR_1;
  }
  if (VAR_4 == 2) {
    *VAR_6 = 4;
    *VAR_7 = 5;
    return VAR_1;
  }

  return VAR_0;
}
