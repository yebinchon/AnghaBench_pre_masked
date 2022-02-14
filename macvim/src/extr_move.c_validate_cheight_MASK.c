
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lnum; } ;
struct TYPE_5__ {int w_valid; scalar_t__ w_topline; TYPE_1__ w_cursor; int w_cline_folded; scalar_t__ w_cline_height; scalar_t__ w_topfill; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (scalar_t__,int *,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4()
{
    FUNC_0(VAR_1);
    if (!(VAR_1->w_valid & VAR_0))
    {






     VAR_1->w_cline_height = FUNC_2(VAR_1->w_cursor.lnum);



 VAR_1->w_valid |= VAR_0;
    }
}
