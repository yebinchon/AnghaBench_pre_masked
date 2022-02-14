
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int bytewidth; int height; int width; int bytesPerPixel; int imageBuffer; } ;
struct TYPE_6__ {int red; int green; int blue; } ;
typedef TYPE_1__ MMRGBColor ;
typedef TYPE_2__* MMBitmapRef ;


 TYPE_1__* FUNC_0 (TYPE_2__*,size_t,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(MMBitmapRef VAR_1, uint8_t *VAR_2)
{
 if (VAR_0 && (VAR_1->bytewidth % 4) == 0) {
  FUNC_1(VAR_2, VAR_1->imageBuffer, VAR_1->bytewidth * VAR_1->height);
 } else {
  const size_t VAR_3 = (VAR_1->width * VAR_1->bytesPerPixel + 3) & ~3;
  size_t VAR_4;


  for (VAR_4 = 0; VAR_4 < VAR_1->height; ++VAR_4) {
   uint8_t *VAR_5 = VAR_2 + (VAR_4 * VAR_3);
   size_t VAR_6;
   for (VAR_6 = 0; VAR_6 < VAR_1->width; ++VAR_6) {
    MMRGBColor *VAR_7 = FUNC_0(VAR_1, VAR_6, VAR_4);


    VAR_5[0] = VAR_7->blue;
    VAR_5[1] = VAR_7->green;
    VAR_5[2] = VAR_7->red;

    VAR_5 += VAR_1->bytesPerPixel;
   }
  }
 }
}
