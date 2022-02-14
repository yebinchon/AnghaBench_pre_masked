
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const) ;

__attribute__((used)) static DWORD FUNC_6(const char *VAR_0)
{
    const char *VAR_1 = VAR_0;
    int VAR_2, VAR_3;

    VAR_2 = FUNC_3(VAR_1);
    if (VAR_2 <= 0)
        FUNC_0("Invalid OpenGL major version %d.\n", VAR_2);

    while (FUNC_5(*VAR_1)) ++VAR_1;
    if (*VAR_1++ != '.')
        FUNC_0("Invalid OpenGL version string %s.\n", FUNC_4(VAR_0));

    VAR_3 = FUNC_3(VAR_1);

    FUNC_2("Found OpenGL version %d.%d.\n", VAR_2, VAR_3);

    return FUNC_1(VAR_2, VAR_3);
}
