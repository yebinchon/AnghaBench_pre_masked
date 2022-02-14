
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_4__ {void** imageBuffer; size_t width; size_t height; size_t bytewidth; void* bytesPerPixel; void* bitsPerPixel; } ;
typedef TYPE_1__* MMBitmapRef ;
typedef int MMBitmap ;


 TYPE_1__* FUNC_0 (int) ;

MMBitmapRef FUNC_1(uint8_t *VAR_0,
                           size_t VAR_1,
                           size_t VAR_2,
                           size_t VAR_3,
                           uint8_t VAR_4,
                           uint8_t VAR_5)
{
 MMBitmapRef VAR_6 = FUNC_0(sizeof(MMBitmap));
 if (VAR_6 == ((void*)0)) return ((void*)0);

 VAR_6->imageBuffer = VAR_0;
 VAR_6->width = VAR_1;
 VAR_6->height = VAR_2;
 VAR_6->bytewidth = VAR_3;
 VAR_6->bitsPerPixel = VAR_4;
 VAR_6->bytesPerPixel = VAR_5;

 return VAR_6;
}
