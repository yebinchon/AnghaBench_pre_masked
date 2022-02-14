
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sender; int status; } ;
struct TYPE_6__ {TYPE_1__ deviceEvent; } ;
struct TYPE_7__ {TYPE_2__ EventData; } ;
typedef TYPE_3__ SlDeviceEvent_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void FUNC_1(SlDeviceEvent_t *VAR_1) {
  FUNC_0(VAR_0, ("status %d sender %d", VAR_1->EventData.deviceEvent.status,
                 VAR_1->EventData.deviceEvent.sender));
}
