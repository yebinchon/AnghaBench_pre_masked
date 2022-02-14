
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_info {char* id; char const* name; } ;
typedef int info ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int,struct bpf_prog_info*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*,char*,char*,char const*,char const*,char const*) ;

__attribute__((used)) static int FUNC_8(int VAR_2, const char *VAR_3,
    const char *VAR_4,
    int VAR_5)
{
 struct bpf_prog_info VAR_6 = {};
 __u32 VAR_7 = sizeof(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2);
 if (VAR_8 < 0)
  return -1;

 if (FUNC_0(VAR_8, &VAR_6, &VAR_7)) {
  FUNC_2(VAR_8);
  return -1;
 }

 if (VAR_0) {
  FUNC_4(VAR_1);
  FUNC_6(VAR_1, "id", VAR_6.id);
  FUNC_5(VAR_1, "attach_type",
       VAR_3);
  FUNC_5(VAR_1, "attach_flags",
       VAR_4);
  FUNC_5(VAR_1, "name", VAR_6.name);
  FUNC_3(VAR_1);
 } else {
  FUNC_7("%s%-8u %-15s %-15s %-15s\n", VAR_5 ? "    " : "",
         VAR_6.id,
         VAR_3,
         VAR_4,
         VAR_6.name);
 }

 FUNC_2(VAR_8);
 return 0;
}
