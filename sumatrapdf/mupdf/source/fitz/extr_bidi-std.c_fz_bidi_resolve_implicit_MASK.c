
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_bidi_level ;
typedef int fz_bidi_chartype ;


 int const VAR_0 ;
 scalar_t__** VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;

void FUNC_2(const fz_bidi_chartype *VAR_2, fz_bidi_level *VAR_3, size_t VAR_4)
{
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {



  if (VAR_2[VAR_5] == VAR_0)
  {
   continue;
  }
  FUNC_0(VAR_2[VAR_5] > 0);
  FUNC_0(VAR_2[VAR_5] < 5);
  VAR_3[VAR_5] += VAR_1[FUNC_1(VAR_3[VAR_5])][VAR_2[VAR_5] - 1];
 }
}
