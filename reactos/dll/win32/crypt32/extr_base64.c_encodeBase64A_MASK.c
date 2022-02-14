
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef int LPCSTR ;
typedef int LONG ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 void** VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static LONG FUNC_3(const BYTE *VAR_3, int VAR_4, LPCSTR VAR_5,
 char* VAR_6, DWORD *VAR_7)
{
    int VAR_8, VAR_9;
    const BYTE *VAR_10 = VAR_3;
    int VAR_11 = (VAR_4*8 + 5)/6, VAR_12 = (VAR_11 % 4) ? 4 - (VAR_11 % 4) : 0;
    DWORD VAR_13;
    LPSTR VAR_14;

    FUNC_0("bytes is %d, pad bytes is %d\n", VAR_11, VAR_12);
    VAR_13 = VAR_11 + VAR_12;
    VAR_13 += (VAR_13 / 64 + (VAR_13 % 64 ? 1 : 0)) * FUNC_2(VAR_5);
    VAR_13++;

    if (VAR_13 > *VAR_7)
    {
        *VAR_7 = VAR_13;
        return VAR_0;
    }
    else
        *VAR_7 = VAR_13;


    VAR_8 = VAR_4 / 3;

    VAR_14 = VAR_6;
    VAR_9 = 0;
    while (VAR_8 > 0)
    {
        if (VAR_9 && VAR_9 % 64 == 0)
        {
            FUNC_1(VAR_14, VAR_5);
            VAR_14 += FUNC_2(VAR_5);
        }

        *VAR_14++ = VAR_2[ ( VAR_10[0] >> 2) & 0x3f ];


        *VAR_14++ = VAR_2[ ((VAR_10[0] << 4) & 0x30) | (VAR_10[1] >> 4 & 0x0f)];


        *VAR_14++ = VAR_2[ ((VAR_10[1] << 2) & 0x3c) | (VAR_10[2] >> 6 & 0x03)];

        *VAR_14++ = VAR_2[ VAR_10[2] & 0x3f];
        VAR_9 += 4;
        VAR_10 += 3;
        VAR_8--;
    }

    switch(VAR_12)
    {
        case 1:

            *VAR_14++ = VAR_2[ ( VAR_10[0] >> 2) & 0x3f ];


            *VAR_14++ = VAR_2[ ((VAR_10[0] << 4) & 0x30) | (VAR_10[1] >> 4 & 0x0f)];


            *VAR_14++ = VAR_2[ ((VAR_10[1] << 2) & 0x3c) ];

            *VAR_14++ = '=';
            break;
        case 2:

            *VAR_14++ = VAR_2[ ( VAR_10[0] >> 2) & 0x3f ];


            *VAR_14++ = VAR_2[ ((VAR_10[0] << 4) & 0x30)];

            *VAR_14++ = '=';

            *VAR_14++ = '=';
            break;
    }
    FUNC_1(VAR_14, VAR_5);

    return VAR_1;
}
