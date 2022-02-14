
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_ino; } ;
struct nsinfo {int pid; int need_setns; char* mntns_path; void* nstgid; void* tgid; } ;
typedef void* pid_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (char*,int,char*,...) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (char*,char) ;
 int * FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (int ,int *,int) ;

int FUNC_10(struct nsinfo *VAR_1)
{
 char VAR_2[VAR_0];
 char VAR_3[VAR_0];
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 struct stat VAR_6;
 struct stat VAR_7;
 FILE *VAR_8 = ((void*)0);
 size_t VAR_9 = 0;
 int VAR_10 = -1;

 if (FUNC_5(VAR_2, VAR_0, "/proc/self/ns/mnt") >= VAR_0)
  return VAR_10;

 if (FUNC_0(&VAR_4, "/proc/%d/ns/mnt", VAR_1->pid) == -1)
  return VAR_10;

 if (FUNC_6(VAR_2, &VAR_6) < 0)
  goto out;

 if (FUNC_6(VAR_4, &VAR_7) < 0)
  goto out;




 if (VAR_6.st_ino != VAR_7.st_ino) {
  VAR_1->need_setns = 1;
  VAR_1->mntns_path = VAR_4;
  VAR_4 = ((void*)0);
 }




 if (FUNC_5(VAR_3, VAR_0, "/proc/%d/status", VAR_1->pid) >= VAR_0)
  goto out;

 VAR_8 = FUNC_2(VAR_3, "r");
 if (VAR_8 == ((void*)0))
  goto out;

 while (FUNC_4(&VAR_5, &VAR_9, VAR_8) != -1) {

  if (FUNC_8(VAR_5, "Tgid:") != ((void*)0)) {
   VAR_1->tgid = (pid_t)FUNC_9(FUNC_7(VAR_5, '\t'),
           ((void*)0), 10);
   VAR_1->nstgid = VAR_1->tgid;
  }

  if (FUNC_8(VAR_5, "NStgid:") != ((void*)0)) {
   VAR_1->nstgid = (pid_t)FUNC_9(FUNC_7(VAR_5, '\t'),
           ((void*)0), 10);
   break;
  }
 }
 VAR_10 = 0;

out:
 if (VAR_8 != ((void*)0))
  (void) FUNC_1(VAR_8);
 FUNC_3(VAR_5);
 FUNC_3(VAR_4);
 return VAR_10;
}
