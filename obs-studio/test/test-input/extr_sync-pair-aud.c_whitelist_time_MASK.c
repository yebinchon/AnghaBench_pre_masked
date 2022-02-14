
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(uint64_t VAR_1, uint64_t VAR_2,
      uint64_t VAR_3, uint64_t VAR_4)
{
 if (!VAR_0)
  return 0;

 uint64_t VAR_5 = (VAR_1 - VAR_0) / VAR_2;
 uint64_t VAR_6 = VAR_5 * VAR_4 / VAR_3;
 return VAR_6 % 2 == 1;
}
