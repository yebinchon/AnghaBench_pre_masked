
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int tif_clientdata; } ;
struct TYPE_4__ {int bitspersample; int ** BWmap; TYPE_3__* tif; int * Map; } ;
typedef int TIFFRGBValue ;
typedef TYPE_1__ TIFFRGBAImage ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(TIFFRGBAImage* VAR_0)
{
    TIFFRGBValue* VAR_1 = VAR_0->Map;
    int VAR_2 = VAR_0->bitspersample;
    int VAR_3 = 8 / VAR_2;
    int VAR_4;
    uint32* VAR_5;

    if( VAR_3 == 0 )
        VAR_3 = 1;

    VAR_0->BWmap = (uint32**) FUNC_3(
 256*sizeof (uint32 *)+(256*VAR_3*sizeof(uint32)));
    if (VAR_0->BWmap == ((void*)0)) {
  FUNC_1(VAR_0->tif->tif_clientdata, FUNC_2(VAR_0->tif), "No space for B&W mapping table");
  return (0);
    }
    VAR_5 = (uint32*)(VAR_0->BWmap + 256);
    for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
 TIFFRGBValue VAR_6;
 VAR_0->BWmap[VAR_4] = VAR_5;
 switch (VAR_2) {

 case 1:
     VAR_6 = VAR_1[VAR_4>>7]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[(VAR_4>>6)&1]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[(VAR_4>>5)&1]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[(VAR_4>>4)&1]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[(VAR_4>>3)&1]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[(VAR_4>>2)&1]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[(VAR_4>>1)&1]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[VAR_4&1]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     break;
 case 2:
     VAR_6 = VAR_1[VAR_4>>6]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[(VAR_4>>4)&3]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[(VAR_4>>2)&3]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[VAR_4&3]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     break;
 case 4:
     VAR_6 = VAR_1[VAR_4>>4]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     VAR_6 = VAR_1[VAR_4&0xf]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     break;
 case 8:
        case 16:
     VAR_6 = VAR_1[VAR_4]; *VAR_5++ = FUNC_0(VAR_6,VAR_6,VAR_6);;
     break;
 }

    }
    return (1);
}
