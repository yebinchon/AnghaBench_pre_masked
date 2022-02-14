
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_11__ {int sy; int sx; } ;




 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;

int FUNC_8(gdImagePtr VAR_0, int VAR_1, const unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_1 <= 0) {
  return 0;
 } else if (VAR_1 == 1) {
  return 1;
 }
 switch (VAR_2) {
 case 128:
  for (VAR_4 = 0; VAR_4 < VAR_0->sy; VAR_4 += VAR_1) {
   for (VAR_3 = 0; VAR_3 < VAR_0->sx; VAR_3 += VAR_1) {
    if (FUNC_2(VAR_0, VAR_3, VAR_4)) {
     int VAR_5 = FUNC_5(VAR_0, VAR_3, VAR_4);
     FUNC_4(VAR_0, VAR_3, VAR_4, VAR_3 + VAR_1 - 1, VAR_4 + VAR_1 - 1, VAR_5);
    }
   }
  }
  break;
 case 129:
  for (VAR_4 = 0; VAR_4 < VAR_0->sy; VAR_4 += VAR_1) {
   for (VAR_3 = 0; VAR_3 < VAR_0->sx; VAR_3 += VAR_1) {
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11;
    int VAR_12, VAR_13;

    VAR_6 = VAR_7 = VAR_8 = VAR_9 = VAR_10 = VAR_11 = 0;

    for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
     for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
      if (!FUNC_2(VAR_0, VAR_3 + VAR_12, VAR_4 + VAR_13)) {
       continue;
      }
      VAR_10 = FUNC_5(VAR_0, VAR_3 + VAR_12, VAR_4 + VAR_13);
      VAR_6 += FUNC_0(VAR_0, VAR_10);
      VAR_7 += FUNC_7(VAR_0, VAR_10);
      VAR_8 += FUNC_6(VAR_0, VAR_10);
      VAR_9 += FUNC_1(VAR_0, VAR_10);
      VAR_11++;
     }
    }

    if (VAR_11 > 0) {
     VAR_10 = FUNC_3(VAR_0, VAR_7 / VAR_11, VAR_8 / VAR_11, VAR_9 / VAR_11, VAR_6 / VAR_11);
     FUNC_4(VAR_0, VAR_3, VAR_4, VAR_3 + VAR_1 - 1, VAR_4 + VAR_1 - 1, VAR_10);
    }
   }
  }
  break;
 default:
  return 0;
 }
 return 1;
}
