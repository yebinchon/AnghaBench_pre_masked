
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; int* fds; } ;
struct bpf_program {int section_name; TYPE_1__ instances; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,...) ;

int FUNC_1(const struct bpf_program *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_3 >= VAR_2->instances.nr || VAR_3 < 0) {
  FUNC_0("Can't get the %dth fd from program %s: only %d instances\n",
      VAR_3, VAR_2->section_name, VAR_2->instances.nr);
  return -VAR_0;
 }

 VAR_4 = VAR_2->instances.fds[VAR_3];
 if (VAR_4 < 0) {
  FUNC_0("%dth instance of program '%s' is invalid\n",
      VAR_3, VAR_2->section_name);
  return -VAR_1;
 }

 return VAR_4;
}
