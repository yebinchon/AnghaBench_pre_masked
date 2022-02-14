
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_5__ {int tif_clientdata; } ;
struct TYPE_4__ {int bitspersample; int ** PALmap; TYPE_3__* tif; int * bluecmap; int * greencmap; int * redcmap; } ;
typedef int TIFFRGBValue ;
typedef TYPE_1__ TIFFRGBAImage ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(TIFFRGBAImage* VAR_0)
{
    int VAR_1 = VAR_0->bitspersample;
    int VAR_2 = 8 / VAR_1;
    uint16* VAR_3 = VAR_0->redcmap;
    uint16* VAR_4 = VAR_0->greencmap;
    uint16* VAR_5 = VAR_0->bluecmap;
    uint32 *VAR_6;
    int VAR_7;

    VAR_0->PALmap = (uint32**) FUNC_3(
 256*sizeof (uint32 *)+(256*VAR_2*sizeof(uint32)));
    if (VAR_0->PALmap == ((void*)0)) {
  FUNC_1(VAR_0->tif->tif_clientdata, FUNC_2(VAR_0->tif), "No space for Palette mapping table");
  return (0);
 }
    VAR_6 = (uint32*)(VAR_0->PALmap + 256);
    for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
 TIFFRGBValue VAR_8;
 VAR_0->PALmap[VAR_7] = VAR_6;

 switch (VAR_1) {
 case 1:
     VAR_8 = (TIFFRGBValue) VAR_7>>7; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) (VAR_7>>6)&1; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) (VAR_7>>5)&1; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) (VAR_7>>4)&1; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) (VAR_7>>3)&1; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) (VAR_7>>2)&1; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) (VAR_7>>1)&1; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) VAR_7&1; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     break;
 case 2:
     VAR_8 = (TIFFRGBValue) VAR_7>>6; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) (VAR_7>>4)&3; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) (VAR_7>>2)&3; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) VAR_7&3; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     break;
 case 4:
     VAR_8 = (TIFFRGBValue) VAR_7>>4; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     VAR_8 = (TIFFRGBValue) VAR_7&0xf; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     break;
 case 8:
     VAR_8 = (TIFFRGBValue) VAR_7; *VAR_6++ = FUNC_0(VAR_3[VAR_8]&0xff, VAR_4[VAR_8]&0xff, VAR_5[VAR_8]&0xff);;
     break;
 }

    }
    return (1);
}
