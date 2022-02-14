
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_0; int member_1; } ;
typedef int filename ;
typedef int buf ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int ,struct rlimit*) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int FUNC_8 (int,char*,int ) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*,char*,int,int,int,int ,int ,char*,int) ;

int FUNC_11(int VAR_7, char **VAR_8)
{
 struct rlimit VAR_9 = {1024*1024, VAR_5};
 extern char VAR_10;
 char VAR_11[256], VAR_12[256];
 __u64 VAR_13;

 FUNC_7(VAR_11, sizeof(VAR_11), "%s_kern.o", VAR_8[0]);
 if (FUNC_6(VAR_4, &VAR_9)) {
  FUNC_4("setrlimit(RLIMIT_MEMLOCK)");
  return 1;
 }

 if (FUNC_3()) {
  FUNC_5("failed to process /proc/kallsyms\n");
  return 1;
 }

 if (FUNC_2(VAR_11)) {
  FUNC_5("%s", VAR_6);
  return 1;
 }


 FUNC_0(FUNC_8(0, "blk_mq_start_request",
        VAR_0));
 FUNC_0(FUNC_8(1, "blk_account_io_completion",
        VAR_1));


 FUNC_0(FUNC_10("kprobe", "bpf_check", 0x0, 0x0,
          0, VAR_0,
          VAR_1,
          VAR_12, sizeof(VAR_12)));


 FUNC_0(FUNC_10("kprobe", "bpf_check", 0x5, 0x0,
          0, VAR_0,
          VAR_1,
          VAR_12, sizeof(VAR_12)));

 FUNC_0(FUNC_10("kprobe", "bpf_check", 0x0, 0x0,
          1, VAR_0,
          VAR_1,
          VAR_12, sizeof(VAR_12)));
 FUNC_0(FUNC_10("kprobe", ((void*)0), 0x0,
          FUNC_1("bpf_check"), 0,
          VAR_0,
          VAR_1,
          VAR_12, sizeof(VAR_12)));
 FUNC_0(FUNC_10("kprobe", ((void*)0), 0x0,
          FUNC_1("bpf_check"), 0,
          VAR_0,
          VAR_1,
          ((void*)0), 0));
 FUNC_0(FUNC_10("kprobe", ((void*)0), 0x0,
          FUNC_1("bpf_check"), 1,
          VAR_0,
          VAR_1,
          VAR_12, sizeof(VAR_12)));
 FUNC_0(FUNC_10("kprobe", ((void*)0), 0x0,
          FUNC_1("bpf_check"), 1,
          VAR_0,
          VAR_1,
          0, 0));
 VAR_13 = (__u64)FUNC_11 - (__u64)&VAR_10;
 FUNC_0(FUNC_10("uprobe", (char *)VAR_8[0],
          VAR_13, 0x0, 0,
          VAR_2,
          VAR_3,
          VAR_12, sizeof(VAR_12)));
 FUNC_0(FUNC_10("uprobe", (char *)VAR_8[0],
          VAR_13, 0x0, 1,
          VAR_2,
          VAR_3,
          VAR_12, sizeof(VAR_12)));


 FUNC_0(FUNC_9((char *)VAR_8[0], VAR_13,
        0));
 FUNC_0(FUNC_9((char *)VAR_8[0], VAR_13,
        1));

 return 0;
}
