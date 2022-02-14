
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef scalar_t__ uint32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline uint32
FUNC_2(uint64 VAR_0)
{
 uint32 VAR_1 = 0;

 for (;;)
 {
  FUNC_0(VAR_0 != 0);
  const uint64 VAR_2 = FUNC_1(VAR_0);
  const uint32 VAR_3 = (uint32) (VAR_0 - 5 * VAR_2);

  if (VAR_3 != 0)
   break;

  VAR_0 = VAR_2;
  ++VAR_1;
 }
 return VAR_1;
}
