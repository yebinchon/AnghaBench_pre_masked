
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_7__ {int entries; int name; scalar_t__ update_every; } ;
typedef TYPE_1__ RRDSET ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline size_t FUNC_6(RRDSET *VAR_0, time_t VAR_1) {
    size_t VAR_2 = 0;

    if(VAR_1 >= FUNC_3(VAR_0)) {

        VAR_2 = FUNC_4(VAR_0);
    }
    else {
        if(VAR_1 <= FUNC_1(VAR_0)) {

            VAR_2 = FUNC_2(VAR_0);
        }
        else {
            if(FUNC_4(VAR_0) >= ((FUNC_3(VAR_0) - VAR_1) / (size_t)(VAR_0->update_every)))
                VAR_2 = FUNC_4(VAR_0) - ((FUNC_3(VAR_0) - VAR_1) / (size_t)(VAR_0->update_every));
            else
                VAR_2 = FUNC_4(VAR_0) - ((FUNC_3(VAR_0) - VAR_1) / (size_t)(VAR_0->update_every)) + (unsigned long)VAR_0->entries;
        }
    }

    if(FUNC_5(VAR_2 >= (size_t)VAR_0->entries)) {
        FUNC_0("INTERNAL ERROR: rrdset_time2slot() on %s returns values outside entries", VAR_0->name);
        VAR_2 = (size_t)(VAR_0->entries - 1);
    }

    return VAR_2;
}
