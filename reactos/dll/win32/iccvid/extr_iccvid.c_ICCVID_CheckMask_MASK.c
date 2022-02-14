
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rgbBlue; int rgbGreen; int rgbRed; } ;
typedef TYPE_1__ RGBQUAD ;
typedef scalar_t__ COLORREF ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_2(RGBQUAD VAR_2[3], COLORREF VAR_3, COLORREF VAR_4, COLORREF VAR_5)
{
    COLORREF VAR_6 = FUNC_0(VAR_2[0].rgbRed, VAR_2[0].rgbGreen, VAR_2[0].rgbBlue);
    COLORREF VAR_7 = FUNC_0(VAR_2[1].rgbRed, VAR_2[1].rgbGreen, VAR_2[1].rgbBlue);
    COLORREF VAR_8 = FUNC_0(VAR_2[2].rgbRed, VAR_2[2].rgbGreen, VAR_2[2].rgbBlue);

    FUNC_1("\nbmiColors[0] = 0x%08x\nbmiColors[1] = 0x%08x\nbmiColors[2] = 0x%08x\n",
        VAR_6, VAR_7, VAR_8);

    if ((VAR_6 == VAR_3) &&
        (VAR_7 == VAR_4) &&
        (VAR_8 == VAR_5))
        return VAR_1;
    return VAR_0;
}
