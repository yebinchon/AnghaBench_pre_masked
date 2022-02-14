
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int float8 ;
struct TYPE_6__ {int y; int x; } ;
typedef TYPE_1__ Point ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_5(Point *VAR_0, Point *VAR_1, Point *VAR_2)
{
 float8 VAR_3;

 VAR_3 = FUNC_3(FUNC_2(VAR_2->x, VAR_2->x), FUNC_2(VAR_2->y, VAR_2->y));

 FUNC_4(VAR_0,
     FUNC_0(FUNC_3(FUNC_2(VAR_1->x, VAR_2->x),
           FUNC_2(VAR_1->y, VAR_2->y)), VAR_3),
     FUNC_0(FUNC_1(FUNC_2(VAR_1->y, VAR_2->x),
           FUNC_2(VAR_1->x, VAR_2->y)), VAR_3));
}
