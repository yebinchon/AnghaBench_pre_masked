
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_11__ {scalar_t__ trueColor; } ;
struct TYPE_10__ {int* brushColorMap; TYPE_3__* brush; scalar_t__ trueColor; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11 (gdImagePtr VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;

 if (!VAR_0->brush) {
  return;
 }

 VAR_5 = FUNC_5(VAR_0->brush) / 2;
 VAR_8 = VAR_2 - VAR_5;
 VAR_10 = VAR_8 + FUNC_5(VAR_0->brush);
 VAR_6 = FUNC_4(VAR_0->brush) / 2;
 VAR_7 = VAR_1 - VAR_6;
 VAR_9 = VAR_7 + FUNC_4(VAR_0->brush);
 VAR_12 = 0;

 if (VAR_0->trueColor) {
  if (VAR_0->brush->trueColor) {
   for (VAR_4 = VAR_8; VAR_4 < VAR_10; VAR_4++) {
    VAR_11 = 0;
    for (VAR_3 = VAR_7; (VAR_3 < VAR_9); VAR_3++) {
     int VAR_13;
     VAR_13 = FUNC_3(VAR_0->brush, VAR_11, VAR_12);

     if (VAR_13 != FUNC_2(VAR_0->brush)) {
      FUNC_6(VAR_0, VAR_3, VAR_4, VAR_13);
     }
     VAR_11++;
    }
    VAR_12++;
   }
  } else {

   for (VAR_4 = VAR_8; VAR_4 < VAR_10; VAR_4++) {
    VAR_11 = 0;
    for (VAR_3 = VAR_7; VAR_3 < VAR_9; VAR_3++) {
     int VAR_14, VAR_15;
     VAR_14 = FUNC_1(VAR_0->brush, VAR_11, VAR_12);
     VAR_15 = FUNC_3(VAR_0->brush, VAR_11, VAR_12);

     if (VAR_14 != FUNC_2(VAR_0->brush)) {
      FUNC_6(VAR_0, VAR_3, VAR_4, VAR_15);
     }
     VAR_11++;
    }
    VAR_12++;
   }
  }
 } else {
  for (VAR_4 = VAR_8; VAR_4 < VAR_10; VAR_4++) {
   VAR_11 = 0;
   for (VAR_3 = VAR_7; VAR_3 < VAR_9; VAR_3++) {
    int VAR_16;
    VAR_16 = FUNC_1(VAR_0->brush, VAR_11, VAR_12);

    if (VAR_16 != FUNC_2(VAR_0->brush)) {

     if (VAR_0->brush->trueColor) {
      FUNC_6(VAR_0, VAR_3, VAR_4, FUNC_0(VAR_0, FUNC_10(VAR_16),
              FUNC_9(VAR_16),
              FUNC_8(VAR_16),
              FUNC_7(VAR_16)));
     } else {
      FUNC_6(VAR_0, VAR_3, VAR_4, VAR_0->brushColorMap[VAR_16]);
     }
    }
    VAR_11++;
   }
   VAR_12++;
  }
 }
}
