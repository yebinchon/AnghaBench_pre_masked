
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_9__ {int h; int s; } ;
struct TYPE_8__ {int h; int s; } ;
struct TYPE_12__ {int brightness; TYPE_2__ color_2; TYPE_1__ color_1; } ;
struct TYPE_11__ {int h; int s; int v; } ;
struct TYPE_10__ {int b; int g; int r; } ;
typedef TYPE_3__ RGB ;
typedef TYPE_4__ HSV ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 TYPE_7__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_1 (TYPE_4__) ;
 int FUNC_2 () ;

void FUNC_3(bool VAR_3)
{
    int16_t VAR_4 = VAR_1.color_1.h;
    int16_t VAR_5 = VAR_1.color_2.h;
    int16_t VAR_6 = VAR_5 - VAR_4;
    VAR_6 /= 4;


    if ( VAR_6 > 127 )
    {
        VAR_6 -= 256;
    }
    else if ( VAR_6 < -127 )
    {
        VAR_6 += 256;
    }

    int16_t VAR_7 = VAR_1.color_1.s;
    int16_t VAR_8 = VAR_1.color_2.s;
    int16_t VAR_9 = ( VAR_8 - VAR_7 ) / 4;

    HSV VAR_10;
    RGB VAR_11;


    uint8_t VAR_12 = ( VAR_2 & 0x000 ) == 0 ? FUNC_2() % VAR_0 : 255;

    for ( int VAR_13=0; VAR_13<VAR_0; VAR_13++ )
    {


        if ( VAR_3 || VAR_13 == VAR_12 )
        {
            VAR_10.h = VAR_4 + ( VAR_6 * ( FUNC_2() & 0x03 ) );
            VAR_10.s = VAR_7 + ( VAR_9 * ( FUNC_2() & 0x03 ) );

            VAR_10.v = VAR_1.brightness;;

            VAR_11 = FUNC_1( VAR_10 );
            FUNC_0( VAR_13, VAR_11.r, VAR_11.g, VAR_11.b );
        }
    }
}
