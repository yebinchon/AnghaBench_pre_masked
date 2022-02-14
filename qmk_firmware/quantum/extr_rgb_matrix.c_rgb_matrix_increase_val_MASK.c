
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ v; } ;
struct TYPE_4__ {TYPE_1__ hsv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 TYPE_2__ VAR_2 ;

void FUNC_2(void) {
    VAR_2.hsv.v = FUNC_1(VAR_2.hsv.v, VAR_1);
    if (VAR_2.hsv.v > VAR_0) VAR_2.hsv.v = VAR_0;
    FUNC_0();
}
