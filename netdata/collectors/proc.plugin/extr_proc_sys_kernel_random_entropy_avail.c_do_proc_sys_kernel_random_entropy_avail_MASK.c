
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int procfile ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,char*) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int ,char*,int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int *,int,int,int ) ;
 int FUNC_5 (int *,int *,unsigned long long) ;
 int * FUNC_6 (char*,char*,int *,char*,int *,char*,char*,int ,char*,int ,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,char*,int ,char*) ;
 unsigned long long FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(int VAR_7, usec_t VAR_8) {
    (void)VAR_8;

    static procfile *VAR_9 = ((void*)0);

    if(FUNC_11(!VAR_9)) {
        char VAR_10[VAR_0 + 1];
        FUNC_9(VAR_10, VAR_0, "%s%s", VAR_6, "/proc/sys/kernel/random/entropy_avail");
        VAR_9 = FUNC_2(FUNC_0("plugin:proc:/proc/sys/kernel/random/entropy_avail", "filename to monitor", VAR_10), "", VAR_3);
        if(FUNC_11(!VAR_9)) return 1;
    }

    VAR_9 = FUNC_3(VAR_9);
    if(FUNC_11(!VAR_9)) return 0;

    unsigned long long VAR_11 = FUNC_10(FUNC_1(VAR_9, 0, 0));

    static RRDSET *VAR_12 = ((void*)0);
    static RRDDIM *VAR_13 = ((void*)0);

    if(FUNC_11(!VAR_12)) {
        VAR_12 = FUNC_6(
                "system"
                , "entropy"
                , ((void*)0)
                , "entropy"
                , ((void*)0)
                , "Available Entropy"
                , "entropy"
                , VAR_2
                , "/proc/sys/kernel/random/entropy_avail"
                , VAR_1
                , VAR_7
                , VAR_4
        );

        VAR_13 = FUNC_4(VAR_12, "entropy", ((void*)0), 1, 1, VAR_5);
    }
    else FUNC_8(VAR_12);

    FUNC_5(VAR_12, VAR_13, VAR_11);
    FUNC_7(VAR_12);

    return 0;
}
