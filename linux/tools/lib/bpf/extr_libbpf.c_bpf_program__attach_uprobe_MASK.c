
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;
struct bpf_link {int dummy; } ;
typedef int pid_t ;
typedef int errmsg ;


 struct bpf_link* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bpf_link*) ;
 int FUNC_2 (struct bpf_link*) ;
 int VAR_0 ;
 struct bpf_link* FUNC_3 (struct bpf_program*,int) ;
 int FUNC_4 (struct bpf_program*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int,int,char const*,size_t,int ) ;
 int FUNC_8 (char*,int ,char*,char const*,size_t,int ) ;

struct bpf_link *FUNC_9(struct bpf_program *VAR_1,
         bool VAR_2, pid_t VAR_3,
         const char *VAR_4,
         size_t VAR_5)
{
 char VAR_6[VAR_0];
 struct bpf_link *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_7(1 , VAR_2,
        VAR_4, VAR_5, VAR_3);
 if (VAR_8 < 0) {
  FUNC_8("program '%s': failed to create %s '%s:0x%zx' perf event: %s\n",
      FUNC_4(VAR_1, 0),
      VAR_2 ? "uretprobe" : "uprobe",
      VAR_4, VAR_5,
      FUNC_6(VAR_8, VAR_6, sizeof(VAR_6)));
  return FUNC_0(VAR_8);
 }
 VAR_7 = FUNC_3(VAR_1, VAR_8);
 if (FUNC_1(VAR_7)) {
  FUNC_5(VAR_8);
  VAR_9 = FUNC_2(VAR_7);
  FUNC_8("program '%s': failed to attach to %s '%s:0x%zx': %s\n",
      FUNC_4(VAR_1, 0),
      VAR_2 ? "uretprobe" : "uprobe",
      VAR_4, VAR_5,
      FUNC_6(VAR_9, VAR_6, sizeof(VAR_6)));
  return VAR_7;
 }
 return VAR_7;
}
