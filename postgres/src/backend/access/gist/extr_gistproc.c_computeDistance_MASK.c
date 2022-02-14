
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_8__ {TYPE_1__ low; TYPE_1__ high; } ;
typedef TYPE_1__ Point ;
typedef TYPE_2__ BOX ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 double FUNC_2 (scalar_t__,scalar_t__) ;
 double FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static float8
FUNC_4(bool VAR_1, BOX *VAR_2, Point *VAR_3)
{
 float8 VAR_4 = 0.0;

 if (VAR_1)
 {

  VAR_4 = FUNC_3(VAR_3, &VAR_2->low);
 }
 else if (VAR_3->x <= VAR_2->high.x && VAR_3->x >= VAR_2->low.x &&
    VAR_3->y <= VAR_2->high.y && VAR_3->y >= VAR_2->low.y)
 {

  VAR_4 = 0.0;
 }
 else if (VAR_3->x <= VAR_2->high.x && VAR_3->x >= VAR_2->low.x)
 {

  FUNC_0(VAR_2->low.y <= VAR_2->high.y);
  if (VAR_3->y > VAR_2->high.y)
   VAR_4 = FUNC_2(VAR_3->y, VAR_2->high.y);
  else if (VAR_3->y < VAR_2->low.y)
   VAR_4 = FUNC_2(VAR_2->low.y, VAR_3->y);
  else
   FUNC_1(VAR_0, "inconsistent point values");
 }
 else if (VAR_3->y <= VAR_2->high.y && VAR_3->y >= VAR_2->low.y)
 {

  FUNC_0(VAR_2->low.x <= VAR_2->high.x);
  if (VAR_3->x > VAR_2->high.x)
   VAR_4 = FUNC_2(VAR_3->x, VAR_2->high.x);
  else if (VAR_3->x < VAR_2->low.x)
   VAR_4 = FUNC_2(VAR_2->low.x, VAR_3->x);
  else
   FUNC_1(VAR_0, "inconsistent point values");
 }
 else
 {

  Point VAR_5;
  float8 VAR_6;

  VAR_4 = FUNC_3(VAR_3, &VAR_2->low);

  VAR_6 = FUNC_3(VAR_3, &VAR_2->high);
  if (VAR_4 > VAR_6)
   VAR_4 = VAR_6;

  VAR_5.x = VAR_2->low.x;
  VAR_5.y = VAR_2->high.y;
  VAR_6 = FUNC_3(VAR_3, &VAR_5);
  if (VAR_4 > VAR_6)
   VAR_4 = VAR_6;

  VAR_5.x = VAR_2->high.x;
  VAR_5.y = VAR_2->low.y;
  VAR_6 = FUNC_3(VAR_3, &VAR_5);
  if (VAR_4 > VAR_6)
   VAR_4 = VAR_6;
 }

 return VAR_4;
}
