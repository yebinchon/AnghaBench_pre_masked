
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {size_t blue; size_t green; size_t red; } ;
typedef TYPE_1__ MMRGBColor ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 size_t* FUNC_1 (int,size_t) ;
 scalar_t__ FUNC_2 (size_t*,size_t const,int,int *) ;
 int FUNC_3 (size_t*) ;
 size_t* FUNC_4 (size_t) ;

__attribute__((used)) static uint8_t *FUNC_5(FILE *VAR_1, size_t VAR_2, size_t VAR_3,
                              uint8_t VAR_4, size_t VAR_5)
{
 size_t VAR_6 = VAR_5 * VAR_3;
 uint8_t *VAR_7 = FUNC_1(1, VAR_6);

 if (VAR_0 && (VAR_5 % 4) == 0) {
  if (FUNC_2(VAR_7, VAR_6, 1, VAR_1) == 0) {
   FUNC_3(VAR_7);
   return ((void*)0);
  }
 } else {
  uint8_t *VAR_8 = FUNC_4(VAR_5);
  size_t VAR_9;
  const size_t VAR_10 = (VAR_2 * VAR_4 + 3) & ~3;

  if (VAR_8 == ((void*)0)) return ((void*)0);
  FUNC_0(VAR_10 <= VAR_5);


  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
   const size_t VAR_11 = VAR_9 * VAR_5;
   size_t VAR_12;
   uint8_t *VAR_13 = VAR_8;
   if (FUNC_2(VAR_8, VAR_10, 1, VAR_1) == 0) {
    FUNC_3(VAR_7);
    FUNC_3(VAR_8);
    return ((void*)0);
   }

   for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
    const size_t VAR_14 = VAR_12 * VAR_4;
    MMRGBColor *VAR_15 = (MMRGBColor *)(VAR_7 +
                                       VAR_11 + VAR_14);


    VAR_15->blue = VAR_13[0];
    VAR_15->green = VAR_13[1];
    VAR_15->red = VAR_13[2];
    VAR_13 += VAR_4;
   }
  }

  FUNC_3(VAR_8);
 }

 return VAR_7;
}
