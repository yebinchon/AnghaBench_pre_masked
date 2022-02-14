
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
typedef TYPE_1__ Point ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_4(Point *VAR_0, Point *VAR_1, Point *VAR_2)
{
 FUNC_3(VAR_0,
     FUNC_0(FUNC_1(VAR_1->x, VAR_2->x),
         FUNC_1(VAR_1->y, VAR_2->y)),
     FUNC_2(FUNC_1(VAR_1->x, VAR_2->y),
         FUNC_1(VAR_1->y, VAR_2->x)));
}
