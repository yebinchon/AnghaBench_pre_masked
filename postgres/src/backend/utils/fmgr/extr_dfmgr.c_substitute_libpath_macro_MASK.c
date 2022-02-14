
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*) ;
 int VAR_2 ;
 char* FUNC_5 (char*,int ,char const*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

__attribute__((used)) static char *
FUNC_9(const char *VAR_3)
{
 const char *VAR_4;

 FUNC_0(VAR_3 != ((void*)0));


 if (VAR_3[0] != '$')
  return FUNC_6(VAR_3);

 if ((VAR_4 = FUNC_4(VAR_3)) == ((void*)0))
  VAR_4 = VAR_3 + FUNC_7(VAR_3);

 if (FUNC_7("$libdir") != VAR_4 - VAR_3 ||
  FUNC_8(VAR_3, "$libdir", FUNC_7("$libdir")) != 0)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("invalid macro name in dynamic library path: %s",
      VAR_3)));

 return FUNC_5("%s%s", VAR_2, VAR_4);
}
