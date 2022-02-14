
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_0, const char *VAR_1)
{
    char *VAR_2, *VAR_3 = FUNC_0( VAR_0, VAR_1 );

    for (VAR_2 = VAR_3; *VAR_2; VAR_2++) if (!FUNC_1(*VAR_2)) *VAR_2 = '_';
    return VAR_3;
}
