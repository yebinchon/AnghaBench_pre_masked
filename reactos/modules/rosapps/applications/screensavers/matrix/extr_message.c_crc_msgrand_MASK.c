
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;



WORD FUNC_0(WORD VAR_0)
{
 const WORD VAR_1 = 0xb400;

 if(VAR_0 & 1)
  VAR_0 = (VAR_0 >> 1) ^ VAR_1;
 else
  VAR_0 = (VAR_0 >> 1);

 return VAR_0;
}
