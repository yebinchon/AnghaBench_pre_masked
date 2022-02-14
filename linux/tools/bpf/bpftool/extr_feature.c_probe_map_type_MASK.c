
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int plain_desc ;
typedef enum bpf_map_type { ____Placeholder_bpf_map_type } bpf_map_type ;
typedef int define_name ;
typedef int __u32 ;


 int FUNC_0 (int,int ) ;
 char** VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,int,char const*) ;
 int FUNC_3 (char*,char*,char const*,...) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(enum bpf_map_type VAR_1, const char *VAR_2,
        __u32 VAR_3)
{
 char VAR_4[128], VAR_5[128], VAR_6[128];
 const char *VAR_7 = "eBPF map_type ";
 size_t VAR_8;
 bool VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_3);

 VAR_8 = sizeof(VAR_5) - FUNC_4(VAR_7) - 1;
 if (FUNC_4(VAR_0[VAR_1]) > VAR_8) {
  FUNC_1("map type name too long");
  return;
 }

 FUNC_3(VAR_4, "have_%s_map_type", VAR_0[VAR_1]);
 FUNC_3(VAR_6, "%s_map_type", VAR_0[VAR_1]);
 FUNC_5(VAR_6, sizeof(VAR_6));
 FUNC_3(VAR_5, "%s%s", VAR_7, VAR_0[VAR_1]);
 FUNC_2(VAR_4, VAR_5, VAR_6, VAR_9,
      VAR_2);
}
