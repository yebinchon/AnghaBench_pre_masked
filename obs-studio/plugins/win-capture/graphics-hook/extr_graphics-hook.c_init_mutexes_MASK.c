
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static inline bool FUNC_2(void)
{
 DWORD VAR_3 = FUNC_0();

 VAR_2[0] = FUNC_1(VAR_0, VAR_3);
 if (!VAR_2[0]) {
  return 0;
 }

 VAR_2[1] = FUNC_1(VAR_1, VAR_3);
 if (!VAR_2[1]) {
  return 0;
 }

 return 1;
}
