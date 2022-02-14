
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lnum; } ;
struct TYPE_6__ {TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int*) ;

void
FUNC_3()
{
    int VAR_5;

    FUNC_0(VAR_4);
    if (FUNC_1(VAR_4))
 for (;;)
 {
     VAR_5 = VAR_1;
     (void)FUNC_2(VAR_4->w_cursor.lnum, VAR_3, VAR_2, &VAR_5);
     if (!(VAR_5 & VAR_0))
  break;
 }
}
