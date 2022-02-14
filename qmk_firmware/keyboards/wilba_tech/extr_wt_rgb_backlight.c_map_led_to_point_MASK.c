
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {int use_split_right_shift; int use_7u_spacebar; int use_split_left_shift; int use_iso_enter; int use_split_backspace; } ;
struct TYPE_4__ {int x; int y; } ;
typedef TYPE_1__ Point ;


 TYPE_3__ VAR_0 ;
 int * VAR_1 ;
 void* FUNC_0 (size_t*) ;

void FUNC_1( uint8_t VAR_2, Point *VAR_3 )
{

    uint8_t *VAR_4 = (uint8_t*)&VAR_1[VAR_2];
    VAR_3->x = FUNC_0(VAR_4);
    VAR_3->y = FUNC_0(VAR_4+1);





    switch (VAR_2)
    {
        case 18+4:
            if ( VAR_0.use_split_backspace )
                VAR_3->x -= 8;
            break;
    }
}
