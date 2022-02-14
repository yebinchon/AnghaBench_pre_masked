
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char bits8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static bits8 *
FUNC_4(char *VAR_2, int VAR_3)
{
 bits8 *VAR_4;
 int VAR_5 = 0;
 char VAR_6 = 0;

 VAR_4 = FUNC_3(VAR_3 + 1);

 while (VAR_5 < VAR_3)
 {
  if (VAR_5 % 8 == 0)
   VAR_6 = 0;

  if ((VAR_2[VAR_5] == '0') || (VAR_2[VAR_5] == '1'))
   VAR_6 = VAR_6 | ((VAR_2[VAR_5] - '0') << VAR_5 % 8);
  else
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("illegal character '%c' in t_bits string", VAR_2[VAR_5])));

  if (VAR_5 % 8 == 7)
   VAR_4[VAR_5 / 8] = VAR_6;

  VAR_5++;
 }

 return VAR_4;
}
