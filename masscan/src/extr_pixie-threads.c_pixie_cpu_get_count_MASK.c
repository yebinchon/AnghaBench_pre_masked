
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int ncpu ;
typedef int mask ;
typedef int cpu_set_t ;
typedef int DWORD_PTR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 size_t FUNC_3 (int ,unsigned long*,unsigned long*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int*,int,int*,size_t*,int *,int ) ;

unsigned
FUNC_11(void)
{
    {
        pid_t VAR_5;
        cpu_set_t VAR_6;
        int VAR_7;


        VAR_5 = FUNC_4();


        VAR_7 = FUNC_8(VAR_5, sizeof(VAR_6), &VAR_6);
        if (VAR_7) {
            FUNC_6("sched_getaffinity");
            return 1;
        } else {

            return 1;



        }
    }
}
