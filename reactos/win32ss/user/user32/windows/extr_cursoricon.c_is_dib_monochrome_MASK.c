
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int bcBitCount; } ;
struct TYPE_13__ {TYPE_1__ bmciHeader; TYPE_3__* bmciColors; } ;
struct TYPE_9__ {int biSize; int biBitCount; } ;
struct TYPE_12__ {TYPE_2__ bmiHeader; TYPE_4__* bmiColors; } ;
struct TYPE_11__ {int rgbRed; int rgbGreen; int rgbBlue; scalar_t__ rgbReserved; } ;
struct TYPE_10__ {int rgbtRed; int rgbtGreen; int rgbtBlue; } ;
typedef TYPE_3__ RGBTRIPLE ;
typedef TYPE_4__ RGBQUAD ;
typedef int BOOL ;
typedef TYPE_5__ BITMAPINFO ;
typedef TYPE_6__ BITMAPCOREINFO ;
typedef int BITMAPCOREHEADER ;


 int VAR_0 ;

__attribute__((used)) static BOOL FUNC_0( const BITMAPINFO* VAR_1 )
{
    if (VAR_1->bmiHeader.biSize == sizeof(BITMAPCOREHEADER))
    {
        const RGBTRIPLE *VAR_2 = ((const BITMAPCOREINFO*)VAR_1)->bmciColors;

        if (((const BITMAPCOREINFO*)VAR_1)->bmciHeader.bcBitCount != 1) return VAR_0;


        if ((VAR_2->rgbtRed == 0) && (VAR_2->rgbtGreen == 0) && (VAR_2->rgbtBlue == 0))
        {
            VAR_2++;


            return ((VAR_2->rgbtRed == 0xff) && (VAR_2->rgbtGreen == 0xff)
                 && (VAR_2->rgbtBlue == 0xff));
        }
        else return VAR_0;
    }
    else
    {
        const RGBQUAD *VAR_3 = VAR_1->bmiColors;

        if (VAR_1->bmiHeader.biBitCount != 1) return VAR_0;


        if ((VAR_3->rgbRed == 0) && (VAR_3->rgbGreen == 0) &&
            (VAR_3->rgbBlue == 0) && (VAR_3->rgbReserved == 0))
        {
            VAR_3++;


            return ((VAR_3->rgbRed == 0xff) && (VAR_3->rgbGreen == 0xff)
                 && (VAR_3->rgbBlue == 0xff) && (VAR_3->rgbReserved == 0));
        }
        else return VAR_0;
    }
}
