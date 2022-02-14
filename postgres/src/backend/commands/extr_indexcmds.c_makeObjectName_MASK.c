
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*,int,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

char *
FUNC_6(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(VAR_1);
 if (VAR_2)
 {
  VAR_8 = FUNC_5(VAR_2);
  VAR_5++;
 }
 else
  VAR_8 = 0;
 if (VAR_3)
  VAR_5 += FUNC_5(VAR_3) + 1;

 VAR_6 = VAR_0 - 1 - VAR_5;
 FUNC_0(VAR_6 > 0);






 while (VAR_7 + VAR_8 > VAR_6)
 {
  if (VAR_7 > VAR_8)
   VAR_7--;
  else
   VAR_8--;
 }

 VAR_7 = FUNC_3(VAR_1, VAR_7, VAR_7);
 if (VAR_2)
  VAR_8 = FUNC_3(VAR_2, VAR_8, VAR_8);


 VAR_4 = FUNC_2(VAR_7 + VAR_8 + VAR_5 + 1);
 FUNC_1(VAR_4, VAR_1, VAR_7);
 VAR_9 = VAR_7;
 if (VAR_2)
 {
  VAR_4[VAR_9++] = '_';
  FUNC_1(VAR_4 + VAR_9, VAR_2, VAR_8);
  VAR_9 += VAR_8;
 }
 if (VAR_3)
 {
  VAR_4[VAR_9++] = '_';
  FUNC_4(VAR_4 + VAR_9, VAR_3);
 }
 else
  VAR_4[VAR_9] = '\0';

 return VAR_4;
}
