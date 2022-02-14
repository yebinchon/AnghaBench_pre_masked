
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bpf_program {TYPE_1__ instances; int section_name; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*) ;

int FUNC_4(struct bpf_program *VAR_2, const char *VAR_3,
    int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_2 == ((void*)0)) {
  FUNC_2("invalid program pointer\n");
  return -VAR_0;
 }

 if (VAR_4 < 0 || VAR_4 >= VAR_2->instances.nr) {
  FUNC_2("invalid prog instance %d of prog %s (max %d)\n",
      VAR_4, VAR_2->section_name, VAR_2->instances.nr);
  return -VAR_0;
 }

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 != 0)
  return -VAR_1;
 FUNC_1("unpinned program '%s'\n", VAR_3);

 return 0;
}
