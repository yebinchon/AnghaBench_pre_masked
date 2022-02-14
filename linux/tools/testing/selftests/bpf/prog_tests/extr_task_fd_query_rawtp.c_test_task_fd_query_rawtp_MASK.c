
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;
typedef int buf ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,char*,int,...) ;
 int VAR_2 ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (char const*,int ,struct bpf_object**,int*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int,int ,char*,int*,int*,int*,int *,int *) ;
 int VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 const char *VAR_4 = "./test_get_stack_rawtp.o";
 __u64 VAR_5, VAR_6;
 __u32 VAR_7, VAR_8, VAR_9;
 struct bpf_object *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 __u32 VAR_14 = 0;
 char VAR_15[256];

 VAR_12 = FUNC_2(VAR_4, VAR_1, &VAR_10, &VAR_13);
 if (FUNC_0(VAR_12, "prog_load raw tp", "err %d errno %d\n", VAR_12, VAR_3))
  return;

 VAR_11 = FUNC_3("sys_enter", VAR_13);
 if (FUNC_0(VAR_11 < 0, "raw_tp_open", "err %d errno %d\n", VAR_11, VAR_3))
  goto close_prog;


 VAR_7 = sizeof(VAR_15);
 VAR_12 = FUNC_4(FUNC_5(), VAR_11, 0, VAR_15, &VAR_7, &VAR_8,
    &VAR_9, &VAR_5, &VAR_6);
 if (FUNC_0(VAR_12 < 0, "bpf_task_fd_query", "err %d errno %d\n", VAR_12,
    VAR_3))
  goto close_prog;

 VAR_12 = VAR_9 == VAR_0 &&
       FUNC_6(VAR_15, "sys_enter") == 0;
 if (FUNC_0(!VAR_12, "check_results", "fd_type %d tp_name %s\n",
    VAR_9, VAR_15))
  goto close_prog;


 VAR_7 = 0;
 VAR_12 = FUNC_4(FUNC_5(), VAR_11, 0, VAR_15, &VAR_7, &VAR_8,
    &VAR_9, &VAR_5, &VAR_6);
 if (FUNC_0(VAR_12 < 0, "bpf_task_fd_query (len = 0)", "err %d errno %d\n",
    VAR_12, VAR_3))
  goto close_prog;
 VAR_12 = VAR_9 == VAR_0 &&
       VAR_7 == FUNC_7("sys_enter");
 if (FUNC_0(!VAR_12, "check_results", "fd_type %d len %u\n", VAR_9, VAR_7))
  goto close_prog;


 VAR_7 = sizeof(VAR_15);
 VAR_12 = FUNC_4(FUNC_5(), VAR_11, 0, 0, &VAR_7, &VAR_8,
    &VAR_9, &VAR_5, &VAR_6);
 if (FUNC_0(VAR_12 < 0, "bpf_task_fd_query (buf = 0)", "err %d errno %d\n",
    VAR_12, VAR_3))
  goto close_prog;
 VAR_12 = VAR_9 == VAR_0 &&
       VAR_7 == FUNC_7("sys_enter");
 if (FUNC_0(!VAR_12, "check_results", "fd_type %d len %u\n", VAR_9, VAR_7))
  goto close_prog;


 VAR_7 = 3;
 VAR_12 = FUNC_4(FUNC_5(), VAR_11, 0, VAR_15, &VAR_7, &VAR_8,
    &VAR_9, &VAR_5, &VAR_6);
 if (FUNC_0(VAR_12 >= 0 || VAR_3 != VAR_2, "bpf_task_fd_query (len = 3)",
    "err %d errno %d\n", VAR_12, VAR_3))
  goto close_prog;
 VAR_12 = VAR_9 == VAR_0 &&
       VAR_7 == FUNC_7("sys_enter") &&
       FUNC_6(VAR_15, "sy") == 0;
 if (FUNC_0(!VAR_12, "check_results", "fd_type %d len %u\n", VAR_9, VAR_7))
  goto close_prog;

close_prog:
 FUNC_1(VAR_10);
}
