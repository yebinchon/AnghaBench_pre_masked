
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* gdPointPtr ;
typedef TYPE_2__* gdImagePtr ;
struct TYPE_10__ {int AA_color; int polyAllocated; int* polyInts; } ;
struct TYPE_9__ {int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int,int,int,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int*,int,int,int ) ;

void FUNC_7 (gdImagePtr VAR_2, gdPointPtr VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;
 int VAR_18;

 if (VAR_4 <= 0) {
  return;
 }

 if (FUNC_5(sizeof(int), VAR_4)) {
  return;
 }

 if (VAR_5 == VAR_0) {
  VAR_18 = VAR_2->AA_color;
 } else {
  VAR_18 = VAR_5;
 }

 if (!VAR_2->polyAllocated) {
  VAR_2->polyInts = (int *) FUNC_3(sizeof(int) * VAR_4);
  VAR_2->polyAllocated = VAR_4;
 }
 if (VAR_2->polyAllocated < VAR_4) {
  while (VAR_2->polyAllocated < VAR_4) {
   VAR_2->polyAllocated *= 2;
  }
  if (FUNC_5(sizeof(int), VAR_2->polyAllocated)) {
   return;
  }
  VAR_2->polyInts = (int *) FUNC_4(VAR_2->polyInts, sizeof(int) * VAR_2->polyAllocated);
 }
 VAR_8 = VAR_3[0].y;
 VAR_9 = VAR_3[0].y;
 for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_3[VAR_6].y < VAR_8) {
   VAR_8 = VAR_3[VAR_6].y;
  }
  if (VAR_3[VAR_6].y > VAR_9) {
   VAR_9 = VAR_3[VAR_6].y;
  }
 }

 if (VAR_4 > 1 && VAR_8 == VAR_9) {
  VAR_11 = VAR_13 = VAR_3[0].x;
  for (VAR_6 = 1; (VAR_6 < VAR_4); VAR_6++) {
   if (VAR_3[VAR_6].x < VAR_11) {
    VAR_11 = VAR_3[VAR_6].x;
   } else if (VAR_3[VAR_6].x > VAR_13) {
    VAR_13 = VAR_3[VAR_6].x;
   }
  }
  FUNC_0(VAR_2, VAR_11, VAR_8, VAR_13, VAR_8, VAR_5);
  return;
 }
 VAR_10 = VAR_9;

 if (VAR_8 < 0) {
  VAR_8 = 0;
 }
 if (VAR_9 >= FUNC_2(VAR_2)) {
  VAR_9 = FUNC_2(VAR_2) - 1;
 }


 for (VAR_7 = VAR_8; VAR_7 <= VAR_9; VAR_7++) {



  VAR_17 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   if (!VAR_6) {
    VAR_15 = VAR_4 - 1;
    VAR_16 = 0;
   } else {
    VAR_15 = VAR_6 - 1;
    VAR_16 = VAR_6;
   }
   VAR_12 = VAR_3[VAR_15].y;
   VAR_14 = VAR_3[VAR_16].y;
   if (VAR_12 < VAR_14) {
    VAR_11 = VAR_3[VAR_15].x;
    VAR_13 = VAR_3[VAR_16].x;
   } else if (VAR_12 > VAR_14) {
    VAR_14 = VAR_3[VAR_15].y;
    VAR_12 = VAR_3[VAR_16].y;
    VAR_13 = VAR_3[VAR_15].x;
    VAR_11 = VAR_3[VAR_16].x;
   } else {
    continue;
   }




   if (VAR_7 >= VAR_12 && VAR_7 < VAR_14) {
    VAR_2->polyInts[VAR_17++] = (float) ((VAR_7 - VAR_12) * (VAR_13 - VAR_11)) / (float) (VAR_14 - VAR_12) + 0.5 + VAR_11;
   } else if (VAR_7 == VAR_10 && VAR_7 == VAR_14) {
    VAR_2->polyInts[VAR_17++] = VAR_13;
   }
  }
  FUNC_6(VAR_2->polyInts, VAR_17, sizeof(int), VAR_1);

  for (VAR_6 = 0; VAR_6 < VAR_17 - 1; VAR_6 += 2) {
   FUNC_0(VAR_2, VAR_2->polyInts[VAR_6], VAR_7, VAR_2->polyInts[VAR_6 + 1], VAR_7, VAR_18);
  }
 }


 if (VAR_5 == VAR_0) {
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 }
}
