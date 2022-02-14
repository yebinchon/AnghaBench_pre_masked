
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;
struct bpf_link {int dummy; } ;
typedef int errmsg ;


 struct bpf_link* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bpf_link*) ;
 int FUNC_2 (struct bpf_link*) ;
 int VAR_0 ;
 struct bpf_link* FUNC_3 (struct bpf_program*,int) ;
 int FUNC_4 (struct bpf_program*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char*,int ,char const*,char const*,int ) ;

struct bpf_link *FUNC_9(struct bpf_program *VAR_1,
      const char *VAR_2,
      const char *VAR_3)
{
 char VAR_4[VAR_0];
 struct bpf_link *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_7(VAR_2, VAR_3);
 if (VAR_6 < 0) {
  FUNC_8("program '%s': failed to create tracepoint '%s/%s' perf event: %s\n",
      FUNC_4(VAR_1, 0),
      VAR_2, VAR_3,
      FUNC_6(VAR_6, VAR_4, sizeof(VAR_4)));
  return FUNC_0(VAR_6);
 }
 VAR_5 = FUNC_3(VAR_1, VAR_6);
 if (FUNC_1(VAR_5)) {
  FUNC_5(VAR_6);
  VAR_7 = FUNC_2(VAR_5);
  FUNC_8("program '%s': failed to attach to tracepoint '%s/%s': %s\n",
      FUNC_4(VAR_1, 0),
      VAR_2, VAR_3,
      FUNC_6(VAR_7, VAR_4, sizeof(VAR_4)));
  return VAR_5;
 }
 return VAR_5;
}
