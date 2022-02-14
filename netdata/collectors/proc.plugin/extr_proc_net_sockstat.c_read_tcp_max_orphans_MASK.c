
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long kernel_uint_t ;
typedef int RRDVAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,unsigned long long*) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,unsigned long long) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static kernel_uint_t FUNC_6(void) {
    static char *VAR_3 = ((void*)0);
    static RRDVAR *VAR_4 = ((void*)0);

    if(FUNC_5(!VAR_3)) {
        char VAR_5[VAR_0 + 1];
        FUNC_3(VAR_5, VAR_0, "%s/proc/sys/net/ipv4/tcp_max_orphans", VAR_2);
        VAR_3 = FUNC_4(VAR_5);
    }

    unsigned long long VAR_6 = 0;
    if(FUNC_0(VAR_3, &VAR_6) == 0) {

        if(FUNC_5(!VAR_4))
            VAR_4 = FUNC_1(VAR_1, "tcp_max_orphans");

        FUNC_2(VAR_1, VAR_4, VAR_6);
        return VAR_6;
    }

    return 0;
}
