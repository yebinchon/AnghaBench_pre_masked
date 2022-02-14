
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;



 int VAR_0 ;




 char const* FUNC_0 (char*,char*) ;

__attribute__((used)) static const char *FUNC_1(DWORD VAR_1)
{
    char VAR_2[6];
    unsigned int VAR_3;
    DWORD VAR_4[4];

    switch (VAR_1)
    {
        case 132:
            return "";
        case 130:
            return ".x";
        case 129:
            return ".y";
        case 128:
            return ".z";
        case 131:
            return ".w";
    }

    VAR_4[0] = (VAR_1 >> (VAR_0 + 0)) & 0x03;
    VAR_4[1] = (VAR_1 >> (VAR_0 + 2)) & 0x03;
    VAR_4[2] = (VAR_1 >> (VAR_0 + 4)) & 0x03;
    VAR_4[3] = (VAR_1 >> (VAR_0 + 6)) & 0x03;

    VAR_2[0] = '.';
    for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
    {
        switch (VAR_4[VAR_3])
        {
            case 0: VAR_2[1 + VAR_3] = 'x'; break;
            case 1: VAR_2[1 + VAR_3] = 'y'; break;
            case 2: VAR_2[1 + VAR_3] = 'z'; break;
            case 3: VAR_2[1 + VAR_3] = 'w'; break;
        }
    }
    VAR_2[5] = '\0';

    return FUNC_0("%s", VAR_2);
}
