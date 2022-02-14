
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {void* wLength; void* wIndex; void* wValue; void* bRequest; void* bmRequestType; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 void** VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_0(void) {
    VAR_1.req.bmRequestType = VAR_0[0];
    VAR_1.req.bRequest = VAR_0[1];
    VAR_1.req.wValue = ((uint16_t)(VAR_0[3]) << 8) + VAR_0[2];
    VAR_1.req.wIndex = ((uint16_t)(VAR_0[5]) << 8) + VAR_0[4];
    VAR_1.req.wLength = ((uint16_t)(VAR_0[7]) << 8) + VAR_0[6];
}
