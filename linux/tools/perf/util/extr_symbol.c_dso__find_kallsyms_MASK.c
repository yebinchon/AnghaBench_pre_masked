
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct map {int dummy; } ;
struct dso {int build_id; int has_build_id; } ;
typedef int path ;
typedef int host_build_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_4 ;
 int FUNC_2 (struct dso*,int *) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (struct map*,char*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,int ,int ,char*) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,int *,int) ;
 int FUNC_9 (char*,struct map*) ;

__attribute__((used)) static char *FUNC_10(struct dso *VAR_5, struct map *VAR_6)
{
 u8 VAR_7[VAR_0];
 char VAR_8[VAR_3];
 bool VAR_9 = 0;
 char VAR_10[VAR_2];

 if (!VAR_5->has_build_id) {




  goto proc_kallsyms;
 }

 if (FUNC_8("/sys/kernel/notes", VAR_7,
     sizeof(VAR_7)) == 0)
  VAR_9 = FUNC_2(VAR_5, VAR_7);


 if (VAR_9) {







  if (FUNC_3("/proc/kcore") &&
      !FUNC_9("/proc/kallsyms", VAR_6))
   goto proc_kallsyms;
 }

 FUNC_0(VAR_5->build_id, sizeof(VAR_5->build_id), VAR_8);


 FUNC_6(VAR_10, sizeof(VAR_10), "%s/%s/%s",
    VAR_4, VAR_1, VAR_8);

 if (!FUNC_4(VAR_6, VAR_10, sizeof(VAR_10)))
  return FUNC_7(VAR_10);


 if (VAR_9) {
proc_kallsyms:
  return FUNC_7("/proc/kallsyms");
 }


 if (!FUNC_1(VAR_8, VAR_10, sizeof(VAR_10))) {
  FUNC_5("No kallsyms or vmlinux with build-id %s was found\n",
         VAR_8);
  return ((void*)0);
 }

 return FUNC_7(VAR_10);
}
