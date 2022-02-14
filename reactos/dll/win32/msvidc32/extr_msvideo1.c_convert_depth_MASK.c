
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int biWidth; int biBitCount; int biHeight; } ;
typedef TYPE_1__ BITMAPINFOHEADER ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, int VAR_1, char *VAR_2, BITMAPINFOHEADER *VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6 = FUNC_1(VAR_3->biWidth, VAR_1);
    int VAR_7 = FUNC_1(VAR_3->biWidth, VAR_3->biBitCount);

    if (VAR_1 == 16 && VAR_3->biBitCount == 24)
    {
        static const unsigned char VAR_8[] =
        {
            0x00, 0x08, 0x10, 0x19, 0x21, 0x29, 0x31, 0x3a,
            0x42, 0x4a, 0x52, 0x5a, 0x63, 0x6b, 0x73, 0x7b,
            0x84, 0x8c, 0x94, 0x9c, 0xa5, 0xad, 0xb5, 0xbd,
            0xc5, 0xce, 0xd6, 0xde, 0xe6, 0xef, 0xf7, 0xff,
        };

        for (VAR_5 = 0; VAR_5 < VAR_3->biHeight; VAR_5++)
        {
            WORD *VAR_9 = (WORD *)(VAR_0 + VAR_5 * VAR_6);
            char *VAR_10 = VAR_2 + VAR_5 * VAR_7;

            for (VAR_4 = 0; VAR_4 < VAR_3->biWidth; VAR_4++)
            {
                WORD VAR_11 = *VAR_9++;
                *VAR_10++ = VAR_8[(VAR_11 & 0x7c00u) >> 10];
                *VAR_10++ = VAR_8[(VAR_11 & 0x03e0u) >> 5];
                *VAR_10++ = VAR_8[(VAR_11 & 0x001fu)];
            }
        }
    }
    else
        FUNC_0("Conversion from %d to %d bit unimplemented\n", VAR_1, VAR_3->biBitCount);
}
