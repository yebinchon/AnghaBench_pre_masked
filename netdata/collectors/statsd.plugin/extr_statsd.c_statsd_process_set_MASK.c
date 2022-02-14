
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ unique; int * dict; } ;
struct TYPE_7__ {int reset; int count; int events; TYPE_1__ set; } ;
typedef TYPE_2__ STATSD_METRIC ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static inline void FUNC_10(STATSD_METRIC *VAR_2, const char *VAR_3) {
    if(!FUNC_5(VAR_2)) return;

    if(FUNC_8(!VAR_3 || !*VAR_3)) {
        FUNC_4("STATSD: metric of type set, with empty value is ignored.");
        return;
    }

    if(FUNC_8(VAR_2->reset)) {
        if(FUNC_6(VAR_2->set.dict)) {
            FUNC_1(VAR_2->set.dict);
            VAR_2->set.dict = ((void*)0);
        }
        FUNC_7(VAR_2);
    }

    if (FUNC_8(!VAR_2->set.dict)) {
        VAR_2->set.dict = FUNC_0(VAR_1 | VAR_0);
        VAR_2->set.unique = 0;
    }

    if(FUNC_8(FUNC_9(VAR_3))) {

    }
    else {
        void *VAR_4 = FUNC_2(VAR_2->set.dict, VAR_3);
        if (FUNC_8(!VAR_4)) {
            FUNC_3(VAR_2->set.dict, VAR_3, ((void*)0), 1);
            VAR_2->set.unique++;
        }

        VAR_2->events++;
        VAR_2->count++;
    }
}
