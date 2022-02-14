
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hook_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static inline bool FUNC_5(void)
{
 VAR_1 = FUNC_3(FUNC_0());
 if (!VAR_1) {
  FUNC_4("Failed to create hook info file mapping: %lu",
       FUNC_1());
  return 0;
 }

 VAR_2 = FUNC_2(VAR_1, VAR_0,
      0, 0, sizeof(struct hook_info));
 if (!VAR_2) {
  FUNC_4("Failed to map the hook info file mapping: %lu",
       FUNC_1());
  return 0;
 }

 return 1;
}
