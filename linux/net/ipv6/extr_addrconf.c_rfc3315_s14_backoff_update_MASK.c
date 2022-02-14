
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline s32 FUNC_2(s32 VAR_0, s32 VAR_1)
{

 u64 VAR_2 = (1900000 + FUNC_1() % 200001) * (u64)VAR_0;
 FUNC_0(VAR_2, 1000000);
 if ((s32)VAR_2 > VAR_1) {

  VAR_2 = (900000 + FUNC_1() % 200001) * (u64)VAR_1;
  FUNC_0(VAR_2, 1000000);
 }
 return (s32)VAR_2;
}
