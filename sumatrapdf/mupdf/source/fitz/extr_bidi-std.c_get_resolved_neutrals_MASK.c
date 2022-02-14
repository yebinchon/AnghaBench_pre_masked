
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_bidi_chartype ;
typedef int fz_bidi_action ;


 int VAR_0 ;

__attribute__((used)) static fz_bidi_chartype FUNC_0(fz_bidi_action VAR_1)
{
 VAR_1 = VAR_1 & 0xF;
 if (VAR_1 == VAR_0)
  return 0;
 else
  return VAR_1;
}
