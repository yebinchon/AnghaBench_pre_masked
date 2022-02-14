
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char const*,int *) ;
 int * FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_0, FILE *VAR_1, char VAR_2)
{
 if (FUNC_2(VAR_0, VAR_2) != ((void*)0) ||
  FUNC_4(VAR_0, "\r\n\"") != FUNC_5(VAR_0) ||
  FUNC_3(VAR_0, "\\.") == 0 ||
  VAR_2 == '\\' || VAR_2 == '.')
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
