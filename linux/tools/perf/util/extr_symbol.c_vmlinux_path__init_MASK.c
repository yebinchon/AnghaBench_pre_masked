
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct utsname {char* release; } ;
struct perf_env {char* os_release; } ;
typedef int bf ;
struct TYPE_2__ {scalar_t__* symfs; } ;


 unsigned int FUNC_0 (char**) ;
 int VAR_0 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_3 (struct utsname*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 () ;
 char** VAR_3 ;
 char** VAR_4 ;

__attribute__((used)) static int FUNC_6(struct perf_env *VAR_5)
{
 struct utsname VAR_6;
 char VAR_7[VAR_0];
 char *VAR_8;
 unsigned int VAR_9;

 VAR_2 = FUNC_1(sizeof(char *) * (FUNC_0(VAR_3) +
         FUNC_0(VAR_4)));
 if (VAR_2 == ((void*)0))
  return -1;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++)
  if (FUNC_4(VAR_3[VAR_9]) < 0)
   goto out_fail;


 if (VAR_1.symfs[0] != 0)
  return 0;

 if (VAR_5) {
  VAR_8 = VAR_5->os_release;
 } else {
  if (FUNC_3(&VAR_6) < 0)
   goto out_fail;

  VAR_8 = VAR_6.release;
 }

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  FUNC_2(VAR_7, sizeof(VAR_7), VAR_4[VAR_9], VAR_8);
  if (FUNC_4(VAR_7) < 0)
   goto out_fail;
 }

 return 0;

out_fail:
 FUNC_5();
 return -1;
}
