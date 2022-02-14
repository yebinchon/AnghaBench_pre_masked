
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SECURITY_STATUS ;
typedef int* PBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 char* VAR_2 ;

SECURITY_STATUS FUNC_1(PBYTE VAR_3, int VAR_4, char* VAR_5,
        int VAR_6, int *VAR_7)
{
    int VAR_8, VAR_9;
    PBYTE VAR_10 = VAR_3;
    int VAR_11 = (VAR_4*8 + 5)/6, VAR_12 = (VAR_11 % 4) ? 4 - (VAR_11 % 4) : 0;

    FUNC_0("bytes is %d, pad bytes is %d\n", VAR_11, VAR_12);
    *VAR_7 = VAR_11 + VAR_12;

    if(VAR_11 + VAR_12 + 1 > VAR_6)
        return VAR_0;


    VAR_8 = VAR_4 / 3;

    VAR_9 = 0;
    while(VAR_8 > 0)
    {

        VAR_5[VAR_9 + 0] = VAR_2[ ( VAR_10[0] >> 2) & 0x3f ];


        VAR_5[VAR_9 + 1] = VAR_2[ ((VAR_10[0] << 4) & 0x30) | (VAR_10[1] >> 4 & 0x0f)];


        VAR_5[VAR_9 + 2] = VAR_2[ ((VAR_10[1] << 2) & 0x3c) | (VAR_10[2] >> 6 & 0x03)];

        VAR_5[VAR_9 + 3] = VAR_2[ VAR_10[2] & 0x3f];
        VAR_9 += 4;
        VAR_10 += 3;
        VAR_8--;
    }

    switch(VAR_12)
    {
        case 1:

            VAR_5[VAR_9 + 0] = VAR_2[ ( VAR_10[0] >> 2) & 0x3f ];


            VAR_5[VAR_9 + 1] = VAR_2[ ((VAR_10[0] << 4) & 0x30) | (VAR_10[1] >> 4 & 0x0f)];


            VAR_5[VAR_9 + 2] = VAR_2[ ((VAR_10[1] << 2) & 0x3c) ];

            VAR_5[VAR_9 + 3] = '=';
            VAR_5[VAR_9 + 4] = 0;
            break;
        case 2:

            VAR_5[VAR_9 + 0] = VAR_2[ ( VAR_10[0] >> 2) & 0x3f ];


            VAR_5[VAR_9 + 1] = VAR_2[ ((VAR_10[0] << 4) & 0x30)];

            VAR_5[VAR_9 + 2] = '=';

            VAR_5[VAR_9 + 3] = '=';
            VAR_5[VAR_9 + 4] = 0;
            break;
        default:
            VAR_5[VAR_9] = 0;
    }

    return VAR_1;
}
