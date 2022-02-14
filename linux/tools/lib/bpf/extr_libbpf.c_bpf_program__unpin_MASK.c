
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bpf_program {TYPE_1__ instances; int section_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bpf_program*,char const*,int) ;
 int FUNC_1 (char const*) ;
 int VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,int,char*,char const*,int) ;

int FUNC_5(struct bpf_program *VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_4 == ((void*)0)) {
  FUNC_2("invalid program pointer\n");
  return -VAR_0;
 }

 if (VAR_4->instances.nr <= 0) {
  FUNC_2("no instances of prog %s to pin\n",
      VAR_4->section_name);
  return -VAR_0;
 }

 if (VAR_4->instances.nr == 1) {

  return FUNC_0(VAR_4, VAR_5, 0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->instances.nr; VAR_6++) {
  char VAR_8[VAR_2];
  int VAR_9;

  VAR_9 = FUNC_4(VAR_8, VAR_2, "%s/%d", VAR_5, VAR_6);
  if (VAR_9 < 0)
   return -VAR_0;
  else if (VAR_9 >= VAR_2)
   return -VAR_1;

  VAR_7 = FUNC_0(VAR_4, VAR_8, VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  return -VAR_3;

 return 0;
}
