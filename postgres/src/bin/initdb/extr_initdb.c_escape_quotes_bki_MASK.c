
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_0)
{
 char *VAR_1;
 char *VAR_2 = FUNC_0(VAR_0);
 char *VAR_3;
 char *VAR_4;
 int VAR_5 = 0;


 VAR_4 = VAR_2;
 while ((VAR_4 = FUNC_3(VAR_4, '"')) != ((void*)0))
 {
  VAR_5++;
  VAR_4++;
 }

 VAR_1 = (char *) FUNC_2(FUNC_5(VAR_2) + 3 + VAR_5 * 3);
 VAR_3 = VAR_1;
 *VAR_3++ = '"';
 for (VAR_4 = VAR_2; *VAR_4; VAR_4++)
 {
  if (*VAR_4 == '"')
  {
   FUNC_4(VAR_3, "\\042");
   VAR_3 += 4;
  }
  else
   *VAR_3++ = *VAR_4;
 }
 *VAR_3++ = '"';
 *VAR_3 = '\0';

 FUNC_1(VAR_2);
 return VAR_1;
}
