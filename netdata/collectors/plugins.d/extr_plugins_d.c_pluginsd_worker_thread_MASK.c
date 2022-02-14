
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plugind {char* pid; int enabled; int fullfilename; int cmd; scalar_t__ obsolete; } ;
typedef int FILE ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int ,char**) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,void*) ;
 size_t FUNC_8 (int ,struct plugind*,int *,int ) ;
 int VAR_2 ;
 int FUNC_9 (struct plugind*,int) ;
 int FUNC_10 (struct plugind*) ;
 scalar_t__ FUNC_11 (int) ;

void *FUNC_12(void *VAR_3) {
    FUNC_7(VAR_2, VAR_3);

    struct plugind *VAR_4 = (struct plugind *)VAR_3;

    VAR_4->obsolete = 0;
    size_t VAR_5 = 0;

    while(!VAR_1) {
        FILE *VAR_6 = FUNC_5(VAR_4->cmd, &VAR_4->pid);
        if(FUNC_11(!VAR_6)) {
            FUNC_0("Cannot popen(\"%s\", \"r\").", VAR_4->cmd);
            break;
        }

        FUNC_1("connected to '%s' running on pid %d", VAR_4->fullfilename, VAR_4->pid);
        VAR_5 = FUNC_8(VAR_0, VAR_4, VAR_6, 0);
        FUNC_0("'%s' (pid %d) disconnected after %zu successful data collections (ENDs).", VAR_4->fullfilename, VAR_4->pid, VAR_5);
        FUNC_2(VAR_4->pid);

        int VAR_7 = FUNC_4(VAR_6, VAR_4->pid);

        if (FUNC_3(VAR_7 == 0))
            FUNC_10(VAR_4);
        else
            FUNC_9(VAR_4, VAR_7);

        VAR_4->pid = 0;
        if(FUNC_11(!VAR_4->enabled)) break;
    }

    FUNC_6(1);
    return ((void*)0);
}
