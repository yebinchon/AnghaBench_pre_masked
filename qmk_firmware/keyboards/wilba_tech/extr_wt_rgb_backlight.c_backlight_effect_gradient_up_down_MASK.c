
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_11__ {int h; int s; } ;
struct TYPE_10__ {int h; int s; } ;
struct TYPE_15__ {TYPE_2__ color_1; int brightness; TYPE_1__ color_2; } ;
struct TYPE_14__ {int h; int s; int v; } ;
struct TYPE_13__ {int y; } ;
struct TYPE_12__ {int b; int g; int r; } ;
typedef TYPE_3__ RGB ;
typedef TYPE_4__ Point ;
typedef TYPE_5__ HSV ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 TYPE_9__ VAR_1 ;
 TYPE_3__ FUNC_1 (TYPE_5__) ;
 int FUNC_2 (int,TYPE_4__*) ;

void FUNC_3(void)
{
    int16_t VAR_2 = VAR_1.color_1.h;
    int16_t VAR_3 = VAR_1.color_2.h;
    int16_t VAR_4 = VAR_3 - VAR_2;


    if ( VAR_4 > 127 )
    {
        VAR_4 -= 256;
    }
    else if ( VAR_4 < -127 )
    {
        VAR_4 += 256;
    }

    VAR_4 /= 4;

    int16_t VAR_5 = VAR_1.color_1.s;
    int16_t VAR_6 = VAR_1.color_2.s;
    int16_t VAR_7 = ( VAR_6 - VAR_5 ) / 4;

    HSV VAR_8 = { .h = 0, .s = 255, .v = VAR_1.brightness };
    RGB VAR_9;
    Point VAR_10;
    for ( int VAR_11=0; VAR_11<VAR_0; VAR_11++ )
    {
        FUNC_2( VAR_11, &VAR_10 );

        uint8_t VAR_12 = (VAR_10.y>>4);

        VAR_8.h = VAR_1.color_1.h + ( VAR_4 * VAR_12 );
        VAR_8.s = VAR_1.color_1.s + ( VAR_7 * VAR_12 );
        VAR_9 = FUNC_1( VAR_8 );
        FUNC_0( VAR_11, VAR_9.r, VAR_9.g, VAR_9.b );
    }
}
