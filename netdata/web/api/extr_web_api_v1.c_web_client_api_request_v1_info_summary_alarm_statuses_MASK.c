
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int status; TYPE_2__* rrdset; struct TYPE_11__* next; } ;
struct TYPE_10__ {TYPE_4__* alarms; } ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_9__ {TYPE_1__ last_collected_time; } ;
typedef TYPE_3__ RRDHOST ;
typedef TYPE_4__ RRDCALC ;
typedef int BUFFER ;




 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(RRDHOST *VAR_0, BUFFER *VAR_1) {
    int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
    RRDCALC *VAR_5;
    FUNC_1(VAR_0);
    for(VAR_5 = VAR_0->alarms; VAR_5 ; VAR_5 = VAR_5->next) {
        if(FUNC_3(!VAR_5->rrdset || !VAR_5->rrdset->last_collected_time.tv_sec))
            continue;

        switch(VAR_5->status) {
            case 128:
                VAR_3++;
                break;
            case 129:
                VAR_4++;
                break;
            default:
                VAR_2++;
        }
    }
    FUNC_2(VAR_0);
    FUNC_0(VAR_1, "\t\t\"normal\": %d,\n", VAR_2);
    FUNC_0(VAR_1, "\t\t\"warning\": %d,\n", VAR_3);
    FUNC_0(VAR_1, "\t\t\"critical\": %d\n", VAR_4);
}
