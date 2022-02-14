
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int* PULONG ;
typedef int* LPSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int*,char*) ;
 int VAR_1 ;

BOOLEAN FUNC_1(LPSTR VAR_2,PULONG VAR_3)
{
    ULONG VAR_4;

 VAR_4=FUNC_0(VAR_2," ");
    if(VAR_4 > 1)
     return VAR_0;

    switch(*VAR_2)
    {

        case 'b':
        case 'B':
            *VAR_3 = 1;
            break;

        case 'w':
        case 'W':
            *VAR_3 = 2;
            break;

        case 'd':
        case 'D':
            *VAR_3 = 4;
            break;

        case 'q':
        case 'Q':
            *VAR_3 = 4;
            break;
        default:
            return VAR_0;
    }

    return VAR_1;
}
