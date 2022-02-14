
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1 (unsigned int VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;

 VAR_1 = ((VAR_0 >> 8) & 0xFF);

 VAR_2 = (((VAR_0 & 0xFF) * 16) + 700);

 FUNC_0("0x%x means multiplier %d @ %d mV\n", VAR_0, VAR_1, VAR_2);
}
