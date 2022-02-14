
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(void) {
    const char *VAR_3 = FUNC_0("UPSTART_JOB");

    if (!VAR_3) {
        FUNC_2(VAR_1,
                "upstart supervision requested, but UPSTART_JOB not found");
        return 0;
    }

    FUNC_2(VAR_0, "supervised by upstart, will stop to signal readiness");
    FUNC_1(VAR_2);
    FUNC_3("UPSTART_JOB");
    return 1;
}
