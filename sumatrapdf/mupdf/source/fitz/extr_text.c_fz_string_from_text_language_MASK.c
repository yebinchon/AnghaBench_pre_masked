
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_text_language ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;

char *FUNC_1(char VAR_2[8], fz_text_language VAR_3)
{
 int VAR_4;


 if (VAR_2 == ((void*)0))
  return ((void*)0);

 if (VAR_3 == VAR_1)
  FUNC_0(VAR_2, "zh-Hant", 8);
 else if (VAR_3 == VAR_0)
  FUNC_0(VAR_2, "zh-Hans", 8);
 else
 {
  VAR_4 = VAR_3 % 27;
  VAR_3 = VAR_3 / 27;
  VAR_2[0] = VAR_4 == 0 ? 0 : VAR_4 - 1 + 'a';
  VAR_4 = VAR_3 % 27;
  VAR_3 = VAR_3 / 27;
  VAR_2[1] = VAR_4 == 0 ? 0 : VAR_4 - 1 + 'a';
  VAR_4 = VAR_3 % 27;
  VAR_2[2] = VAR_4 == 0 ? 0 : VAR_4 - 1 + 'a';
  VAR_2[3] = 0;
 }

 return VAR_2;
}
