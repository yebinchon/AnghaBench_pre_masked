
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; } ;
struct TYPE_6__ {int reset; int options; TYPE_1__ counter; int last; scalar_t__ count; int name; } ;
typedef TYPE_2__ STATSD_METRIC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 int FUNC_1 (TYPE_2__*,char const*,char const*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(STATSD_METRIC *VAR_3, const char *VAR_4, const char *VAR_5) {
    FUNC_0(VAR_0, "flushing %s metric '%s'", VAR_4, VAR_3->name);

    int VAR_6 = 0;
    if(FUNC_2(!VAR_3->reset && VAR_3->count)) {
        VAR_3->last = VAR_3->counter.value;

        VAR_3->reset = 1;
        VAR_6 = 1;
    }

    if(FUNC_2(VAR_3->options & VAR_1 && (VAR_6 || !(VAR_3->options & VAR_2))))
        FUNC_1(VAR_3, VAR_4, VAR_5);
}
