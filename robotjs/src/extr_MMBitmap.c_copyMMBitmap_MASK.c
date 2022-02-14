
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t height; size_t bytewidth; int bytesPerPixel; int bitsPerPixel; int width; int * imageBuffer; } ;
typedef TYPE_1__* MMBitmapRef ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int ,size_t,size_t,int ,int ) ;
 int * FUNC_2 (size_t const) ;
 int FUNC_3 (int *,int *,size_t const) ;

MMBitmapRef FUNC_4(MMBitmapRef VAR_0)
{
 uint8_t *VAR_1 = ((void*)0);

 FUNC_0(VAR_0 != ((void*)0));
 if (VAR_0->imageBuffer != ((void*)0)) {
  const size_t VAR_2 = VAR_0->height * VAR_0->bytewidth;
  VAR_1 = FUNC_2(VAR_2);
  if (VAR_1 == ((void*)0)) return ((void*)0);

  FUNC_3(VAR_1, VAR_0->imageBuffer, VAR_2);
 }

 return FUNC_1(VAR_1,
                       VAR_0->width,
                       VAR_0->height,
                       VAR_0->bytewidth,
                       VAR_0->bitsPerPixel,
                       VAR_0->bytesPerPixel);
}
