
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_7__ {long sy; long sx; int trueColor; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int*,int*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,long,long,int,long) ;

void FUNC_6 (gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{

 long VAR_6, VAR_7, VAR_8, VAR_9;
 long VAR_10, VAR_11,VAR_12;

 if (!VAR_0->trueColor) {

  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  return;
 }


 if (!FUNC_1(&VAR_1,&VAR_2,&VAR_3,&VAR_4,FUNC_3(VAR_0)-1) || !FUNC_1(&VAR_2,&VAR_1,&VAR_4,&VAR_3,FUNC_4(VAR_0)-1)) {
  return;
 }

 VAR_10 = VAR_3 - VAR_1;
 VAR_11 = VAR_4 - VAR_2;

 if (VAR_10 == 0 && VAR_11 == 0) {
  return;
 }
 if (FUNC_0((int)VAR_10) > FUNC_0((int)VAR_11)) {
  if (VAR_10 < 0) {
   VAR_12 = VAR_1;
   VAR_1 = VAR_3;
   VAR_3 = VAR_12;
   VAR_12 = VAR_2;
   VAR_2 = VAR_4;
   VAR_4 = VAR_12;
   VAR_10 = VAR_3 - VAR_1;
   VAR_11 = VAR_4 - VAR_2;
  }
  VAR_7 = VAR_2;
  VAR_8 = (VAR_11 * 65536) / VAR_10;
  VAR_9 = 0;
  for (VAR_6 = VAR_1; VAR_6 <= VAR_3; VAR_6++) {
   FUNC_5(VAR_0, VAR_6, VAR_7, VAR_5, (VAR_9 >> 8) & 0xFF);
   if (VAR_7 + 1 < VAR_0->sy) {
    FUNC_5(VAR_0, VAR_6, VAR_7 + 1, VAR_5, (~VAR_9 >> 8) & 0xFF);
   }
   VAR_9 += VAR_8;
   if (VAR_9 >= 65536) {
    VAR_9 -= 65536;
    VAR_7++;
   } else if (VAR_9 < 0) {
    VAR_9 += 65536;
    VAR_7--;
   }
  }
 } else {
  if (VAR_11 < 0) {
   VAR_12 = VAR_1;
   VAR_1 = VAR_3;
   VAR_3 = VAR_12;
   VAR_12 = VAR_2;
   VAR_2 = VAR_4;
   VAR_4 = VAR_12;
   VAR_10 = VAR_3 - VAR_1;
   VAR_11 = VAR_4 - VAR_2;
  }
  VAR_6 = VAR_1;
  VAR_8 = (VAR_10 * 65536) / VAR_11;
  VAR_9 = 0;
  for (VAR_7 = VAR_2; VAR_7 <= VAR_4; VAR_7++) {
   FUNC_5(VAR_0, VAR_6, VAR_7, VAR_5, (VAR_9 >> 8) & 0xFF);
   if (VAR_6 + 1 < VAR_0->sx) {
    FUNC_5(VAR_0, VAR_6 + 1, VAR_7, VAR_5, (~VAR_9 >> 8) & 0xFF);
   }
   VAR_9 += VAR_8;
   if (VAR_9 >= 65536) {
    VAR_9 -= 65536;
    VAR_6++;
   } else if (VAR_9 < 0) {
    VAR_9 += 65536;
    VAR_6--;
   }
  }
 }
}
