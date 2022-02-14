
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cg_kill_log_func_t ;
typedef int Set ;
typedef int CGroupFlags ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*,int,int ,int *,int ,void*,char*) ;
 int FUNC_1 (char const*) ;

int FUNC_2(
                const char *VAR_1,
                const char *VAR_2,
                int VAR_3,
                CGroupFlags VAR_4,
                Set *VAR_5,
                cg_kill_log_func_t VAR_6,
                void *VAR_7) {
        int VAR_8;

        VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, "cgroup.procs");
        if (VAR_8 < 0 || VAR_3 != VAR_0)
                return VAR_8;




        VAR_8 = FUNC_1(VAR_1);
        if (VAR_8 <= 0)
                return VAR_8;

        return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, "cgroup.threads");
}
