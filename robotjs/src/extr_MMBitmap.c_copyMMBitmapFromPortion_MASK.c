
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {size_t bytewidth; size_t bytesPerPixel; size_t const height; int bitsPerPixel; int * imageBuffer; } ;
struct TYPE_12__ {size_t height; int width; } ;
struct TYPE_11__ {size_t y; size_t x; } ;
struct TYPE_13__ {TYPE_2__ size; TYPE_1__ origin; } ;
typedef TYPE_3__ MMRect ;
typedef TYPE_4__* MMBitmapRef ;


 int FUNC_0 (TYPE_4__*,TYPE_3__) ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int *,int ,size_t,size_t const,int ,size_t) ;
 int * FUNC_3 (size_t const) ;
 int FUNC_4 (int *,int *,size_t const) ;

MMBitmapRef FUNC_5(MMBitmapRef VAR_0, MMRect VAR_1)
{
 FUNC_1(VAR_0 != ((void*)0));

 if (VAR_0->imageBuffer == ((void*)0) || !FUNC_0(VAR_0, VAR_1)) {
  return ((void*)0);
 } else {
  uint8_t *VAR_2 = ((void*)0);
  const size_t VAR_3 = VAR_1.size.height * VAR_0->bytewidth;
  const size_t VAR_4 = (VAR_0->bytewidth * VAR_1.origin.y) +
                        (VAR_1.origin.x * VAR_0->bytesPerPixel);


  FUNC_1((VAR_3 + VAR_4) <= (VAR_0->bytewidth * VAR_0->height));

  VAR_2 = FUNC_3(VAR_3);
  if (VAR_2 == ((void*)0)) return ((void*)0);

  FUNC_4(VAR_2, VAR_0->imageBuffer + VAR_4, VAR_3);

  return FUNC_2(VAR_2,
                        VAR_1.size.width,
                        VAR_1.size.height,
                        VAR_0->bytewidth,
                        VAR_0->bitsPerPixel,
                        VAR_0->bytesPerPixel);
 }
}
