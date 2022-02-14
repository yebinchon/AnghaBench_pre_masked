
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_5__ {int thick; } ;


 int FUNC_0 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;

void FUNC_2 (gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_0->thick;
 int VAR_7;

 if (VAR_1 == VAR_3 && VAR_2 == VAR_4 && VAR_6 == 1) {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);
  return;
 }

 if (VAR_4 < VAR_2) {
  VAR_7=VAR_2;
  VAR_2 = VAR_4;
  VAR_4 = VAR_7;
 }

 if (VAR_3 < VAR_1) {
  VAR_7 = VAR_1;
  VAR_1 = VAR_3;
  VAR_3 = VAR_7;
 }

 if (VAR_6 > 1) {
  int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  int VAR_14 = VAR_6 >> 1;

  VAR_10 = VAR_1 - VAR_14;
  VAR_11 = VAR_2 - VAR_14;

  VAR_12 = VAR_3 + VAR_14;
  VAR_13 = VAR_4 + VAR_14;

  VAR_9 = VAR_11 + VAR_6;
  while (VAR_9-- > VAR_11) {
   VAR_8 = VAR_10 - 1;
   while (VAR_8++ < VAR_12) {
    FUNC_1(VAR_0, VAR_8, VAR_9, VAR_5);
   }
  }

  VAR_9 = VAR_13 - VAR_6;
  while (VAR_9++ < VAR_13) {
   VAR_8 = VAR_10 - 1;
   while (VAR_8++ < VAR_12) {
    FUNC_1(VAR_0, VAR_8, VAR_9, VAR_5);
   }
  }

  VAR_9 = VAR_11 + VAR_6 - 1;
  while (VAR_9++ < VAR_13 -VAR_6) {
   VAR_8 = VAR_10 - 1;
   while (VAR_8++ < VAR_10 + VAR_6) {
    FUNC_1(VAR_0, VAR_8, VAR_9, VAR_5);
   }
  }

  VAR_9 = VAR_11 + VAR_6 - 1;
  while (VAR_9++ < VAR_13 -VAR_6) {
   VAR_8 = VAR_12 - VAR_6 - 1;
   while (VAR_8++ < VAR_12) {
    FUNC_1(VAR_0, VAR_8, VAR_9, VAR_5);
   }
  }

  return;
 } else {
  if (VAR_1 == VAR_3 || VAR_2 == VAR_4) {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  } else {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_2, VAR_5);
   FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3, VAR_4, VAR_5);
   FUNC_0(VAR_0, VAR_1, VAR_2 + 1, VAR_1, VAR_4 - 1, VAR_5);
   FUNC_0(VAR_0, VAR_3, VAR_2 + 1, VAR_3, VAR_4 - 1, VAR_5);
  }
 }
}
