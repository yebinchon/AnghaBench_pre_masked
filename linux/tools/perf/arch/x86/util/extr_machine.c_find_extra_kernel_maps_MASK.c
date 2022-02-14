
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extra_kernel_map_info {scalar_t__ entry_trampoline; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct extra_kernel_map_info*,scalar_t__,scalar_t__,int ,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, const char *VAR_3, char VAR_4,
      u64 VAR_5)
{
 struct extra_kernel_map_info *VAR_6 = VAR_2;

 if (!VAR_6->entry_trampoline && FUNC_2(VAR_4) == VAR_0 &&
     !FUNC_3(VAR_3, "_entry_trampoline")) {
  VAR_6->entry_trampoline = VAR_5;
  return 0;
 }

 if (FUNC_1(VAR_3)) {
  u64 VAR_7 = VAR_5 + VAR_1;

  return FUNC_0(VAR_6, VAR_5, VAR_7, 0, VAR_3);
 }

 return 0;
}
