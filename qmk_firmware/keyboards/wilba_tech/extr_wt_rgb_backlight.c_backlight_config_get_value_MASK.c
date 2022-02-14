
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int index; int color; } ;
struct TYPE_8__ {int index; int color; } ;
struct TYPE_7__ {int index; int color; } ;
struct TYPE_6__ {int index; int color; } ;
struct TYPE_10__ {int disable_after_timeout; int brightness; int effect; int effect_speed; int* alphas_mods; int * custom_color; TYPE_4__ layer_3_indicator; TYPE_3__ layer_2_indicator; TYPE_2__ layer_1_indicator; TYPE_1__ caps_lock_indicator; int color_2; int color_1; int disable_hhkb_blocker_leds; int disable_when_usb_suspended; int use_iso_enter; int use_7u_spacebar; int use_split_right_shift; int use_split_left_shift; int use_split_backspace; } ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int ,int*,int*) ;
 TYPE_5__ VAR_0 ;
void FUNC_2( uint8_t *VAR_1 )
{
    uint8_t *VAR_2 = &(VAR_1[0]);
    uint8_t *VAR_3 = &(VAR_1[1]);
    switch ( *VAR_2 )
    {
        case 130:
        {
            *VAR_3 = ( VAR_0.use_split_backspace ? 1 : 0 );
            break;
        }
        case 129:
        {
            *VAR_3 = ( VAR_0.use_split_left_shift ? 1 : 0 );
            break;
        }
        case 128:
        {
            *VAR_3 = ( VAR_0.use_split_right_shift ? 1 : 0 );
            break;
        }
        case 132:
        {
            *VAR_3 = ( VAR_0.use_7u_spacebar ? 1 : 0 );
            break;
        }
        case 131:
        {
            *VAR_3 = ( VAR_0.use_iso_enter ? 1 : 0 );
            break;
        }
        case 141:
        {
            *VAR_3 = ( VAR_0.disable_when_usb_suspended ? 1 : 0 );
            break;
        }
        case 142:
        {
            *VAR_3 = ( VAR_0.disable_hhkb_blocker_leds ? 1 : 0 );
            break;
        }
        case 143:
        {
            *VAR_3 = VAR_0.disable_after_timeout;
            break;
        }
        case 149:
        {
            *VAR_3 = VAR_0.brightness;
            break;
        }
        case 140:
        {
            *VAR_3 = VAR_0.effect;
            break;
        }
        case 139:
        {
            *VAR_3 = VAR_0.effect_speed;
            break;
        }
        case 146:
        {
            FUNC_0( &(VAR_0.color_1), VAR_3 );
            break;
        }
        case 145:
        {
            FUNC_0( &(VAR_0.color_2), VAR_3 );
            break;
        }
        case 148:
        {
            FUNC_0( &(VAR_0.caps_lock_indicator.color), VAR_3 );
            break;
        }
        case 147:
        {
            FUNC_1( VAR_0.caps_lock_indicator.index, &(VAR_3[0]), &(VAR_3[1]) );
            break;
        }
        case 138:
        {
            FUNC_0( &(VAR_0.layer_1_indicator.color), VAR_3 );
            break;
        }
        case 137:
        {
            FUNC_1( VAR_0.layer_1_indicator.index, &(VAR_3[0]), &(VAR_3[1]) );
            break;
        }
        case 136:
        {
            FUNC_0( &(VAR_0.layer_2_indicator.color), VAR_3 );
            break;
        }
        case 135:
        {
            FUNC_1( VAR_0.layer_2_indicator.index, &(VAR_3[0]), &(VAR_3[1]) );
            break;
        }
        case 134:
        {
            FUNC_0( &(VAR_0.layer_3_indicator.color), VAR_3 );
            break;
        }
        case 133:
        {
            FUNC_1( VAR_0.layer_3_indicator.index, &(VAR_3[0]), &(VAR_3[1]) );
            break;
        }
        case 150:
        {
            for ( int VAR_4=0; VAR_4<5; VAR_4++ )
            {
                *(VAR_3+VAR_4*2) = VAR_0.alphas_mods[VAR_4] >> 8;
                *(VAR_3+VAR_4*2+1) = VAR_0.alphas_mods[VAR_4] & 0xFF;
            }
        }
    }
}
