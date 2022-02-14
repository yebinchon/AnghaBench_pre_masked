
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* DWORD ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 char const* FUNC_3 (char*,char*) ;

__attribute__((used)) static inline const char *FUNC_4( DWORD VAR_0 )
{
    char VAR_1[5];
    FUNC_0(VAR_1, VAR_0);
    VAR_1[4] = '\0';

    if (FUNC_1(VAR_1[0]) && FUNC_1(VAR_1[1]) && FUNC_1(VAR_1[2])
    && (FUNC_1(VAR_1[3]) || FUNC_2(VAR_1[3])))
        return FUNC_3("%s", VAR_1);
    return FUNC_3("0x%08x", VAR_0);
}
