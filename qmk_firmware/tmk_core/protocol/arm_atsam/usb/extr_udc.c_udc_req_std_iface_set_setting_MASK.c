
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int wIndex; int wValue; scalar_t__ wLength; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static bool FUNC_2(void) {
    uint8_t VAR_2, VAR_3;

    if (VAR_1.req.wLength) {
        return 0;
    }
    if (!VAR_0) {
        return 0;
    }

    VAR_2 = VAR_1.req.wIndex & 0xFF;
    VAR_3 = VAR_1.req.wValue & 0xFF;


    if (!FUNC_0(VAR_2)) {
        return 0;
    }


    return FUNC_1(VAR_2, VAR_3);
}
