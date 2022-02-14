
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RRDVAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,unsigned long long) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 char* FUNC_4 (char*) ;
 unsigned long long FUNC_5 (char*,char**,int) ;
 unsigned long long FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(void) {
    static char *VAR_4 = ((void*)0);
    static RRDVAR *VAR_5 = ((void*)0),
                  *VAR_6 = ((void*)0),
                  *VAR_7 = ((void*)0);

    if(FUNC_7(!VAR_5)) {
        VAR_5 = FUNC_1(VAR_2, "tcp_mem_low");
        VAR_6 = FUNC_1(VAR_2, "tcp_mem_pressure");
        VAR_7 = FUNC_1(VAR_2, "tcp_mem_high");
    }

    if(FUNC_7(!VAR_4)) {
        char VAR_8[VAR_0 + 1];
        FUNC_3(VAR_8, VAR_0, "%s/proc/sys/net/ipv4/tcp_mem", VAR_3);
        VAR_4 = FUNC_4(VAR_8);
    }

    char VAR_9[200 + 1], *VAR_10, *VAR_11;
    if(FUNC_0(VAR_4, VAR_9, 200) != 0) return 1;
    VAR_9[200] = '\0';

    unsigned long long VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;

    VAR_10 = VAR_9;
    VAR_12 = FUNC_5(VAR_10, &VAR_11, 10);

    VAR_10 = VAR_11;
    VAR_13 = FUNC_5(VAR_10, &VAR_11, 10);

    VAR_10 = VAR_11;
    VAR_14 = FUNC_5(VAR_10, &VAR_11, 10);



    FUNC_2(VAR_2, VAR_5, VAR_12 * FUNC_6(VAR_1) / 1024.0);
    FUNC_2(VAR_2, VAR_6, VAR_13 * FUNC_6(VAR_1) / 1024.0);
    FUNC_2(VAR_2, VAR_7, VAR_14 * FUNC_6(VAR_1) / 1024.0);

    return 0;
}
