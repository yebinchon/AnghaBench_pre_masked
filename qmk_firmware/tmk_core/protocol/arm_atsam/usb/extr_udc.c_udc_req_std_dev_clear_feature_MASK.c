
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ wValue; scalar_t__ wLength; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static bool FUNC_2(void) {
    if (VAR_3.req.wLength) {
        return 0;
    }

    if (VAR_3.req.wValue == VAR_0) {
        VAR_2 &= FUNC_0(~(uint32_t)VAR_1);

        FUNC_1();

        return 1;
    }
    return 0;
}
