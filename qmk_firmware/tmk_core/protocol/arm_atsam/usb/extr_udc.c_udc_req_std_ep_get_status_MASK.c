
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int udc_ep_status ;
typedef int le16_t ;
struct TYPE_3__ {int wLength; int wIndex; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static bool FUNC_3(void) {
    static le16_t VAR_2;

    if (VAR_1.req.wLength != sizeof(VAR_2)) {
        return 0;
    }

    VAR_2 = FUNC_1(VAR_1.req.wIndex & 0xFF) ? FUNC_0(VAR_0) : 0;

    FUNC_2((uint8_t *)&VAR_2, sizeof(VAR_2));
    return 1;
}
