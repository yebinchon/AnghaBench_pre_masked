
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int x1; int x0; int y1; int y0; int member_0; int member_2; int member_3; int member_1; } ;
typedef TYPE_1__ fz_irect ;
struct TYPE_9__ {int* hot; int* active; scalar_t__ y; int x; scalar_t__ down; int lineheight; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 TYPE_1__ FUNC_1 (int,scalar_t__,int,scalar_t__) ;
 TYPE_6__ VAR_1 ;
 int FUNC_2 (TYPE_1__,int) ;
 int FUNC_3 (TYPE_1__,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 TYPE_1__ FUNC_5 (int,int ) ;

int FUNC_6(int *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 static int VAR_6 = 0;
 fz_irect VAR_7 = FUNC_5(VAR_5, VAR_1.lineheight);
 int VAR_8 = 6;
 int VAR_9 = VAR_7.x1 - VAR_7.x0 - VAR_8 * 2;
 int VAR_10 = VAR_7.y1 - VAR_7.y0;
 fz_irect VAR_11 = { VAR_7.x0, VAR_7.y0+VAR_10/2-2, VAR_7.x1, VAR_7.y0+VAR_10/2+2 };
 fz_irect VAR_12;
 int VAR_13;

 if (FUNC_4(VAR_7))
 {
  VAR_1.hot = VAR_2;
  if (!VAR_1.active && VAR_1.down)
  {
   VAR_1.active = VAR_2;
   VAR_6 = *VAR_2;
  }
 }

 if (VAR_1.active == VAR_2)
 {
  if (VAR_1.y < VAR_7.y0 || VAR_1.y > VAR_7.y1)
   *VAR_2 = VAR_6;
  else
  {
   float VAR_14 = (float)(VAR_1.x - (VAR_7.x0+VAR_8)) / VAR_9;
   *VAR_2 = FUNC_0(VAR_3 + VAR_14 * (VAR_4 - VAR_3), VAR_3, VAR_4);
  }
 }

 VAR_13 = ((*VAR_2 - VAR_3) * VAR_9) / (VAR_4 - VAR_3);
 VAR_12 = FUNC_1(VAR_7.x0+VAR_8 + VAR_13-VAR_8, VAR_7.y0, VAR_7.x0+VAR_8 + VAR_13+VAR_8, VAR_7.y1);

 FUNC_2(VAR_11, 1);
 FUNC_3(VAR_12, VAR_0, 0);

 return *VAR_2 != VAR_6 && VAR_1.active == VAR_2 && !VAR_1.down;
}
