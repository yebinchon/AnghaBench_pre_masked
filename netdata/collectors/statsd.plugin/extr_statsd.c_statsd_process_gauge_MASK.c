
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_7__ {int reset; int count; int events; TYPE_1__ gauge; int name; } ;
typedef TYPE_2__ STATSD_METRIC ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const*,double) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static inline void FUNC_7(STATSD_METRIC *VAR_0, const char *VAR_1, const char *VAR_2) {
    if(!FUNC_1(VAR_0)) return;

    if(FUNC_5(!VAR_1 || !*VAR_1)) {
        FUNC_0("STATSD: metric '%s' of type gauge, with empty value is ignored.", VAR_0->name);
        return;
    }

    if(FUNC_5(VAR_0->reset)) {

        FUNC_4(VAR_0);
    }

    if(FUNC_5(FUNC_6(VAR_1))) {

    }
    else {
        if (FUNC_5(*VAR_1 == '+' || *VAR_1 == '-'))
            VAR_0->gauge.value += FUNC_2(VAR_1, 1.0) / FUNC_3(VAR_2);
        else
            VAR_0->gauge.value = FUNC_2(VAR_1, 1.0);

        VAR_0->events++;
        VAR_0->count++;
    }
}
