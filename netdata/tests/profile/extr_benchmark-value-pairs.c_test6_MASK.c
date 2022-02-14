
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; scalar_t__ name; } ;
typedef int ARL_BASE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;
 int * FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,char*,int *,int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int * VAR_2 ;

void FUNC_5() {
    static ARL_BASE *VAR_3 = ((void*)0);

    if(FUNC_4(!VAR_3)) {
        VAR_3 = FUNC_2("test6", VAR_0, 60);
        FUNC_3(VAR_3, "cache", ((void*)0), &VAR_2[0]);
        FUNC_3(VAR_3, "rss", ((void*)0), &VAR_2[1]);
        FUNC_3(VAR_3, "rss_huge", ((void*)0), &VAR_2[2]);
        FUNC_3(VAR_3, "mapped_file", ((void*)0), &VAR_2[3]);
        FUNC_3(VAR_3, "writeback", ((void*)0), &VAR_2[4]);
        FUNC_3(VAR_3, "dirty", ((void*)0), &VAR_2[5]);
        FUNC_3(VAR_3, "swap", ((void*)0), &VAR_2[6]);
        FUNC_3(VAR_3, "pgpgin", ((void*)0), &VAR_2[7]);
        FUNC_3(VAR_3, "pgpgout", ((void*)0), &VAR_2[8]);
        FUNC_3(VAR_3, "pgfault", ((void*)0), &VAR_2[9]);
        FUNC_3(VAR_3, "pgmajfault", ((void*)0), &VAR_2[10]);
    }

    FUNC_0(VAR_3);

    int VAR_4;
    for(VAR_4 = 0; VAR_1[VAR_4].name ; VAR_4++)
        if(FUNC_1(VAR_3, VAR_1[VAR_4].name, VAR_1[VAR_4].value)) break;
}
