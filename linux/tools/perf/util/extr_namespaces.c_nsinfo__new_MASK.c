
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsinfo {int need_setns; int refcnt; scalar_t__ nstgid; scalar_t__ tgid; scalar_t__ pid; } ;
typedef scalar_t__ pid_t ;


 struct nsinfo* FUNC_0 (int,int) ;
 int FUNC_1 (struct nsinfo*) ;
 int FUNC_2 (int *,int) ;

struct nsinfo *FUNC_3(pid_t VAR_0)
{
 struct nsinfo *VAR_1;

 if (VAR_0 == 0)
  return ((void*)0);

 VAR_1 = FUNC_0(1, sizeof(*VAR_1));
 if (VAR_1 != ((void*)0)) {
  VAR_1->pid = VAR_0;
  VAR_1->tgid = VAR_0;
  VAR_1->nstgid = VAR_0;
  VAR_1->need_setns = 0;




  if (FUNC_1(VAR_1) == -1)
   VAR_1->need_setns = 0;

  FUNC_2(&VAR_1->refcnt, 1);
 }

 return VAR_1;
}
