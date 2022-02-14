
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int disable_after_timeout; int brightness; int effect; int effect_speed; int color_1; int disable_when_usb_suspended; } ;


 int FUNC_0 (int *,int*) ;
 TYPE_1__ VAR_0 ;







void FUNC_1( uint8_t *VAR_1 )
{
    uint8_t *VAR_2 = &(VAR_1[0]);
    uint8_t *VAR_3 = &(VAR_1[1]);
    switch ( *VAR_2 )
    {
        case 130:
        {
            *VAR_3 = ( VAR_0.disable_when_usb_suspended ? 1 : 0 );
            break;
        }
        case 131:
        {
            *VAR_3 = VAR_0.disable_after_timeout;
            break;
        }
        case 133:
        {
            *VAR_3 = VAR_0.brightness;
            break;
        }
        case 129:
        {
            *VAR_3 = VAR_0.effect;
            break;
        }
        case 128:
        {
            *VAR_3 = VAR_0.effect_speed;
            break;
        }
        case 132:
        {
            FUNC_0( &(VAR_0.color_1), VAR_3 );
            break;
        }
    }
}
