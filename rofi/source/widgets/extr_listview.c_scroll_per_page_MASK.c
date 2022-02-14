
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ selected; scalar_t__ last_offset; scalar_t__ max_elements; unsigned int cur_page; int rchanged; } ;
typedef TYPE_1__ listview ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0 ( listview * VAR_1 )
{
    int VAR_2 = 0;



    if ( ( ( VAR_1->selected - ( VAR_1->last_offset ) ) < ( VAR_1->max_elements ) ) && ( VAR_1->selected >= ( VAR_1->last_offset ) ) ) {
        VAR_2 = VAR_1->last_offset;
    }
    else{

        unsigned int VAR_3 = ( VAR_1->max_elements > 0 ) ? ( VAR_1->selected / VAR_1->max_elements ) : 0;
        VAR_2 = VAR_3 * VAR_1->max_elements;
        if ( VAR_3 != VAR_1->cur_page ) {
            VAR_1->cur_page = VAR_3;
            VAR_1->rchanged = VAR_0;
        }


    }
    return VAR_2;
}
