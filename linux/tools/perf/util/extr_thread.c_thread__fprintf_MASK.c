
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int tid; int mg; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,int,char*) ;
 size_t FUNC_1 (int ,int *) ;
 char* FUNC_2 (struct thread*) ;

size_t FUNC_3(struct thread *VAR_0, FILE *VAR_1)
{
 return FUNC_0(VAR_1, "Thread %d %s\n", VAR_0->tid, FUNC_2(VAR_0)) +
        FUNC_1(VAR_0->mg, VAR_1);
}
