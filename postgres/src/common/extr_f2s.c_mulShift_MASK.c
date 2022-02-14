
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int int32 ;


 int FUNC_0 (int) ;
 int const VAR_0 ;

__attribute__((used)) static inline uint32
FUNC_1(const uint32 VAR_1, const uint64 VAR_2, const int32 VAR_3)
{




 const uint32 VAR_4 = (uint32) (VAR_2);
 const uint32 VAR_5 = (uint32) (VAR_2 >> 32);
 const uint64 VAR_6 = (uint64) VAR_1 * VAR_4;
 const uint64 VAR_7 = (uint64) VAR_1 * VAR_5;

 FUNC_0(VAR_3 > 32);
 const uint64 VAR_8 = (VAR_6 >> 32) + VAR_7;
 const uint64 VAR_9 = VAR_8 >> (VAR_3 - 32);

 FUNC_0(VAR_9 <= VAR_0);
 return (uint32) VAR_9;


}
