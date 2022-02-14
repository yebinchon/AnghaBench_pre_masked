
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int s; int h; } ;
struct TYPE_10__ {int brightness; TYPE_1__ color_1; } ;
struct TYPE_9__ {int v; int s; int h; } ;
struct TYPE_8__ {int b; int g; int r; } ;
typedef TYPE_2__ RGB ;
typedef TYPE_3__ HSV ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_6__ VAR_0 ;
 TYPE_2__ FUNC_1 (TYPE_3__) ;

void FUNC_2(void)
{
    HSV VAR_1 = { .h = VAR_0.color_1.h, .s = VAR_0.color_1.s, .v = VAR_0.brightness };
    RGB VAR_2 = FUNC_1( VAR_1 );
    FUNC_0( VAR_2.r, VAR_2.g, VAR_2.b );
}
