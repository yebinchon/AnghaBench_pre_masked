
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline uint32
FUNC_1(uint32 VAR_0)
{
 uint32 VAR_1 = 0;

 for (;;)
 {
  FUNC_0(VAR_0 != 0);
  const uint32 VAR_2 = VAR_0 / 5;
  const uint32 VAR_3 = VAR_0 % 5;

  if (VAR_3 != 0)
   break;

  VAR_0 = VAR_2;
  ++VAR_1;
 }
 return VAR_1;
}
