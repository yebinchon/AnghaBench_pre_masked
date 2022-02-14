
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wValue; int wLength; } ;
struct TYPE_4__ {int payload_size; int callback; int * payload; TYPE_1__ req; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(void) {
    if ((VAR_0 == (VAR_1.req.wValue >> 8)) && (0 == (0xFF & VAR_1.req.wValue)) && (1 == VAR_1.req.wLength)) {

        VAR_1.payload = &VAR_2;
        VAR_1.callback = VAR_3;
        VAR_1.payload_size = 1;
        return 1;
    }
    return 0;
}
