
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ri; int bp; int op; int opm; } ;
typedef TYPE_1__ fz_color_params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(fz_color_params *VAR_4, int VAR_5)
{
 VAR_4->ri = (VAR_5 >> VAR_3) & 3;
 VAR_4->bp = (VAR_5 >> VAR_0) & 1;
 VAR_4->op = (VAR_5 >> VAR_1) & 1;
 VAR_4->opm = (VAR_5 >> VAR_2) & 1;
}
