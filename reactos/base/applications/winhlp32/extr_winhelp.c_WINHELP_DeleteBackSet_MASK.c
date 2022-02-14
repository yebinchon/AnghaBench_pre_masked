
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int index; TYPE_2__* set; } ;
struct TYPE_9__ {TYPE_3__ back; } ;
typedef TYPE_4__ WINHELP_WINDOW ;
struct TYPE_7__ {TYPE_1__* page; } ;
struct TYPE_6__ {int file; } ;


 int FUNC_0 (int ) ;

void FUNC_1(WINHELP_WINDOW* VAR_0)
{
    unsigned int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->back.index; VAR_1++)
    {
        FUNC_0(VAR_0->back.set[VAR_1].page->file);
        VAR_0->back.set[VAR_1].page = ((void*)0);
    }
    VAR_0->back.index = 0;
}
