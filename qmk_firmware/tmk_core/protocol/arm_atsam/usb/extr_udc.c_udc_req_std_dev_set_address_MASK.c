
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wLength; } ;
struct TYPE_4__ {int callback; TYPE_1__ req; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(void) {
    if (VAR_1.req.wLength) {
        return 0;
    }



    VAR_1.callback = VAR_0;
    return 1;
}
