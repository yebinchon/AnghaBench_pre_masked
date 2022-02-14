
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ collected_number ;
struct TYPE_8__ {int decimal_detail; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_7__ {int reset; int options; TYPE_1__ gauge; scalar_t__ last; scalar_t__ count; int name; } ;
typedef TYPE_2__ STATSD_METRIC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(STATSD_METRIC *VAR_4) {
    FUNC_0(VAR_0, "flushing gauge metric '%s'", VAR_4->name);

    int VAR_5 = 0;
    if(FUNC_2(!VAR_4->reset && VAR_4->count)) {
        VAR_4->last = (collected_number) (VAR_4->gauge.value * VAR_3.decimal_detail);

        VAR_4->reset = 1;
        VAR_5 = 1;
    }

    if(FUNC_2(VAR_4->options & VAR_1 && (VAR_5 || !(VAR_4->options & VAR_2))))
        FUNC_1(VAR_4);
}
