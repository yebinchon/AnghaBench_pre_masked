
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int effect_speed; int brightness; scalar_t__ use_7u_spacebar; } ;
struct TYPE_7__ {int s; int v; int h; } ;
struct TYPE_6__ {int b; int g; int r; } ;
typedef TYPE_1__ RGB ;
typedef TYPE_2__ HSV ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 TYPE_5__ VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_1 (TYPE_2__) ;

void FUNC_2(void)
{
    uint8_t VAR_4 = ( VAR_3 << VAR_1.effect_speed ) & 0xFF;


    for ( int VAR_5=0; VAR_5<VAR_0; VAR_5++ )
    {
        uint16_t VAR_6 = VAR_2[VAR_5]<<2;


        if ( VAR_5 == 36+6 || VAR_5 == 54+13 ||
                ( VAR_1.use_7u_spacebar && VAR_5 == 54+14 ) )
        {
            VAR_6 = VAR_2[36+0]<<2;
        }

        VAR_6 = (VAR_6<=63) ? (63-VAR_6) : 0;

        HSV VAR_7 = { .h = VAR_4+VAR_6, .s = 255, .v = VAR_1.brightness };
        RGB VAR_8 = FUNC_1( VAR_7 );
        FUNC_0( VAR_5, VAR_8.r, VAR_8.g, VAR_8.b );
    }
}
