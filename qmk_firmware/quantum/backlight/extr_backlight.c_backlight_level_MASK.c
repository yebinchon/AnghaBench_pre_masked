
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int enable; scalar_t__ level; int raw; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(uint8_t VAR_2) {
    if (VAR_2 > VAR_0) VAR_2 = VAR_0;
    VAR_1.level = VAR_2;
    VAR_1.enable = !!VAR_1.level;
    FUNC_1(VAR_1.raw);
    FUNC_0(VAR_1.level);
}
