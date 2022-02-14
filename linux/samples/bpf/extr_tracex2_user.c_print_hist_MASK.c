
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {char* comm; scalar_t__ uid_gid; scalar_t__ pid_tgid; } ;
struct hist_key {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct hist_key*,struct hist_key*) ;
 scalar_t__ FUNC_1 (struct task*,struct hist_key*,int ) ;
 int FUNC_2 (struct task*,struct hist_key*,int ) ;
 int FUNC_3 (int,struct task*) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_1)
{
 struct hist_key VAR_2 = {}, VAR_3;
 static struct task VAR_4[1024];
 int VAR_5 = 0;
 int VAR_6;

 while (FUNC_0(VAR_1, &VAR_2, &VAR_3) == 0) {
  int VAR_7 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   if (FUNC_1(&VAR_4[VAR_6], &VAR_3, VAR_0) == 0)
    VAR_7 = 1;
  if (!VAR_7)
   FUNC_2(&VAR_4[VAR_5++], &VAR_3, VAR_0);
  VAR_2 = VAR_3;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_4("\npid %d cmd %s uid %d\n",
         (__u32) VAR_4[VAR_6].pid_tgid,
         VAR_4[VAR_6].comm,
         (__u32) VAR_4[VAR_6].uid_gid);
  FUNC_3(VAR_1, &VAR_4[VAR_6]);
 }

}
