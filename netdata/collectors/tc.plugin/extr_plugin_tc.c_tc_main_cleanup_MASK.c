
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdata_static_thread {int enabled; } ;
typedef int (* siginfo_t ) (char*,scalar_t__) ;
typedef int id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int (*) (char*,scalar_t__),int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_5) {
    struct netdata_static_thread *VAR_6 = (struct netdata_static_thread *)VAR_5;
    VAR_6->enabled = VAR_1;

    FUNC_0("cleaning up...");

    if(VAR_4) {
        FUNC_0("TC: killing with SIGTERM tc-qos-helper process %d", VAR_4);
        if(FUNC_1(VAR_4) != -1) {
            siginfo_t VAR_7;

            VAR_7("TC: waiting for tc plugin child process pid %d to exit...", VAR_4);
            FUNC_2(VAR_2, (id_t) VAR_4, VAR_7, VAR_3);
        }

        VAR_4 = 0;
    }

    VAR_6->enabled = VAR_0;
}
