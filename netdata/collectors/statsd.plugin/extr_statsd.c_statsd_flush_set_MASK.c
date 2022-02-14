
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ collected_number ;
struct TYPE_5__ {scalar_t__ unique; } ;
struct TYPE_6__ {int reset; int options; scalar_t__ last; TYPE_1__ set; scalar_t__ count; int name; } ;
typedef TYPE_2__ STATSD_METRIC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(STATSD_METRIC *VAR_3) {
    FUNC_0(VAR_0, "flushing set metric '%s'", VAR_3->name);

    int VAR_4 = 0;
    if(FUNC_2(!VAR_3->reset && VAR_3->count)) {
        VAR_3->last = (collected_number)VAR_3->set.unique;

        VAR_3->reset = 1;
        VAR_4 = 1;
    }
    else {
        VAR_3->last = 0;
    }

    if(FUNC_2(VAR_3->options & VAR_1 && (VAR_4 || !(VAR_3->options & VAR_2))))
        FUNC_1(VAR_3);
}
