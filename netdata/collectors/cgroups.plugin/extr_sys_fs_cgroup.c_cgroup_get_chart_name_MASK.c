
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int pending_renames; int chart_id; int hash_chart; int chart_title; scalar_t__ enabled; int id; } ;
typedef int pid_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (char*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ,char*,int ,int ) ;
 char* FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static inline void FUNC_13(struct cgroup *VAR_3) {
    FUNC_2(VAR_1, "looking for the name of cgroup '%s' with chart id '%s' and title '%s'", VAR_3->id, VAR_3->chart_id, VAR_3->chart_title);

    pid_t VAR_4;
    char VAR_5[VAR_0 + 1];

    FUNC_10(VAR_5, VAR_0, "exec %s '%s'", VAR_2, VAR_3->chart_id);

    FUNC_2(VAR_1, "executing command \"%s\" for cgroup '%s'", VAR_5, VAR_3->chart_id);
    FILE *VAR_6 = FUNC_8(VAR_5, &VAR_4);
    if(VAR_6) {

        char VAR_7[VAR_0 + 1];
        char *VAR_8 = FUNC_4(VAR_7, VAR_0, VAR_6);

        int VAR_9 = FUNC_7(VAR_6, VAR_4);


        if(VAR_8 && *VAR_8 && *VAR_8 != '\n') {
            FUNC_2(VAR_1, "cgroup '%s' should be renamed to '%s'", VAR_3->chart_id, VAR_8);

            VAR_8 = FUNC_11(VAR_8);
            if (VAR_8) {
                if(FUNC_6(VAR_9==0))
                    VAR_3->pending_renames = 0;
                else if (FUNC_12(VAR_9==3)) {
                    FUNC_2(VAR_1, "cgroup '%s' disabled based due to rename command output", VAR_3->chart_id);
                    VAR_3->enabled = 0;
                }

                if(FUNC_6(VAR_3->pending_renames < 2)) {
                    FUNC_5(VAR_3->chart_title);
                    VAR_3->chart_title = FUNC_1(VAR_8);

                    FUNC_5(VAR_3->chart_id);
                    VAR_3->chart_id = FUNC_0(VAR_8);
                    VAR_3->hash_chart = FUNC_9(VAR_3->chart_id);
                }
            }
        }
    }
    else
        FUNC_3("CGROUP: cannot popen(\"%s\", \"r\").", VAR_5);
}
