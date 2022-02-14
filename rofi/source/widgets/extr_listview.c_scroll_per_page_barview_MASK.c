
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int cur_visible; } ;
struct TYPE_5__ {unsigned int last_offset; unsigned int selected; void* rchanged; TYPE_1__ barview; } ;
typedef TYPE_2__ listview ;


 void* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0 ( listview *VAR_1 )
{
    unsigned int VAR_2 = VAR_1->last_offset;



    if ( VAR_1->selected < VAR_1->last_offset ) {
        VAR_2 = VAR_1->selected;
        VAR_1->rchanged = VAR_0;
    }
    else if ( VAR_1->selected >= ( VAR_1->last_offset + VAR_1->barview.cur_visible ) ) {
        VAR_2 = VAR_1->selected;
        VAR_1->rchanged = VAR_0;
    }
    return VAR_2;
}
