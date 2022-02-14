
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ip; } ;
struct TYPE_5__ {TYPE_3__ ipAcquiredV4; } ;
struct TYPE_6__ {scalar_t__ Event; TYPE_1__ EventData; } ;
typedef TYPE_2__ SlNetAppEvent_t ;
typedef TYPE_3__ SlIpV4AcquiredAsync_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_2(SlNetAppEvent_t *VAR_4) {
  if (VAR_4->Event == VAR_1) {
    SlIpV4AcquiredAsync_t *VAR_5 = &VAR_4->EventData.ipAcquiredV4;
    FUNC_0(VAR_0, ("IP acquired: %lu.%lu.%lu.%lu", FUNC_1(VAR_5->ip, 3),
                  FUNC_1(VAR_5->ip, 2), FUNC_1(VAR_5->ip, 1),
                  FUNC_1(VAR_5->ip, 0)));
    VAR_3 = 1;
  } else if (VAR_4->Event == VAR_2) {
    FUNC_0(VAR_0, ("IP leased"));
  } else {
    FUNC_0(VAR_0, ("NetApp event %d", VAR_4->Event));
  }
}
