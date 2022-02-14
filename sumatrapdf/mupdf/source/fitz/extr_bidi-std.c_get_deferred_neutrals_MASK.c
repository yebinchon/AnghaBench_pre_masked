
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_bidi_level ;
typedef int fz_bidi_chartype ;
typedef int fz_bidi_action ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static fz_bidi_chartype
FUNC_1(fz_bidi_action VAR_1, fz_bidi_level VAR_2)
{
 VAR_1 = (VAR_1 >> 4) & 0xF;
 if (VAR_1 == (VAR_0 >> 4))
  return FUNC_0(VAR_2);
 else
  return VAR_1;
}
