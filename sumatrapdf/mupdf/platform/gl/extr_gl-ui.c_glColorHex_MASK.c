
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float hex ;


 int FUNC_0 (float,float,float) ;

void FUNC_1(unsigned int VAR_0)
{
 float VAR_1 = ((VAR_0>>16)&0xff) / 255.0f;
 float VAR_2 = ((VAR_0>>8)&0xff) / 255.0f;
 float VAR_3 = ((VAR_0)&0xff) / 255.0f;
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
