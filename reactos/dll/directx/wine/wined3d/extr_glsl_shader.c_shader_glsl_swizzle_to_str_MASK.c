
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int DWORD ;
typedef scalar_t__ BOOL ;


 unsigned int VAR_0 ;
 size_t FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(DWORD VAR_1, BOOL VAR_2, DWORD VAR_3, char *VAR_4)
{



    const char *VAR_5 = VAR_2 ? "zyxw" : "xyzw";
    unsigned int VAR_6;

    *VAR_4++ = '.';
    for (VAR_6 = 0; VAR_6 < 4; ++VAR_6)
    {
        if (VAR_3 & (VAR_0 << VAR_6))
            *VAR_4++ = VAR_5[FUNC_0(VAR_1, VAR_6)];
    }
    *VAR_4 = '\0';
}
