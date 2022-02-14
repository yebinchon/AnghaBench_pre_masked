
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,unsigned long const*) ;

__attribute__((used)) static inline bool FUNC_1(const unsigned long *VAR_1,
       u32 VAR_2, u32 VAR_3)
{
 s32 VAR_4;

 VAR_4 = VAR_2 - VAR_3;
 if (VAR_4 < 0 || VAR_4 >= VAR_0)
  return 0;
 return FUNC_0(VAR_4, VAR_1) != 0;
}
