
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int colorsTotal; int * blue; int * green; int * red; scalar_t__* open; scalar_t__ trueColor; } ;


 float FUNC_0 (int ,int ,int ,int,int,int) ;
 int FUNC_1 (int,int,int) ;

int FUNC_2 (gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 int VAR_5 = (-1);
 int VAR_6 = 1;
 float VAR_7 = 0;
 if (VAR_0->trueColor) {
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 }
 for (VAR_4 = 0; VAR_4 < VAR_0->colorsTotal; VAR_4++) {
  float VAR_8;
  if (VAR_0->open[VAR_4]) {
   continue;
  }
  VAR_8 = FUNC_0(VAR_0->red[VAR_4], VAR_0->green[VAR_4], VAR_0->blue[VAR_4], VAR_1, VAR_2, VAR_3);
  if (VAR_6 || (VAR_8 < VAR_7)) {
   VAR_7 = VAR_8;
   VAR_5 = VAR_4;
   VAR_6 = 0;
  }
 }
 return VAR_5;
}
