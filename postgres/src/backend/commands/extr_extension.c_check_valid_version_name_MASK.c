
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2)
{
 int VAR_3 = FUNC_5(VAR_2);





 if (VAR_3 == 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("invalid extension version name: \"%s\"", VAR_2),
     FUNC_2("Version names must not be empty.")));




 if (FUNC_6(VAR_2, "--"))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("invalid extension version name: \"%s\"", VAR_2),
     FUNC_2("Version names must not contain \"--\".")));




 if (VAR_2[0] == '-' || VAR_2[VAR_3 - 1] == '-')
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("invalid extension version name: \"%s\"", VAR_2),
     FUNC_2("Version names must not begin or end with \"-\".")));





 if (FUNC_4(VAR_2) != ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("invalid extension version name: \"%s\"", VAR_2),
     FUNC_2("Version names must not contain directory separator characters.")));
}
