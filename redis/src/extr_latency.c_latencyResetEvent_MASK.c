
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_2__ {int latency_events; } ;


 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(char *VAR_1) {
    dictIterator *VAR_2;
    dictEntry *VAR_3;
    int VAR_4 = 0;

    VAR_2 = FUNC_2(VAR_0.latency_events);
    while((VAR_3 = FUNC_3(VAR_2)) != ((void*)0)) {
        char *VAR_5 = FUNC_1(VAR_3);

        if (VAR_1 == ((void*)0) || FUNC_5(VAR_5,VAR_1) == 0) {
            FUNC_0(VAR_0.latency_events, VAR_5);
            VAR_4++;
        }
    }
    FUNC_4(VAR_2);
    return VAR_4;
}
