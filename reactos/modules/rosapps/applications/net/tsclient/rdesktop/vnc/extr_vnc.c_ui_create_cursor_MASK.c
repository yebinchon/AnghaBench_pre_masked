
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint8 ;
typedef int uint32_t ;
typedef TYPE_1__* rfbCursorPtr ;
typedef int rfbCursor ;
typedef int rfbColourMap ;
struct TYPE_4__ {int colourMap; } ;
struct TYPE_3__ {int width; int height; unsigned int xhot; unsigned int yhot; char* mask; int* richSource; int backRed; int backGreen; int backBlue; scalar_t__ foreBlue; scalar_t__ foreGreen; scalar_t__ foreRed; scalar_t__ cleanup; scalar_t__ source; } ;
typedef int HCURSOR ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int*) ;
 int* FUNC_1 (int) ;

HCURSOR
FUNC_2(unsigned int VAR_1, unsigned int VAR_2, int VAR_3, int VAR_4, uint8 * VAR_5, uint8 * VAR_6)
{
 int VAR_7, VAR_8;
 uint8_t *VAR_9, *VAR_10;
 uint8_t *VAR_11;
 uint8_t VAR_12[3] = { 0xff, 0xff, 0xff };
 uint8_t VAR_13[3] = { 0, 0, 0 };
 uint8_t *VAR_14;
 rfbCursorPtr VAR_15;
 rfbColourMap *VAR_16 = &VAR_0->colourMap;

 VAR_11 = FUNC_1(sizeof(uint8_t) * VAR_3 * VAR_4);
 VAR_9 = FUNC_1(sizeof(uint32_t) * VAR_3 * VAR_4 / 4);
 VAR_10 = (uint8_t *) VAR_5;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  for (VAR_7 = 0; VAR_7 < VAR_3 / 8; VAR_7++)
  {
   VAR_9[VAR_8 * VAR_3 / 8 + VAR_7] = VAR_10[(VAR_4 - 1 - VAR_8) * VAR_3 / 8 + VAR_7] ^ 0xffffffff;
  }
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
 {
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  {


   VAR_14 = VAR_6 + ((VAR_4 - 1 - VAR_8) * VAR_3 + VAR_7) * 3;
   if (VAR_14[0] > 0x80 || VAR_14[1] > 0x80 || VAR_14[2] > 0x80)
   {
    if (!(VAR_9[(VAR_8 * VAR_3 + VAR_7) / 8] & (0x80 >> (VAR_7 & 7))))
    {

     VAR_11[VAR_8 * VAR_3 + VAR_7] = FUNC_0(VAR_16, VAR_13);
     VAR_9[(VAR_8 * VAR_3 + VAR_7) / 8] |= 0x80 >> (VAR_7 & 7);
    }
    else
     VAR_11[VAR_8 * VAR_3 + VAR_7] = FUNC_0(VAR_16, VAR_12);
   }
   else
    VAR_11[VAR_8 * VAR_3 + VAR_7] = FUNC_0(VAR_16, VAR_14);
  }
 }
 VAR_15 = (rfbCursorPtr) FUNC_1(sizeof(rfbCursor));
 VAR_15->width = VAR_3;
 VAR_15->height = VAR_4;
 VAR_15->xhot = VAR_1;
 VAR_15->yhot = VAR_2;
 VAR_15->mask = (char *) VAR_9;
 VAR_15->source = 0;
 VAR_15->richSource = VAR_11;
 VAR_15->cleanup = 0;

 VAR_15->backRed = VAR_15->backGreen = VAR_15->backBlue = 0xffff;
 VAR_15->foreRed = VAR_15->foreGreen = VAR_15->foreBlue = 0;

 return (HCURSOR) VAR_15;
}
