
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int s; scalar_t__ h; } ;
struct TYPE_13__ {int effect_speed; TYPE_1__ color_1; int brightness; } ;
struct TYPE_12__ {int s; scalar_t__ h; int v; } ;
struct TYPE_11__ {int x; int y; } ;
struct TYPE_10__ {int b; int g; int r; } ;
typedef TYPE_2__ RGB ;
typedef TYPE_3__ Point ;
typedef TYPE_4__ HSV ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 TYPE_8__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ FUNC_1 (TYPE_4__) ;
 int FUNC_2 (int,TYPE_3__*) ;

void FUNC_3(void)
{
    uint8_t VAR_3 = ( VAR_2 << VAR_1.effect_speed ) & 0xFF;

    HSV VAR_4 = { .h = 0, .s = VAR_1.color_1.s, .v = VAR_1.brightness };
    RGB VAR_5;
    Point VAR_6;
    for ( int VAR_7=0; VAR_7<VAR_0; VAR_7++ )
    {
        FUNC_2( VAR_7, &VAR_6 );
        uint8_t VAR_8 = VAR_3 + VAR_6.x;
        if ( VAR_8 & 0x80 )
        {
            VAR_8 = ~VAR_8;
        }
        VAR_8 = VAR_8 >> 2;
        VAR_4.h = VAR_1.color_1.h + VAR_8;
        VAR_4.s = 127 + ( VAR_6.y >> 1 );
        VAR_5 = FUNC_1( VAR_4 );
        FUNC_0( VAR_7, VAR_5.r, VAR_5.g, VAR_5.b );
    }
}
