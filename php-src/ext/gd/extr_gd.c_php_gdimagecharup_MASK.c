
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdImagePtr ;
typedef TYPE_1__* gdFontPtr ;
struct TYPE_3__ {int offset; int nchars; int h; int w; scalar_t__* data; } ;


 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(gdImagePtr VAR_0, gdFontPtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 VAR_6 = 0;
 VAR_7 = 0;

 if ((VAR_4 < VAR_1->offset) || (VAR_4 >= (VAR_1->offset + VAR_1->nchars))) {
  return;
 }

 VAR_10 = (VAR_4 - VAR_1->offset) * VAR_1->h * VAR_1->w;
 for (VAR_9 = VAR_3; (VAR_9 > (VAR_3 - VAR_1->w)); VAR_9--) {
  for (VAR_8 = VAR_2; (VAR_8 < (VAR_2 + VAR_1->h)); VAR_8++) {
   if (VAR_1->data[VAR_10 + VAR_7 * VAR_1->w + VAR_6]) {
    FUNC_0(VAR_0, VAR_8, VAR_9, VAR_5);
   }
   VAR_7++;
  }
  VAR_7 = 0;
  VAR_6++;
 }
}
