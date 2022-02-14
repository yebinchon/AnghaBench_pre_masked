
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vncPixel ;
typedef int uint8_t ;
typedef TYPE_2__* rfbScreenInfoPtr ;
struct TYPE_5__ {int bitsPerPixel; } ;
struct TYPE_6__ {int width; int height; int paddedWidthInBytes; int * frameBuffer; TYPE_1__ serverFormat; } ;


 int FUNC_0 (int ,int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_2__*,int,int,int,int) ;
 int FUNC_3 () ;

void
FUNC_4(rfbScreenInfoPtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, vncPixel VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_2 + VAR_4 > VAR_1->width)
  VAR_4 = VAR_1->width - VAR_2;
 if (VAR_3 + VAR_5 > VAR_1->height)
  VAR_5 = VAR_1->height - VAR_3;
 if (VAR_4 <= 0 || VAR_5 <= 0)
  return;

 FUNC_3();


 if (VAR_1->serverFormat.bitsPerPixel == 8)
 {

  uint8_t *VAR_9;
  VAR_9 = VAR_1->frameBuffer + (VAR_3 * VAR_1->paddedWidthInBytes + VAR_2);
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  {
   FUNC_1(VAR_9, VAR_6, VAR_4);
   VAR_9 += VAR_1->paddedWidthInBytes;
  }
 }
 else
 {
  for (VAR_8 = VAR_3; VAR_8 < VAR_3 + VAR_5; VAR_8++)
  {
   for (VAR_7 = VAR_2; VAR_7 < VAR_2 + VAR_4; VAR_7++)
   {
    FUNC_0(VAR_0, VAR_7, VAR_8, VAR_6);
   }
  }
 }

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_2 + VAR_4, VAR_3 + VAR_5);
}
