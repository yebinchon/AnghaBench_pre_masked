
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,char*,char const*) ;
 char* FUNC_1 (int,char*,char*,char const*) ;

__attribute__((used)) static char *
FUNC_2(int VAR_1, int VAR_2, bool VAR_3, bool VAR_4,
    char *VAR_5, const char *VAR_6)
{
 int VAR_7;
 int VAR_8;


 VAR_8 = VAR_1 % 100 + VAR_2 % 100;
 VAR_7 = VAR_1 / 100 + VAR_2 / 100 + VAR_8 / 100;
 VAR_8 %= 100;
 if (VAR_8 < 0 && VAR_7 > 0)
 {
  VAR_8 += 100;
  --VAR_7;
 }
 else if (VAR_7 < 0 && VAR_8 > 0)
 {
  VAR_8 -= 100;
  ++VAR_7;
 }
 if (VAR_3)
 {
  if (VAR_7 == 0 && VAR_8 < 0)
   VAR_5 = FUNC_0("-0", VAR_5, VAR_6);
  else
   VAR_5 = FUNC_1(VAR_7, "%02d", VAR_5, VAR_6);
 }
 if (VAR_4)
  VAR_5 = FUNC_1(((VAR_8 < 0) ? -VAR_8 : VAR_8), "%02d", VAR_5, VAR_6);
 return VAR_5;
}
