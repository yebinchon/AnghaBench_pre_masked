
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64 ;
typedef TYPE_1__* WindowObject ;
struct TYPE_6__ {int spooled_rows; } ;
struct TYPE_5__ {TYPE_2__* winstate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int) ;

int64
FUNC_3(WindowObject VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));
 FUNC_2(VAR_0->winstate, -1);
 return VAR_0->winstate->spooled_rows;
}
