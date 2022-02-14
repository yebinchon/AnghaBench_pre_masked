
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wValue; int wIndex; scalar_t__ wLength; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static bool FUNC_2(void) {
    if (VAR_1.req.wLength) {
        return 0;
    }
    if (VAR_1.req.wValue == VAR_0) {
        FUNC_0(VAR_1.req.wIndex & 0xFF);
        return FUNC_1(VAR_1.req.wIndex & 0xFF);
    }
    return 0;
}
