
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int index; int color; } ;
struct TYPE_8__ {int index; int color; } ;
struct TYPE_7__ {int index; int color; } ;
struct TYPE_6__ {int index; int color; } ;
struct TYPE_10__ {TYPE_4__ layer_1_indicator; TYPE_3__ layer_2_indicator; TYPE_2__ layer_3_indicator; TYPE_1__ caps_lock_indicator; } ;


 int FUNC_0 (int,int,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;

void FUNC_4(void)
{
    if ( VAR_1.caps_lock_indicator.index != 255 &&
            ( VAR_2 & (1<<VAR_0) ) )
    {
        FUNC_3( VAR_1.caps_lock_indicator.index, VAR_1.caps_lock_indicator.color );
    }
    if ( FUNC_1(3) )
    {
        if ( VAR_1.layer_3_indicator.index != 255 )
        {
            FUNC_3( VAR_1.layer_3_indicator.index, VAR_1.layer_3_indicator.color );
        }
    }
    else if ( FUNC_1(2) )
    {
        if ( VAR_1.layer_2_indicator.index != 255 )
        {
            FUNC_3( VAR_1.layer_2_indicator.index, VAR_1.layer_2_indicator.color );
        }
    }
    else if ( FUNC_1(1) )
    {
        if ( VAR_1.layer_1_indicator.index != 255 )
        {
            FUNC_3( VAR_1.layer_1_indicator.index, VAR_1.layer_1_indicator.color );
        }
    }
}
