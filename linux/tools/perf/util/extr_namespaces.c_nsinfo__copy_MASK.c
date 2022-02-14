
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsinfo {int refcnt; scalar_t__ mntns_path; int need_setns; int nstgid; int tgid; int pid; } ;


 struct nsinfo* FUNC_0 (int,int) ;
 int FUNC_1 (struct nsinfo*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

struct nsinfo *FUNC_4(struct nsinfo *VAR_0)
{
 struct nsinfo *VAR_1;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_1 = FUNC_0(1, sizeof(*VAR_1));
 if (VAR_1 != ((void*)0)) {
  VAR_1->pid = VAR_0->pid;
  VAR_1->tgid = VAR_0->tgid;
  VAR_1->nstgid = VAR_0->nstgid;
  VAR_1->need_setns = VAR_0->need_setns;
  if (VAR_0->mntns_path) {
   VAR_1->mntns_path = FUNC_3(VAR_0->mntns_path);
   if (!VAR_1->mntns_path) {
    FUNC_1(VAR_1);
    return ((void*)0);
   }
  }
  FUNC_2(&VAR_1->refcnt, 1);
 }

 return VAR_1;
}
