
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, uint32_t VAR_1)
{
 uint16_t VAR_2;

 FUNC_0("%s line size:  %#10x       ", VAR_0, VAR_1 & 0xFFFF);

 VAR_2 = VAR_1 >> 16;
 if (VAR_2)
  FUNC_0("%u-way", VAR_2);
 else
  FUNC_0("fully");

 FUNC_0(" associative\n");
}
