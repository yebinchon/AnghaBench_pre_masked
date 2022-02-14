
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


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_3(SlNetAppEvent_t *VAR_4) {
  if (VAR_4->Event == VAR_2) {
    SlIpV4AcquiredAsync_t *VAR_5 = &VAR_4->EventData.ipAcquiredV4;
    FUNC_1(VAR_0, ("IP acquired: %lu.%lu.%lu.%lu", FUNC_2(VAR_5->ip, 3),
                  FUNC_2(VAR_5->ip, 2), FUNC_2(VAR_5->ip, 1),
                  FUNC_2(VAR_5->ip, 0)));
    FUNC_0(VAR_1);
  } else if (VAR_4->Event == VAR_3) {
    FUNC_1(VAR_0, ("IP leased"));
  } else {
    FUNC_1(VAR_0, ("NetApp event %d", (int) VAR_4->Event));
  }
}
