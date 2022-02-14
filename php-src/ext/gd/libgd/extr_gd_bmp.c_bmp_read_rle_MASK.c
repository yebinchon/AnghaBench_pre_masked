
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_7__ {int depth; int height; int width; } ;
typedef TYPE_2__ bmp_info_t ;
struct TYPE_6__ {scalar_t__* open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_2(gdImagePtr VAR_4, gdIOCtxPtr VAR_5, bmp_info_t *VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = 0, VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0, VAR_15 = 0;
 int VAR_16 = 8 / VAR_6->depth;

 for (VAR_7 = 0; VAR_7 < VAR_6->height && VAR_8 <= VAR_6->width;) {
  if (!FUNC_0(&VAR_11, VAR_5) || !FUNC_0(&VAR_12, VAR_5)) {
   return 1;
  }
  VAR_9 = VAR_6->height - VAR_7 - 1;

  if (VAR_11 != VAR_0) {
   if (VAR_4->open[VAR_12]) {
    VAR_4->open[VAR_12] = 0;
   }

   for (VAR_14 = 0; (VAR_14 < VAR_11) && (VAR_8 < VAR_6->width);) {
    for (VAR_15 = 1; (VAR_15 <= VAR_16) && (VAR_8 < VAR_6->width) && (VAR_14 < VAR_11); VAR_15++, VAR_8++, VAR_14++) {
     VAR_10 = (VAR_12 & (((1 << VAR_6->depth) - 1) << (8 - (VAR_15 * VAR_6->depth)))) >> (8 - (VAR_15 * VAR_6->depth));
     if (VAR_4->open[VAR_10]) {
      VAR_4->open[VAR_10] = 0;
     }
     FUNC_1(VAR_4, VAR_8, VAR_9, VAR_10);
    }
   }
  } else if (VAR_11 == VAR_0 && VAR_12 > 2) {

   VAR_13 = 0;
   for (VAR_14 = 0; (VAR_14 < VAR_12) && (VAR_8 < VAR_6->width); VAR_14 += VAR_16) {
    int VAR_17 = VAR_16;

    if (!FUNC_0(&VAR_10, VAR_5)) {
     return 1;
    }
    VAR_13++;

    if (VAR_12 - VAR_14 < VAR_17) {
     VAR_17 = VAR_12 - VAR_14;
    }

    for (VAR_15 = 1; (VAR_15 <= VAR_17) && (VAR_8 < VAR_6->width); VAR_15++, VAR_8++) {
     int VAR_18 = (VAR_10 >> (8 - (VAR_15 * VAR_6->depth))) & ((1 << VAR_6->depth) - 1);
     if (VAR_4->open[VAR_18]) {
      VAR_4->open[VAR_18] = 0;
     }
     FUNC_1(VAR_4, VAR_8, VAR_9, VAR_18);
    }
   }


   if (VAR_13 % 2 && !FUNC_0(&VAR_10, VAR_5)) {
    return 1;
   }
  } else if (VAR_11 == VAR_0 && VAR_12 == VAR_3) {

   VAR_8 = 0;
   VAR_7++;
  } else if (VAR_11 == VAR_0 && VAR_12 == VAR_1) {

   if (!FUNC_0(&VAR_11, VAR_5) || !FUNC_0(&VAR_12, VAR_5)) {
    return 1;
   }
   VAR_8 += VAR_11;
   VAR_7 += VAR_12;
  } else if (VAR_11 == VAR_0 && VAR_12 == VAR_2) {

   break;
  }
 }
 return 0;
}
