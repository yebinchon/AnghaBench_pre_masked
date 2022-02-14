
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* active_win; TYPE_2__* win_list; } ;
struct TYPE_5__ {TYPE_1__* page; scalar_t__ next; } ;
struct TYPE_4__ {int * file; } ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_0(void)
{
    if (!VAR_1.active_win) return VAR_0;
    if (VAR_1.active_win->next || VAR_1.win_list != VAR_1.active_win) return VAR_2;
    return VAR_1.active_win->page != ((void*)0) && VAR_1.active_win->page->file != ((void*)0);
}
