
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_7__ {int interlace; int blue; int green; int red; int transparent; int sy; int sx; int colorsTotal; scalar_t__ trueColor; } ;


 int FUNC_0 (int ,int ,int ,int,int ,int ,int,int ,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(gdImagePtr VAR_0, gdIOCtxPtr VAR_1)
{
 gdImagePtr VAR_2 = 0, VAR_3 = VAR_0;
 int VAR_4, VAR_5;
 VAR_4 = VAR_0->interlace;
 if (VAR_0->trueColor) {



  VAR_2 = FUNC_2(VAR_0, 1, 256);
  if (!VAR_2) {
   return 1;
  }
  VAR_3 = VAR_2;
 }
 VAR_5 = FUNC_1(VAR_3->colorsTotal);

 FUNC_0(
  VAR_1, VAR_3->sx, VAR_3->sy, VAR_4, 0, VAR_3->transparent, VAR_5,
  VAR_3->red, VAR_3->green, VAR_3->blue, VAR_3);
 if (VAR_2) {

  FUNC_3( VAR_2);
 }

    return 0;
}
