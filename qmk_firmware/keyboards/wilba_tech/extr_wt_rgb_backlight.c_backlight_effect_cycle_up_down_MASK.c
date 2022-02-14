
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_11__ {int effect_speed; scalar_t__ use_7u_spacebar; int brightness; } ;
struct TYPE_10__ {int h; int s; int v; } ;
struct TYPE_9__ {int y; } ;
struct TYPE_8__ {int b; int g; int r; } ;
typedef TYPE_1__ RGB ;
typedef TYPE_2__ Point ;
typedef TYPE_3__ HSV ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 TYPE_7__ VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int,TYPE_2__*) ;

void FUNC_3(void)
{
    uint8_t VAR_4 = ( VAR_3 << VAR_1.effect_speed ) & 0xFF;
    HSV VAR_5 = { .h = 0, .s = 255, .v = VAR_1.brightness };
    RGB VAR_6;
    Point VAR_7;
    for ( int VAR_8=0; VAR_8<VAR_0; VAR_8++ )
    {
        uint16_t VAR_9 = VAR_2[VAR_8]<<2;


        if ( VAR_8 == 36+6 || VAR_8 == 54+13 ||
                ( VAR_1.use_7u_spacebar && VAR_8 == 54+14 ) )
        {
            VAR_9 = VAR_2[36+0]<<2;
        }

        VAR_9 = (VAR_9<=63) ? (63-VAR_9) : 0;

        FUNC_2( VAR_8, &VAR_7 );

        VAR_5.h = VAR_7.y + VAR_4 + VAR_9;
        VAR_6 = FUNC_1( VAR_5 );
        FUNC_0( VAR_8, VAR_6.r, VAR_6.g, VAR_6.b );
    }
}
