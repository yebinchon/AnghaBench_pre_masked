
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lnum; } ;
struct TYPE_4__ {TYPE_1__ w_prev_pcmark; TYPE_1__ w_pcmark; int w_cursor; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__,int ) ;

void
FUNC_1()
{
    if (VAR_0->w_prev_pcmark.lnum != 0
     && (FUNC_0(VAR_0->w_pcmark, VAR_0->w_cursor)
  || VAR_0->w_pcmark.lnum == 0))
    {
 VAR_0->w_pcmark = VAR_0->w_prev_pcmark;
 VAR_0->w_prev_pcmark.lnum = 0;
    }
}
