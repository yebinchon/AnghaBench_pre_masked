
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ configEpoch; } ;
struct TYPE_5__ {TYPE_1__* cluster; } ;
struct TYPE_4__ {scalar_t__ currentEpoch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_3__* VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 (int ,char*,unsigned long long) ;

int FUNC_3(void) {
    uint64_t VAR_7 = FUNC_1();

    if (VAR_5->configEpoch == 0 ||
        VAR_5->configEpoch != VAR_7)
    {
        VAR_6.cluster->currentEpoch++;
        VAR_5->configEpoch = VAR_6.cluster->currentEpoch;
        FUNC_0(VAR_1|
                             VAR_0);
        FUNC_2(VAR_4,
            "New configEpoch set to %llu",
            (unsigned long long) VAR_5->configEpoch);
        return VAR_3;
    } else {
        return VAR_2;
    }
}
