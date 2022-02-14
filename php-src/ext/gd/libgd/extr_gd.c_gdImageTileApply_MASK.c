
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_9__ {int* tileColorMap; scalar_t__ trueColor; int * alpha; int * blue; int * green; int * red; struct TYPE_9__* tile; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11 (gdImagePtr VAR_0, int VAR_1, int VAR_2)
{
 gdImagePtr VAR_3 = VAR_0->tile;
 int VAR_4, VAR_5;
 int VAR_6;
 if (!VAR_3) {
  return;
 }
 VAR_4 = VAR_1 % FUNC_3(VAR_3);
 VAR_5 = VAR_2 % FUNC_4(VAR_3);
 if (VAR_0->trueColor) {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
  if (VAR_6 != FUNC_2 (VAR_3)) {
   if (!VAR_3->trueColor) {
    VAR_6 = FUNC_6(VAR_3->red[VAR_6], VAR_3->green[VAR_6], VAR_3->blue[VAR_6], VAR_3->alpha[VAR_6]);
   }
   FUNC_5(VAR_0, VAR_1, VAR_2, VAR_6);
  }
 } else {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);

  if (VAR_6 != FUNC_2(VAR_3)) {
   if (VAR_3->trueColor) {

    FUNC_5(VAR_0, VAR_1, VAR_2, FUNC_0(VAR_0,
           FUNC_10(VAR_6),
           FUNC_9(VAR_6),
           FUNC_8(VAR_6),
           FUNC_7(VAR_6)));
   } else {
    FUNC_5(VAR_0, VAR_1, VAR_2, VAR_0->tileColorMap[VAR_6]);
   }
  }
 }
}
