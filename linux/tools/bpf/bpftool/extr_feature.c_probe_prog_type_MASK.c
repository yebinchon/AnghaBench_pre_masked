
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int plain_desc ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef int define_name ;
typedef scalar_t__ __u32 ;




 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,int,char const*) ;
 char** VAR_0 ;
 int FUNC_3 (char*,char*,char const*,...) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(enum bpf_prog_type VAR_1, bool *VAR_2,
  const char *VAR_3, __u32 VAR_4)
{
 char VAR_5[128], VAR_6[128], VAR_7[128];
 const char *VAR_8 = "eBPF program_type ";
 size_t VAR_9;
 bool VAR_10;

 if (VAR_4)

  switch (VAR_1) {
  case 129:
  case 128:
   break;
  default:
   return;
  }

 VAR_10 = FUNC_0(VAR_1, VAR_4);

 VAR_2[VAR_1] |= VAR_10;

 VAR_9 = sizeof(VAR_6) - FUNC_4(VAR_8) - 1;
 if (FUNC_4(VAR_0[VAR_1]) > VAR_9) {
  FUNC_1("program type name too long");
  return;
 }

 FUNC_3(VAR_5, "have_%s_prog_type", VAR_0[VAR_1]);
 FUNC_3(VAR_7, "%s_prog_type", VAR_0[VAR_1]);
 FUNC_5(VAR_7, sizeof(VAR_7));
 FUNC_3(VAR_6, "%s%s", VAR_8, VAR_0[VAR_1]);
 FUNC_2(VAR_5, VAR_6, VAR_7, VAR_10,
      VAR_3);
}
