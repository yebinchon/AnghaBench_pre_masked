
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nk_color {int r; int g; int b; } ;
struct TYPE_3__ {int Red; int Green; int Blue; int Alpha; } ;
typedef TYPE_1__* PTRIVERTEX ;



__attribute__((used)) static void
FUNC_0(PTRIVERTEX VAR_0, struct nk_color VAR_1)
{
    VAR_0->Red = VAR_1.r << 8;
    VAR_0->Green = VAR_1.g << 8;
    VAR_0->Blue = VAR_1.b << 8;
    VAR_0->Alpha = 0xff << 8;
}
