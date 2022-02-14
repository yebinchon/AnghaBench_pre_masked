
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target {int* target_fds; int openother; int openeventpolls; int opensignalfds; int opentimerfds; int openeventfds; int openinotifies; int opensockets; int openpipes; int openfiles; } ;
struct TYPE_2__ {int type; } ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(int VAR_1, struct target *VAR_2) {
    if(FUNC_0(!VAR_2))
        return;

    if(FUNC_0(VAR_2->target_fds[VAR_1])) {


        VAR_2->target_fds[VAR_1]++;
        return;
    }



    VAR_2->target_fds[VAR_1]++;

    switch(VAR_0[VAR_1].type) {
        case 134:
            VAR_2->openfiles++;
            break;

        case 131:
            VAR_2->openpipes++;
            break;

        case 129:
            VAR_2->opensockets++;
            break;

        case 133:
            VAR_2->openinotifies++;
            break;

        case 136:
            VAR_2->openeventfds++;
            break;

        case 128:
            VAR_2->opentimerfds++;
            break;

        case 130:
            VAR_2->opensignalfds++;
            break;

        case 135:
            VAR_2->openeventpolls++;
            break;

        case 132:
            VAR_2->openother++;
            break;
    }
}
