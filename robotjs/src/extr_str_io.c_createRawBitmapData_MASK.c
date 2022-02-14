
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_6__ {int red; int green; int blue; } ;
typedef TYPE_1__ MMRGBColor ;
typedef TYPE_2__* MMBitmapRef ;


 TYPE_1__* FUNC_0 (TYPE_2__*,size_t,size_t) ;
 size_t VAR_0 ;
 int * FUNC_1 (size_t,int) ;

__attribute__((used)) static uint8_t *FUNC_2(MMBitmapRef VAR_1)
{
 uint8_t *VAR_2 = FUNC_1(VAR_0, VAR_1->width * VAR_1->height);
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->height; ++VAR_3) {

  const size_t VAR_4 = VAR_3 * VAR_1->width * VAR_0;
  size_t VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_1->width; ++VAR_5) {

   const size_t VAR_6 = VAR_5 * VAR_0;
   uint8_t *VAR_7 = VAR_2 + VAR_4 + VAR_6;
   MMRGBColor *VAR_8 = FUNC_0(VAR_1, VAR_5, VAR_3);
   VAR_7[0] = VAR_8->blue;
   VAR_7[1] = VAR_8->green;
   VAR_7[2] = VAR_8->red;
  }
 }

 return VAR_2;
}
