
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int VAR_4 ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(char const *VAR_5, bool VAR_6)
{
 char *VAR_7;
 char *VAR_8;

 VAR_8 = VAR_7 = FUNC_1(VAR_5);
 while (*VAR_8 == '/')
  VAR_8++;

 while (VAR_8 && ((VAR_8 = FUNC_7(VAR_8, '/')) || !VAR_6))
 {
  if (VAR_8)
   *VAR_8 = '\0';







  if (FUNC_6(VAR_7, VAR_2) != 0)
  {





   int VAR_9 = VAR_3;

   if (VAR_9 != VAR_0 && !FUNC_5(VAR_7))
   {
    FUNC_2(FUNC_0("%s: Cannot create directory %s: %s"),
       VAR_4, VAR_7, FUNC_8(VAR_9));
    FUNC_3(VAR_1);
   }
  }
  if (VAR_8)
   *VAR_8++ = '/';
 }
 FUNC_4(VAR_7);
}
