
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ use_7u_spacebar; int brightness; } ;
struct TYPE_10__ {int s; int h; } ;
struct TYPE_9__ {int v; int s; int h; } ;
struct TYPE_8__ {int b; int g; int r; } ;
typedef TYPE_1__ RGB ;
typedef TYPE_2__ HSV ;
typedef TYPE_3__ HS ;


 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_6__ VAR_0 ;
 TYPE_1__ FUNC_2 (TYPE_2__) ;

void FUNC_3( uint8_t VAR_1, HS VAR_2 )
{
    HSV VAR_3 = { .h = VAR_2.h, .s = VAR_2.s, .v = VAR_0.brightness };
    RGB VAR_4 = FUNC_2( VAR_3 );
    if ( VAR_1 == 254 )
    {
        FUNC_1( VAR_4.r, VAR_4.g, VAR_4.b );
    }
    else
    {
        FUNC_0( VAR_1, VAR_4.r, VAR_4.g, VAR_4.b );



        if ( VAR_1 == 36+0 )
        {
        }
    }
}
