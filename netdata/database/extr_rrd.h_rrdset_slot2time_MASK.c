
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_6__ {size_t name; scalar_t__ update_every; scalar_t__ entries; } ;
typedef TYPE_1__ RRDSET ;


 int FUNC_0 (char*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline time_t FUNC_5(RRDSET *VAR_0, size_t VAR_1) {
    time_t VAR_2;

    if(VAR_1 >= (size_t)VAR_0->entries) {
        FUNC_0("INTERNAL ERROR: caller of rrdset_slot2time() gives invalid slot %zu", VAR_1);
        VAR_1 = (size_t)VAR_0->entries - 1;
    }

    if(VAR_1 > FUNC_3(VAR_0)) {
        VAR_2 = FUNC_2(VAR_0) - (size_t)VAR_0->update_every * (FUNC_3(VAR_0) - VAR_1 + (size_t)VAR_0->entries);
    }
    else {
        VAR_2 = FUNC_2(VAR_0) - (size_t)VAR_0->update_every;
    }

    if(FUNC_4(VAR_2 < FUNC_1(VAR_0))) {
        FUNC_0("INTERNAL ERROR: rrdset_slot2time() on %s returns time too far in the past", VAR_0->name);
        VAR_2 = FUNC_1(VAR_0);
    }

    if(FUNC_4(VAR_2 > FUNC_2(VAR_0))) {
        FUNC_0("INTERNAL ERROR: rrdset_slot2time() on %s returns time into the future", VAR_0->name);
        VAR_2 = FUNC_2(VAR_0);
    }

    return VAR_2;
}
