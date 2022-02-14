
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int,char*,int,char*,...) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, char *VAR_2, BOOL VAR_3)
{
  DWORD VAR_4;
  char VAR_5[VAR_0];

  VAR_4 = FUNC_0(VAR_0, VAR_2);
  FUNC_5(VAR_4 > 0, "GetCurrentDirectoryA returned %d, GLE=%d\n",
     VAR_4, FUNC_1());
  if(VAR_2[VAR_4-1] != '\\')

      FUNC_3(VAR_2, "\\");
  FUNC_3(VAR_2, VAR_1);
  if(VAR_3)
  {
    FUNC_4(VAR_5, VAR_2, VAR_0);
    VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_0-1);
    FUNC_5(VAR_4 > 0, "GetShortPathNameA returned %d for '%s', GLE=%d\n",
       VAR_4, VAR_2, FUNC_1());
  }
}
