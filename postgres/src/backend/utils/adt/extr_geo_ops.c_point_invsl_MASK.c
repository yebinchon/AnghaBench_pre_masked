
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ Point ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 double FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline float8
FUNC_3(Point *VAR_1, Point *VAR_2)
{
 if (FUNC_0(VAR_1->x, VAR_2->x))
  return 0.0;
 if (FUNC_0(VAR_1->y, VAR_2->y))
  return VAR_0;
 return FUNC_1(FUNC_2(VAR_1->x, VAR_2->x), FUNC_2(VAR_2->y, VAR_1->y));
}
