
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pos {int pos; int len; } ;
struct line {int n; scalar_t__ e; } ;



__attribute__((used)) static int FUNC_0(struct line *VAR_0, struct line *VAR_1, struct pos *VAR_2,
    int VAR_3, int VAR_4, int VAR_5, int VAR_6, int *VAR_7, int *VAR_8)
{
 int VAR_9 = VAR_3, VAR_10 = VAR_5, VAR_11 = 0, VAR_12 = 0, VAR_13, VAR_14, VAR_15;

 for (VAR_13 = VAR_3; VAR_13 < VAR_4; VAR_13++) {

  for (VAR_14 = VAR_0[VAR_13].n; VAR_14 < VAR_5; VAR_14 = VAR_1[VAR_14].n) {
   ;
  }


  for (; VAR_14 < VAR_6; VAR_14 = VAR_1[VAR_14].n) {

   if (VAR_13 > VAR_3 && VAR_14 > VAR_5 && VAR_2[VAR_14 - 1].pos == VAR_13 - 1) {
    VAR_15 = VAR_2[VAR_14 - 1].len + 1;
   } else {
    VAR_15 = 1;
   }
   VAR_2[VAR_14].pos = VAR_13;
   VAR_2[VAR_14].len = VAR_15;


   if (VAR_15 > VAR_11) {
    VAR_9 = VAR_13;
    VAR_10 = VAR_14;
    VAR_11 = VAR_15;
   }
  }
 }

 if (VAR_11) {
  VAR_9 = VAR_9 - VAR_11 + 1;
  VAR_10 = VAR_10 - VAR_11 + 1;
 }


 while (VAR_9 - VAR_12 > VAR_3 && VAR_10 - VAR_12 > VAR_5 &&
  VAR_0[VAR_9 - VAR_12 - 1].e == VAR_1[VAR_10 - VAR_12 - 1].e) {
  VAR_12++;
 }
 while (VAR_9 + VAR_11 < VAR_4 && VAR_10 + VAR_11 < VAR_6 &&
  VAR_0[VAR_9 + VAR_11].e == VAR_1[VAR_10 + VAR_11].e) {
  VAR_11++;
 }

 *VAR_7 = VAR_9 - VAR_12;
 *VAR_8 = VAR_10 - VAR_12;

 return VAR_11 + VAR_12;
}
