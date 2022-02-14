
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ lnum; scalar_t__ fill; scalar_t__ height; } ;
typedef TYPE_2__ lineoff_T ;
struct TYPE_6__ {scalar_t__ lnum; } ;
struct TYPE_8__ {scalar_t__ w_topline; int w_topfill; TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2()
{
    lineoff_T VAR_4;
    int VAR_5;

    if (VAR_2->w_cursor.lnum < VAR_2->w_topline + VAR_3



     )
    {
 VAR_4.lnum = VAR_2->w_cursor.lnum;




 VAR_5 = 0;


 while (VAR_5 < VAR_3)
 {
     FUNC_1(&VAR_4);

     if (VAR_4.lnum < VAR_2->w_topline



      )
  break;
     VAR_5 += VAR_4.height;
 }
 if (VAR_5 < VAR_3)
     return VAR_1;
    }
    return VAR_0;
}
