
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsinfo {char* mntns_path; int need_setns; } ;
struct nscookie {int oldns; int newns; char* oldcwd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,char*) ;

void FUNC_6(struct nsinfo *VAR_3,
      struct nscookie *VAR_4)
{
 char VAR_5[VAR_2];
 int VAR_6 = -1;
 int VAR_7 = -1;
 char *VAR_8 = ((void*)0);

 if (VAR_4 == ((void*)0))
  return;

 VAR_4->oldns = -1;
 VAR_4->newns = -1;

 if (!VAR_3 || !VAR_3->need_setns)
  return;

 if (FUNC_5(VAR_5, VAR_2, "/proc/self/ns/mnt") >= VAR_2)
  return;

 VAR_8 = FUNC_2();
 if (!VAR_8)
  return;

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 if (VAR_6 < 0)
  goto errout;

 VAR_7 = FUNC_3(VAR_3->mntns_path, VAR_1);
 if (VAR_7 < 0)
  goto errout;

 if (FUNC_4(VAR_7, VAR_0) < 0)
  goto errout;

 VAR_4->oldcwd = VAR_8;
 VAR_4->oldns = VAR_6;
 VAR_4->newns = VAR_7;
 return;

errout:
 FUNC_1(VAR_8);
 if (VAR_6 > -1)
  FUNC_0(VAR_6);
 if (VAR_7 > -1)
  FUNC_0(VAR_7);
}
