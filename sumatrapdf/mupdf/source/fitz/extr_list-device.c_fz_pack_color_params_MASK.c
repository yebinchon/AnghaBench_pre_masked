
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

__attribute__((used)) static int
FUNC_0(fz_color_params VAR_4)
{
 int VAR_5 = 0;
 VAR_5 |= VAR_4.ri << VAR_3;
 VAR_5 |= VAR_4.bp << VAR_0;
 VAR_5 |= VAR_4.op << VAR_1;
 VAR_5 |= VAR_4.opm << VAR_2;
 return VAR_5;
}
