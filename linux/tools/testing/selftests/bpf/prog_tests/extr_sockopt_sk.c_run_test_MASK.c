
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_load_attr {char* file; } ;
struct bpf_object {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct bpf_object*,int,char*) ;

__attribute__((used)) static void FUNC_5(int VAR_0)
{
 struct bpf_prog_load_attr VAR_1 = {
  .file = "./sockopt_sk.o",
 };
 struct bpf_object *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_1, &VAR_2, &VAR_3);
 if (FUNC_0(VAR_4))
  return;

 VAR_4 = FUNC_4(VAR_2, VAR_0, "cgroup/getsockopt");
 if (FUNC_0(VAR_4))
  goto close_bpf_object;

 VAR_4 = FUNC_4(VAR_2, VAR_0, "cgroup/setsockopt");
 if (FUNC_0(VAR_4))
  goto close_bpf_object;

 FUNC_0(FUNC_3());

close_bpf_object:
 FUNC_1(VAR_2);
}
