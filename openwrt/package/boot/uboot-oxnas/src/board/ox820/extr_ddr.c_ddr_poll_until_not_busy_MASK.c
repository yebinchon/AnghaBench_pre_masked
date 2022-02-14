
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
 volatile UINT VAR_1 = 0;
 volatile UINT VAR_2 = 1;


 VAR_1 = *(volatile UINT *) VAR_0;



 while (VAR_2 == 1) {
  VAR_1 = *(volatile UINT *) VAR_0;


  if ((VAR_1 & 0x80000000) == 0x00000000) {
   VAR_2 = 0;
  }
 }
}
