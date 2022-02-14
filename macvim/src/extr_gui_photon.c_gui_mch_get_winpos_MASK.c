
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vimWindow; } ;
struct TYPE_4__ {int x; int y; } ;
typedef TYPE_1__ PhPoint_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int *) ;
 TYPE_2__ VAR_1 ;

int
FUNC_1(int *VAR_2, int *VAR_3)
{
    PhPoint_t *VAR_4;

    VAR_4 = FUNC_0(VAR_1.vimWindow, ((void*)0));

    *VAR_2 = VAR_4->x;
    *VAR_3 = VAR_4->y;

    return VAR_0;
}
