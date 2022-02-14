
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stype; TYPE_1__* silencers; scalar_t__ all_alarms; } ;
struct TYPE_3__ {int families; int hosts; int contexts; int charts; int alarms; struct TYPE_3__* next; } ;
typedef TYPE_1__ SILENCER ;
typedef int BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,char*,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_2__* VAR_7 ;

void FUNC_4(BUFFER *VAR_8) {
    FUNC_0(VAR_8, "{\n\t\"all\": %s,"
                       "\n\t\"type\": \"%s\","
                       "\n\t\"silencers\": [",
                   (VAR_7->all_alarms)?"true":"false",
                   (VAR_7->stype == VAR_6)?"None":((VAR_7->stype == VAR_5)?"DISABLE":"SILENCE"));

    SILENCER *VAR_9;
    int VAR_10 = 0, VAR_11 = 0;
    for(VAR_9 = VAR_7->silencers; VAR_9 ; VAR_9 = VAR_9->next) {
        if(FUNC_3(VAR_10)) FUNC_1(VAR_8, ",");
        FUNC_1(VAR_8, "\n\t\t{");
        VAR_11=FUNC_2(VAR_8, VAR_0, VAR_9->alarms, VAR_11);
        VAR_11=FUNC_2(VAR_8, VAR_1, VAR_9->charts, VAR_11);
        VAR_11=FUNC_2(VAR_8, VAR_2, VAR_9->contexts, VAR_11);
        VAR_11=FUNC_2(VAR_8, VAR_4, VAR_9->hosts, VAR_11);
        FUNC_2(VAR_8, VAR_3, VAR_9->families, VAR_11);
        VAR_11=0;
        FUNC_1(VAR_8, "\n\t\t}");
        VAR_10++;
    }
    if(FUNC_3(VAR_10)) FUNC_1(VAR_8, "\n\t");
    FUNC_1(VAR_8, "]\n}\n");
}
