
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct lwan_thread {int * pipe_fd; } ;
typedef int event ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int*,int) ;

void FUNC_3(struct lwan_thread *VAR_0)
{
    uint64_t VAR_1 = 1;

    if (FUNC_0(FUNC_2(VAR_0->pipe_fd[1], &VAR_1, sizeof(VAR_1)) < 0))
        FUNC_1("write");
}
