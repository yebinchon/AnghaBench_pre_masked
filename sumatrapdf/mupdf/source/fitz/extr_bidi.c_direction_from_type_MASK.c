
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_bidi_direction ;
typedef int fz_bidi_chartype ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static fz_bidi_direction FUNC_0(fz_bidi_chartype VAR_3)
{
 switch (VAR_3)
 {
 case 129:
 case 130:
  return VAR_0;

 case 128:
 case 131:
  return VAR_2;

 default:
  return VAR_1;
 }
}
