
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct timespec {int tv_sec; } ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct timespec*) ;
 int * FUNC_1 (int *,char*,int *,int,int,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(int VAR_4, usec_t VAR_5) {
    (void)VAR_5;
    struct timespec VAR_6;

    FUNC_0(VAR_0, &VAR_6);



    static RRDSET *VAR_7 = ((void*)0);
    static RRDDIM *VAR_8 = ((void*)0);

    if(FUNC_6(!VAR_7)) {
        VAR_7 = FUNC_3(
                "system",
                "uptime",
                ((void*)0),
                "uptime",
                ((void*)0),
                "System Uptime",
                "seconds",
                "freebsd.plugin",
                "uptime",
                VAR_1,
                VAR_4,
                VAR_2
        );

        VAR_8 = FUNC_1(VAR_7, "uptime", ((void*)0), 1, 1, VAR_3);
    }
    else FUNC_5(VAR_7);

    FUNC_2(VAR_7, VAR_8, VAR_6.tv_sec);
    FUNC_4(VAR_7);

    return 0;
}
