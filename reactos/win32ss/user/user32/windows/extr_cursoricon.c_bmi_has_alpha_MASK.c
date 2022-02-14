
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int biBitCount; int biWidth; int biHeight; } ;
struct TYPE_5__ {TYPE_1__ bmiHeader; } ;
typedef int BOOL ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static BOOL FUNC_1( const BITMAPINFO *VAR_1, const void *VAR_2 )
{
    int VAR_3;
    BOOL VAR_4 = VAR_0;
    const unsigned char *VAR_5 = VAR_2;

    if (VAR_1->bmiHeader.biBitCount != 32) return VAR_0;
    for (VAR_3 = 0; VAR_3 < VAR_1->bmiHeader.biWidth * FUNC_0(VAR_1->bmiHeader.biHeight); VAR_3++, VAR_5 += 4)
        if ((VAR_4 = (VAR_5[3] != 0))) break;
    return VAR_4;
}
