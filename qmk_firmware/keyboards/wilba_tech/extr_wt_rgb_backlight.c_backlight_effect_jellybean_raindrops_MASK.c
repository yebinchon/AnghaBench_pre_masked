
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int brightness; } ;
struct TYPE_7__ {int h; int s; int v; } ;
struct TYPE_6__ {int b; int g; int r; } ;
typedef TYPE_1__ RGB ;
typedef TYPE_2__ HSV ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_1 (TYPE_2__) ;
 int FUNC_2 () ;

void FUNC_3( bool VAR_3 )
{
    HSV VAR_4;
    RGB VAR_5;


    uint8_t VAR_6 = ( VAR_2 & 0x000 ) == 0 ? FUNC_2() % VAR_0 : 255;

    for ( int VAR_7=0; VAR_7<VAR_0; VAR_7++ )
    {


        if ( VAR_3 || VAR_7 == VAR_6 )
        {
            VAR_4.h = FUNC_2() & 0xFF;
            VAR_4.s = FUNC_2() & 0xFF;

            VAR_4.v = VAR_1.brightness;;

            VAR_5 = FUNC_1( VAR_4 );
            FUNC_0( VAR_7, VAR_5.r, VAR_5.g, VAR_5.b );
        }
    }
}
