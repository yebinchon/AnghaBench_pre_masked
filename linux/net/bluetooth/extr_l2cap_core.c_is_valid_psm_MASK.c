
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(u16 VAR_0, u8 VAR_1) {
 if (!VAR_0)
  return 0;

 if (FUNC_0(VAR_1))
  return (VAR_0 <= 0x00ff);


 return ((VAR_0 & 0x0101) == 0x0001);
}
