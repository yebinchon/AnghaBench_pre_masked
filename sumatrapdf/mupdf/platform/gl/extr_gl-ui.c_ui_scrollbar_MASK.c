
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* active; int x; int y; int* hot; float down_y; scalar_t__ down; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,int,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int *VAR_7, int VAR_8, int VAR_9)
{
 static float VAR_10 = 0;
 float VAR_11;

 int VAR_12 = VAR_6 - VAR_4;
 int VAR_13 = FUNC_1(VAR_5 - VAR_3, VAR_12 * VAR_8 / VAR_9);
 int VAR_14 = VAR_12 - VAR_13;

 VAR_9 -= VAR_8;

 if (VAR_9 <= 0)
 {
  *VAR_7 = 0;
  FUNC_2(VAR_1);
  FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
  return;
 }

 VAR_11 = (float) *VAR_7 * VAR_14 / VAR_9;

 if (VAR_2.down && !VAR_2.active)
 {
  if (VAR_2.x >= VAR_3 && VAR_2.x < VAR_5 && VAR_2.y >= VAR_4 && VAR_2.y < VAR_6)
  {
   if (VAR_2.y < VAR_4 + VAR_11)
   {
    VAR_2.active = "pgdn";
    *VAR_7 -= VAR_8;
   }
   else if (VAR_2.y >= VAR_4 + VAR_11 + VAR_13)
   {
    VAR_2.active = "pgup";
    *VAR_7 += VAR_8;
   }
   else
   {
    VAR_2.hot = VAR_7;
    VAR_2.active = VAR_7;
    VAR_10 = VAR_11;
   }
  }
 }

 if (VAR_2.active == VAR_7)
 {
  *VAR_7 = (VAR_10 + VAR_2.y - VAR_2.down_y) * VAR_9 / VAR_14;
 }

 if (*VAR_7 < 0)
  *VAR_7 = 0;
 else if (*VAR_7 > VAR_9)
  *VAR_7 = VAR_9;

 VAR_11 = (float) *VAR_7 * VAR_14 / VAR_9;

 FUNC_2(VAR_1);
 FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_4(FUNC_0(VAR_3, VAR_4+VAR_11, VAR_5, VAR_4+VAR_11+VAR_13), VAR_0, 0);
}
