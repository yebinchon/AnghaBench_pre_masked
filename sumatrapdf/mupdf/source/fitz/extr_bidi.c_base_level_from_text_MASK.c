
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_bidi_level ;
typedef int fz_bidi_chartype ;





 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static fz_bidi_level FUNC_0(fz_bidi_chartype *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  switch (VAR_2[VAR_4])
  {

  case 129:
   return VAR_0;


  case 128:
  case 130:
   return VAR_1;
  }
 }
 return VAR_0;
}
