
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int stringlen; } ;
struct TYPE_5__ {int num_chars; int x1; double baseline_y_delta; int ymin; scalar_t__ ymax; scalar_t__ x0; } ;
typedef TYPE_1__ StbTexteditRow ;
typedef TYPE_2__ STB_TEXTEDIT_STRING ;



void FUNC_0(StbTexteditRow *VAR_0, STB_TEXTEDIT_STRING *VAR_1, int VAR_2)
{
   int VAR_3 = VAR_1->stringlen - VAR_2;
   VAR_0->num_chars = VAR_3 > 20 ? 20 : VAR_3;
   VAR_0->x0 = 0;
   VAR_0->x1 = 20;
   VAR_0->baseline_y_delta = 1.25;
   VAR_0->ymin = -1;
   VAR_0->ymax = 0;
}
