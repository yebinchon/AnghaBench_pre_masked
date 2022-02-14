
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {scalar_t__ rgbBlue; scalar_t__ rgbGreen; scalar_t__ rgbRed; } ;
typedef TYPE_1__ RGBQUAD ;
typedef int INT ;
typedef size_t BYTE ;


 int FUNC_0 (int ) ;

__attribute__((used)) static BYTE FUNC_1(UINT VAR_0, const RGBQUAD *VAR_1, RGBQUAD VAR_2)
{
  INT VAR_3 = 0x00FFFFFF;
  UINT VAR_4;
  UINT VAR_5 = 0;


  FUNC_0(VAR_1 != ((void*)0));

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    int VAR_6 = ((int)VAR_1[VAR_4].rgbRed - (int)VAR_2.rgbRed);
    int VAR_7 = ((int)VAR_1[VAR_4].rgbGreen - (int)VAR_2.rgbGreen);
    int VAR_8 = ((int)VAR_1[VAR_4].rgbBlue - (int)VAR_2.rgbBlue);

    VAR_6 = VAR_6*VAR_6 + VAR_7*VAR_7 + VAR_8*VAR_8;

    if (VAR_6 < VAR_3) {
      VAR_5 = VAR_4;
      VAR_3 = VAR_6;
      if (VAR_3 == 0)
 break;
    }
  }

  return VAR_5;
}
