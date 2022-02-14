
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,char const*,char*) ;
 int FUNC_4 (char const*,int) ;
 char* VAR_3 ;
 int VAR_4 ;
 char* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(char const *VAR_5)
{
 if (FUNC_1(VAR_5) != 0)
 {
  int VAR_6 = VAR_2;

  if (VAR_6 == VAR_0)
  {
   FUNC_4(VAR_5, 0);
   VAR_6 = FUNC_1(VAR_5) == 0 ? 0 : VAR_2;
  }
  if (VAR_6 != 0)
  {
   FUNC_3(VAR_4, FUNC_0("%s: Can't chdir to %s: %s\n"),
     VAR_3, VAR_5, FUNC_5(VAR_6));
   FUNC_2(VAR_1);
  }
 }
}
