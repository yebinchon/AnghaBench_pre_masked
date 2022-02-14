
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; int * fds; } ;
struct bpf_program {TYPE_1__ instances; int section_name; } ;
typedef int errmsg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*) ;
 int VAR_2 ;
 char* FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(struct bpf_program *VAR_3, const char *VAR_4,
         int VAR_5)
{
 char *VAR_6, VAR_7[VAR_1];
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8)
  return VAR_8;

 if (VAR_3 == ((void*)0)) {
  FUNC_4("invalid program pointer\n");
  return -VAR_0;
 }

 if (VAR_5 < 0 || VAR_5 >= VAR_3->instances.nr) {
  FUNC_4("invalid prog instance %d of prog %s (max %d)\n",
      VAR_5, VAR_3->section_name, VAR_3->instances.nr);
  return -VAR_0;
 }

 if (FUNC_0(VAR_3->instances.fds[VAR_5], VAR_4)) {
  VAR_6 = FUNC_2(VAR_2, VAR_7, sizeof(VAR_7));
  FUNC_4("failed to pin program: %s\n", VAR_6);
  return -VAR_2;
 }
 FUNC_3("pinned program '%s'\n", VAR_4);

 return 0;
}
