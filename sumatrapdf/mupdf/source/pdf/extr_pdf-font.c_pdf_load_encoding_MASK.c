
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char** VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (char const*,char*) ;

void
FUNC_1(const char **VAR_4, const char *VAR_5)
{
 const char * const *VAR_6 = ((void*)0);
 int VAR_7;

 if (!FUNC_0(VAR_5, "StandardEncoding"))
  VAR_6 = VAR_0;
 if (!FUNC_0(VAR_5, "MacRomanEncoding"))
  VAR_6 = VAR_2;
 if (!FUNC_0(VAR_5, "MacExpertEncoding"))
  VAR_6 = VAR_1;
 if (!FUNC_0(VAR_5, "WinAnsiEncoding"))
  VAR_6 = VAR_3;

 if (VAR_6)
  for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
   VAR_4[VAR_7] = VAR_6[VAR_7];
}
