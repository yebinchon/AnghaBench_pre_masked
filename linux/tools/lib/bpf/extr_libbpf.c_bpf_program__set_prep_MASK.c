
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; int* fds; } ;
struct bpf_program {scalar_t__ preprocessor; TYPE_1__ instances; } ;
typedef scalar_t__ bpf_program_prep_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct bpf_program *VAR_2, int VAR_3,
     bpf_program_prep_t VAR_4)
{
 int *VAR_5;

 if (VAR_3 <= 0 || !VAR_4)
  return -VAR_0;

 if (VAR_2->instances.nr > 0 || VAR_2->instances.fds) {
  FUNC_2("Can't set pre-processor after loading\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_0(sizeof(int) * VAR_3);
 if (!VAR_5) {
  FUNC_2("alloc memory failed for fds\n");
  return -VAR_1;
 }


 FUNC_1(VAR_5, -1, sizeof(int) * VAR_3);

 VAR_2->instances.nr = VAR_3;
 VAR_2->instances.fds = VAR_5;
 VAR_2->preprocessor = VAR_4;
 return 0;
}
