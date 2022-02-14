
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_3(void)
{
 UINT VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2) {
  FUNC_2("Failed to get windows system path: %lu", FUNC_0());
  return 0;
 }

 return 1;
}
