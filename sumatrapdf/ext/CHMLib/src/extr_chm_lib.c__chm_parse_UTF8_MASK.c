
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UInt64 ;
typedef int UChar ;



__attribute__((used)) static int FUNC_0(UChar **VAR_0, UInt64 VAR_1, char *VAR_2)
{






    while (VAR_1 != 0)
    {
        *VAR_2++ = (char)(*(*VAR_0)++);
        --VAR_1;
    }

    *VAR_2 = '\0';
    return 1;
}
