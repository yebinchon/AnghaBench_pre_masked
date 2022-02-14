
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_position_t ;
typedef int hb_font_t ;
typedef int hb_codepoint_t ;
typedef int hb_bool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned int,int*,int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static hb_bool_t
FUNC_2 (hb_font_t *VAR_1, void *VAR_2,
       hb_codepoint_t VAR_3, unsigned int VAR_4,
       hb_position_t *VAR_5, hb_position_t *VAR_6,
       void *VAR_7)
{
  if (VAR_3 == 1) {
    *VAR_5 = 6;
    *VAR_6 = 7;
    return VAR_0;
  }

  return FUNC_0 (FUNC_1 (VAR_1),
       VAR_3, VAR_4, VAR_5, VAR_6);
}
