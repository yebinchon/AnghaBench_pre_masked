
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dib ;
struct TYPE_6__ {int biHeight; int biWidth; } ;
struct TYPE_5__ {int bmBitsPixel; int* bmBits; } ;
struct TYPE_7__ {TYPE_2__ dsBmih; TYPE_1__ dsBm; } ;
typedef int HBITMAP ;
typedef TYPE_3__ DIBSECTION ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int,TYPE_3__*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1 (HBITMAP VAR_2, BOOL* VAR_3)
{
    DIBSECTION VAR_4;
    int VAR_5;
    BYTE* VAR_6;

    *VAR_3 = VAR_0;

    if (!VAR_2 || FUNC_0( VAR_2, sizeof(VAR_4), &VAR_4 ) != sizeof(VAR_4))
        return VAR_0;

    if(VAR_4.dsBm.bmBitsPixel != 32)

        return VAR_1;

    VAR_6 = VAR_4.dsBm.bmBits;
    VAR_5 = VAR_4.dsBmih.biHeight * VAR_4.dsBmih.biWidth;

    while (VAR_5-- > 0)
    {
        int VAR_7 = VAR_6[3]+1;
        VAR_6[0] = (VAR_6[0] * VAR_7) >> 8;
        VAR_6[1] = (VAR_6[1] * VAR_7) >> 8;
        VAR_6[2] = (VAR_6[2] * VAR_7) >> 8;
        VAR_6 += 4;

        if (VAR_7 != 256)
            *VAR_3 = VAR_1;
    }

    return VAR_1;
}
