
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash; int name; } ;
typedef TYPE_1__ STATSD_METRIC ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void* VAR_0, void* VAR_1) {
    if(((STATSD_METRIC *)VAR_0)->hash < ((STATSD_METRIC *)VAR_1)->hash) return -1;
    else if(((STATSD_METRIC *)VAR_0)->hash > ((STATSD_METRIC *)VAR_1)->hash) return 1;
    else return FUNC_0(((STATSD_METRIC *)VAR_0)->name, ((STATSD_METRIC *)VAR_1)->name);
}
