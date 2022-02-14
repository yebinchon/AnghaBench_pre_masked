
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_3 (int *,int,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int *,int ) ;
 void* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline void FUNC_8(struct cpuacct_stat *VAR_5) {
    static procfile *VAR_6 = ((void*)0);

    if(FUNC_1(VAR_5->filename)) {
        VAR_6 = FUNC_5(VAR_6, VAR_5->filename, ((void*)0), VAR_2);
        if(FUNC_7(!VAR_6)) {
            VAR_5->updated = 0;
            VAR_3 = 1;
            return;
        }

        VAR_6 = FUNC_4(VAR_6);
        if(FUNC_7(!VAR_6)) {
            VAR_5->updated = 0;
            VAR_3 = 1;
            return;
        }

        unsigned long VAR_7 = FUNC_2(VAR_6);

        if(FUNC_7(VAR_7 < 3)) {
            FUNC_0("CGROUP: file '%s' should have 3+ lines.", VAR_5->filename);
            VAR_5->updated = 0;
            return;
        }

        VAR_5->user = FUNC_6(FUNC_3(VAR_6, 1, 1));
        VAR_5->system = FUNC_6(FUNC_3(VAR_6, 2, 1));

        VAR_5->updated = 1;

        if(FUNC_7(VAR_5->enabled == VAR_0 &&
                    (VAR_5->user || VAR_5->system || VAR_4 == VAR_1)))
            VAR_5->enabled = VAR_1;
    }
}
