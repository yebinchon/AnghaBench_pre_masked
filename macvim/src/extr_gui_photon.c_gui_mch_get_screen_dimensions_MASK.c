
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int x; int y; } ;
struct TYPE_7__ {TYPE_2__ ul; TYPE_1__ lr; } ;
typedef TYPE_3__ PhRect_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,TYPE_3__*) ;
 int VAR_0 ;

void
FUNC_2(int *VAR_1, int *VAR_2)
{
    PhRect_t VAR_3;

    FUNC_1(VAR_0, 0,
     FUNC_0(((void*)0)), &VAR_3);

    *VAR_1 = VAR_3.lr.x - VAR_3.ul.x + 1;
    *VAR_2 = VAR_3.lr.y - VAR_3.ul.y + 1;
}
