
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int host; } ;
struct perf_session {TYPE_1__ machines; } ;


 struct thread* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (struct thread*,char*,int ) ;
 scalar_t__ FUNC_4 (struct thread*,int ,int *) ;

int FUNC_5(struct perf_session *VAR_0)
{
 struct thread *VAR_1;
 int VAR_2 = 0;

 VAR_1 = FUNC_0(&VAR_0->machines.host, 0, 0);
 if (VAR_1 == ((void*)0) || FUNC_3(VAR_1, "swapper", 0)) {
  FUNC_1("problem inserting idle task.\n");
  VAR_2 = -1;
 }

 if (VAR_1 == ((void*)0) || FUNC_4(VAR_1, 0, ((void*)0))) {
  FUNC_1("problem inserting idle task.\n");
  VAR_2 = -1;
 }


 FUNC_2(VAR_1);
 return VAR_2;
}
