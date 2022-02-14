
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
typedef TYPE_1__ STATSD_METRIC ;
typedef int RRD_ALGORITHM ;


 int VAR_0 ;
 int VAR_1 ;







__attribute__((used)) static inline RRD_ALGORITHM FUNC_0(STATSD_METRIC *VAR_2) {
    switch(VAR_2->type) {
        default:
        case 132:
        case 129:
        case 128:
        case 131:
            return VAR_0;

        case 130:
        case 133:
            return VAR_1;
    }
}
