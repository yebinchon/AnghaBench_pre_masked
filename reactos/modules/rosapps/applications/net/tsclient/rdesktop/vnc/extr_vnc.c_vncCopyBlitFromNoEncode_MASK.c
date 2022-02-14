
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vncPixel ;
struct TYPE_10__ {int w; int h; int linew; int * data; TYPE_2__* format; } ;
typedef TYPE_3__ vncBuffer ;
typedef int uint8_t ;
typedef TYPE_4__* rfbScreenInfoPtr ;
struct TYPE_8__ {scalar_t__ bitsPerPixel; } ;
struct TYPE_11__ {int paddedWidthInBytes; int * frameBuffer; TYPE_1__ serverFormat; } ;
struct TYPE_9__ {scalar_t__ bitsPerPixel; } ;


 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (int ,int,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 () ;

void
FUNC_4(rfbScreenInfoPtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
   vncBuffer * VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_3();

 if (VAR_1->serverFormat.bitsPerPixel == VAR_6->format->bitsPerPixel
     && VAR_7 + VAR_4 <= VAR_6->w && VAR_8 + VAR_5 <= VAR_6->h)
 {

  uint8_t *VAR_11, *VAR_12;
  VAR_11 = VAR_6->data + (VAR_8 * VAR_6->linew + VAR_7);
  VAR_12 = VAR_1->frameBuffer + (VAR_3 * VAR_1->paddedWidthInBytes + VAR_2);
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  {
   FUNC_2(VAR_12, VAR_11, VAR_4);
   VAR_12 += VAR_1->paddedWidthInBytes;
   VAR_11 += VAR_6->linew;
  }
 }
 else
 {

  for (VAR_10 = VAR_3; VAR_10 < VAR_3 + VAR_5; VAR_10++)
  {
   int VAR_13 = VAR_8 + VAR_10 - VAR_3;
   while (VAR_13 >= VAR_6->h)
    VAR_13 -= VAR_6->h;
   for (VAR_9 = VAR_2; VAR_9 < VAR_2 + VAR_4; VAR_9++)
   {
    vncPixel VAR_14;
    int VAR_15 = VAR_7 + VAR_9 - VAR_2;
    while (VAR_15 >= VAR_6->linew)
     VAR_15 -= VAR_6->linew;
    VAR_14 = FUNC_0(VAR_6, VAR_15, VAR_13);
    FUNC_1(VAR_0, VAR_9, VAR_10, VAR_14);
   }
  }
 }
}
