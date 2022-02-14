
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int float8 ;
struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ Point ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(Point *VAR_1, int VAR_2, Point *VAR_3)
{
 float8 VAR_4,
    VAR_5;
 float8 VAR_6,
    VAR_7;
 int VAR_8 = 0;
 float8 VAR_9,
    VAR_10;
 int VAR_11,
    VAR_12 = 0;

 FUNC_0(VAR_2 > 0);


 VAR_4 = FUNC_1(VAR_3[0].x, VAR_1->x);
 VAR_5 = FUNC_1(VAR_3[0].y, VAR_1->y);

 VAR_6 = VAR_4;
 VAR_7 = VAR_5;

 for (VAR_8 = 1; VAR_8 < VAR_2; VAR_8++)
 {

  VAR_9 = FUNC_1(VAR_3[VAR_8].x, VAR_1->x);
  VAR_10 = FUNC_1(VAR_3[VAR_8].y, VAR_1->y);


  if ((VAR_11 = FUNC_2(VAR_9, VAR_10, VAR_6, VAR_7)) == VAR_0)
   return 2;
  VAR_12 += VAR_11;

  VAR_6 = VAR_9;
  VAR_7 = VAR_10;
 }


 if ((VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7)) == VAR_0)
  return 2;
 VAR_12 += VAR_11;

 if (VAR_12 != 0)
  return 1;
 return 0;
}
