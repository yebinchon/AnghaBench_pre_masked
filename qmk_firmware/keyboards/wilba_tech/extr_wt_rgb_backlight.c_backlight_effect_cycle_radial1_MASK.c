
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int effect_speed; int brightness; } ;
struct TYPE_10__ {int h; int s; int v; } ;
struct TYPE_9__ {int x; int y; } ;
struct TYPE_8__ {int b; int g; int r; } ;
typedef TYPE_1__ RGB ;
typedef TYPE_2__ Point ;
typedef TYPE_3__ HSV ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 TYPE_7__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int,TYPE_2__*) ;

void FUNC_3(void)
{
    uint8_t VAR_3 = ( VAR_2 << VAR_1.effect_speed ) & 0xFF;
    HSV VAR_4 = { .h = 0, .s = 255, .v = VAR_1.brightness };
    RGB VAR_5;
    Point VAR_6;
    for ( int VAR_7=0; VAR_7<VAR_0; VAR_7++ )
    {
        FUNC_2( VAR_7, &VAR_6 );

        VAR_4.h = VAR_6.x + VAR_3;
        VAR_4.s = VAR_6.y;
        VAR_5 = FUNC_1( VAR_4 );
        FUNC_0( VAR_7, VAR_5.r, VAR_5.g, VAR_5.b );
    }
}
