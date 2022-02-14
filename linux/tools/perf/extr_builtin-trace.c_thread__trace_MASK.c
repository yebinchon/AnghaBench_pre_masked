
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_trace {int nr_events; } ;
struct thread {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 struct thread_trace* FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static struct thread_trace *FUNC_4(struct thread *VAR_1, FILE *VAR_2)
{
 struct thread_trace *VAR_3;

 if (VAR_1 == ((void*)0))
  goto fail;

 if (FUNC_1(VAR_1) == ((void*)0))
  FUNC_2(VAR_1, FUNC_3());

 if (FUNC_1(VAR_1) == ((void*)0))
  goto fail;

 VAR_3 = FUNC_1(VAR_1);
 ++VAR_3->nr_events;

 return VAR_3;
fail:
 FUNC_0(VAR_2, VAR_0,
        "WARNING: not enough memory, dropping samples!\n");
 return ((void*)0);
}
