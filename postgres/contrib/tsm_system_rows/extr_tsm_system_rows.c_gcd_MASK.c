
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static uint32
FUNC_0(uint32 VAR_0, uint32 VAR_1)
{
 uint32 VAR_2;

 while (VAR_0 != 0)
 {
  VAR_2 = VAR_0;
  VAR_0 = VAR_1 % VAR_0;
  VAR_1 = VAR_2;
 }

 return VAR_1;
}
