
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_pid_file ;
typedef int pid_t ;
typedef int buffer ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,char*,long) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char*,unsigned int*) ;
 int FUNC_9 (char*,int,char*,char const*) ;
 int * VAR_1 ;
 int FUNC_10 (char*,char*,...) ;

__attribute__((used)) static void FUNC_11(const char *VAR_2) {
    FILE *VAR_3;
    if (FUNC_0(VAR_2, VAR_0) == 0) {
        if ((VAR_3 = FUNC_3(VAR_2, "r")) != ((void*)0)) {
            char VAR_4[1024];
            if (FUNC_2(VAR_4, sizeof(VAR_4), VAR_3) != ((void*)0)) {
                unsigned int VAR_5;
                if (FUNC_8(VAR_4, &VAR_5) && FUNC_6((pid_t)VAR_5, 0) == 0) {
                    FUNC_4(VAR_1, "WARNING: The pid file contained the following (running) pid: %u\n", VAR_5);
                }
            }
            FUNC_1(VAR_3);
        }
    }






    char VAR_6[1024];
    FUNC_9(VAR_6, sizeof(VAR_6), "%s.tmp", VAR_2);

    if ((VAR_3 = FUNC_3(VAR_6, "w")) == ((void*)0)) {
        FUNC_10("Could not open the pid file %s for writing", VAR_6);
        return;
    }

    FUNC_4(VAR_3,"%ld\n", (long)FUNC_5());
    if (FUNC_1(VAR_3) == -1) {
        FUNC_10("Could not close the pid file %s", VAR_6);
    }

    if (FUNC_7(VAR_6, VAR_2) != 0) {
        FUNC_10("Could not rename the pid file from %s to %s",
                VAR_6, VAR_2);
    }
}
