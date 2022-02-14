
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct base {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct base*) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct base*,scalar_t__) ;
 struct base* FUNC_2 (struct base*,char*,int ,int *,int ) ;
 scalar_t__* VAR_12 ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_13 ;

void FUNC_4() {

    static struct base *VAR_14 = ((void*)0);

    if(FUNC_3(!VAR_14)) {
        VAR_14 = FUNC_2(VAR_14, "cache", VAR_0, &VAR_13[0], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "rss", VAR_3, &VAR_13[1], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "rss_huge", VAR_4, &VAR_13[2], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "mapped_file", VAR_5, &VAR_13[3], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "writeback", VAR_6, &VAR_13[4], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "dirty", VAR_7, &VAR_13[5], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "swap", VAR_8, &VAR_13[6], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "pgpgin", VAR_9, &VAR_13[7], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "pgpgout", VAR_10, &VAR_13[8], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "pgfault", VAR_1, &VAR_13[9], VAR_11);
        VAR_14 = FUNC_2(VAR_14, "pgmajfault", VAR_2, &VAR_13[10], VAR_11);
    }

    FUNC_0(VAR_14);

    int VAR_15;
    for(VAR_15 = 0; VAR_12[VAR_15] ; VAR_15++) {
        if(FUNC_1(VAR_14, VAR_12[VAR_15]))
            break;
    }
}
