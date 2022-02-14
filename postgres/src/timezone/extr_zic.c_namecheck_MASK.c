
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (char const*,unsigned char) ;
 int FUNC_3 (int ,char const*,unsigned char) ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_1)
{
 char const *VAR_2;


 static char const VAR_3[] =
 "-/_"
 "abcdefghijklmnopqrstuvwxyz"
 "ABCDEFGHIJKLMNOPQRSTUVWXYZ";





 static char const VAR_4[] =
 " !\"#$%&'()*+,.0123456789:;<=>?@[\\]^`{|}~";

 char const *VAR_5 = VAR_1;

 for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
 {
  unsigned char VAR_6 = *VAR_2;

  if (VAR_0 && !FUNC_2(VAR_3, VAR_6))
  {
   FUNC_3((FUNC_2(VAR_4, VAR_6)
      ? FUNC_0("file name '%s' contains byte '%c'")
      : FUNC_0("file name '%s' contains byte '\\%o'")),
     VAR_1, VAR_6);
  }
  if (VAR_6 == '/')
  {
   if (!FUNC_1(VAR_1, VAR_5, VAR_2))
    return 0;
   VAR_5 = VAR_2 + 1;
  }
 }
 return FUNC_1(VAR_1, VAR_5, VAR_2);
}
