
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct cpuacct_stat {int updated; scalar_t__ enabled; void* system; void* user; int filename; } ;
typedef int procfile ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_2 (int *) ;
 char* FUNC_3 (int *,unsigned long,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static inline void FUNC_10(struct cpuacct_stat *VAR_7) {
    static procfile *VAR_8 = ((void*)0);

    if(FUNC_1(VAR_7->filename)) {
        VAR_8 = FUNC_5(VAR_8, VAR_7->filename, ((void*)0), VAR_2);
        if(FUNC_9(!VAR_8)) {
            VAR_7->updated = 0;
            VAR_3 = 1;
            return;
        }

        VAR_8 = FUNC_4(VAR_8);
        if(FUNC_9(!VAR_8)) {
            VAR_7->updated = 0;
            VAR_3 = 1;
            return;
        }

        unsigned long VAR_9, VAR_10 = FUNC_2(VAR_8);

        if(FUNC_9(VAR_10 < 1)) {
            FUNC_0("CGROUP: file '%s' should have 1+ lines.", VAR_7->filename);
            VAR_7->updated = 0;
            return;
        }

        for(VAR_9 = 0; VAR_9 < VAR_10 ; VAR_9++) {
            char *VAR_11 = FUNC_3(VAR_8, VAR_9, 0);
            uint32_t VAR_12 = FUNC_6(VAR_11);

            if(FUNC_9(VAR_12 == VAR_6 && !FUNC_8(VAR_11, "user")))
                VAR_7->user = FUNC_7(FUNC_3(VAR_8, VAR_9, 1));

            else if(FUNC_9(VAR_12 == VAR_5 && !FUNC_8(VAR_11, "system")))
                VAR_7->system = FUNC_7(FUNC_3(VAR_8, VAR_9, 1));
        }

        VAR_7->updated = 1;

        if(FUNC_9(VAR_7->enabled == VAR_0 &&
                    (VAR_7->user || VAR_7->system || VAR_4 == VAR_1)))
            VAR_7->enabled = VAR_1;
    }
}
