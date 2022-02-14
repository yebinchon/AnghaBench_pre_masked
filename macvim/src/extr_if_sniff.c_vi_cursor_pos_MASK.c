
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int linenr_T ;
struct TYPE_6__ {scalar_t__ b_p_tx; } ;
struct TYPE_4__ {int lnum; long col; } ;
struct TYPE_5__ {TYPE_1__ w_cursor; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static long
FUNC_2()
{
    linenr_T VAR_2;
    long VAR_3=1;
    int VAR_4;
    int VAR_5;

    if (VAR_0->b_p_tx)
 VAR_5 = 2;
    else
 VAR_5 = 1;
    for (VAR_2 = 1; VAR_2 < VAR_1->w_cursor.lnum; ++VAR_2)
    {
 VAR_4 = FUNC_0(FUNC_1(VAR_2)) + VAR_5;
 VAR_3 += VAR_4;
    }
    return VAR_3 + VAR_1->w_cursor.col;
}
