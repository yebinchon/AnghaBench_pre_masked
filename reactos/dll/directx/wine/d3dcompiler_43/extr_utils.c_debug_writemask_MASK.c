
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (char*,char*) ;

__attribute__((used)) static const char *FUNC_2(DWORD VAR_1)
{
    static const char VAR_2[] = {'x', 'y', 'z', 'w'};
    char VAR_3[5];
    unsigned int VAR_4 = 0, VAR_5 = 0;

    FUNC_0(!(VAR_1 & ~VAR_0));

    while (VAR_1)
    {
        if (VAR_1 & 1)
            VAR_3[VAR_5++] = VAR_2[VAR_4];
        VAR_1 >>= 1;
        VAR_4++;
    }
    VAR_3[VAR_5] = '\0';
    return FUNC_1(".%s", VAR_3);
}
