
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef int __u32 ;


 unsigned int FUNC_0 (char**) ;


 int FUNC_1 (unsigned int,int,int ) ;
 char** VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,...) ;
 char** VAR_3 ;
 int FUNC_7 (char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_8(enum bpf_prog_type VAR_4, bool VAR_5,
      const char *VAR_6, __u32 VAR_7)
{
 const char *VAR_8 = VAR_3[VAR_4];
 char VAR_9[128];
 unsigned int VAR_10;
 bool VAR_11;

 if (VAR_7)

  switch (VAR_4) {
  case 129:
  case 128:
   break;
  default:
   return;
  }

 if (VAR_1) {
  FUNC_7(VAR_9, "%s_available_helpers", VAR_8);
  FUNC_3(VAR_2, VAR_9);
  FUNC_4(VAR_2);
 } else if (!VAR_6) {
  FUNC_6("eBPF helpers supported for program type %s:",
         VAR_8);
 }

 for (VAR_10 = 1; VAR_10 < FUNC_0(VAR_0); VAR_10++) {
  if (!VAR_5)
   VAR_11 = 0;
  else
   VAR_11 = FUNC_1(VAR_10, VAR_4, VAR_7);

  if (VAR_1) {
   if (VAR_11)
    FUNC_5(VAR_2, VAR_0[VAR_10]);
  } else if (VAR_6) {
   FUNC_6("#define %sBPF__PROG_TYPE_%s__HELPER_%s %s\n",
          VAR_6, VAR_8, VAR_0[VAR_10],
          VAR_11 ? "1" : "0");
  } else {
   if (VAR_11)
    FUNC_6("\n\t- %s", VAR_0[VAR_10]);
  }
 }

 if (VAR_1)
  FUNC_2(VAR_2);
 else if (!VAR_6)
  FUNC_6("\n");
}
