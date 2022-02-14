
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NTSTATUS ;
 void** VAR_0 ;

__attribute__((used)) static
char*
FUNC_0(NTSTATUS VAR_1, char* VAR_2)
{
    unsigned char VAR_3;

    switch (VAR_1)
    {
    case 131:
        VAR_3 = 8;
        break;
    case 129:
    case 134:
        VAR_3 = 5;
        break;
    case 130:
    case 135:
        VAR_3 = 16;
        break;
    case 132:
        VAR_3 = 4;
        break;
    case 128:
    case 133:
    case 136:
        VAR_3 = 11;
        break;
    default:
        VAR_3 = 7;
    }
    *VAR_2++ = VAR_0[(VAR_3 >> 4) & 0xf];
    *VAR_2++ = VAR_0[VAR_3 & 0xf];
    return VAR_2;
}
