
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_2, unsigned char *VAR_3)
{
    BOOL VAR_4 = VAR_0;
    BOOL VAR_5 = VAR_0;
    static const unsigned char VAR_6[] = {129,129,129,129,129,131,131,131,131,
        131,131,131,131,131,131,129,131,131,131,131,131,131,131,131,131,131,
        131,131,131,131,131,131,131,131,131,131,131,131,131,131,131,131,131,
        131,131,131,131,131,131,131,131,131,131,131,131,131,131,131,131,131,
        131,129,129 };
    static const unsigned char VAR_7[] = {66,117,118,65,69,146,64,66,68,70,
        72,131,133,135,98,91,65,67,69,71,73,74,76,78,80,82,84,86,88,90,92,94,
        96,99,101,103,105,106,107,108,109,110,113,116,119,122,125,126,128,
        129,130,132,134,136,137,138,139,140,141,143,147,74,75};

    if (( *VAR_3 == 222) && ((FUNC_1(*VAR_2) || (*VAR_2 == 179))))
            VAR_5 = VAR_1;
    else if ((*VAR_3 == 223) && (FUNC_0(*VAR_2)))
            VAR_4 = VAR_1;

    if (*VAR_2 >= 161 && *VAR_2 <= 223)
    {
        unsigned char VAR_8 = *VAR_2 - 161;
        *VAR_2 = VAR_6[VAR_8];
        *VAR_3 = VAR_7[VAR_8];
    }

    if (VAR_4 || VAR_5)
    {
        if (VAR_5)
        {
            if (((*VAR_3 >= 74) && (*VAR_3 <= 103)) || ((*VAR_3 >= 110) && (*VAR_3 <= 122)))
                (*VAR_3)++;
            else if ((*VAR_2 == 131) && (*VAR_3 == 69))
                *VAR_3 = 148;
        }
        else if ((VAR_4) && ((*VAR_3 >= 110) && (*VAR_3 <= 122)))
            *VAR_3+= 2;

        return 1;
    }

    return 0;
}
