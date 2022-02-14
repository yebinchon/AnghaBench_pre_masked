
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (short*) ;

int FUNC_1(short *VAR_0)
{
   int VAR_1,VAR_2=0;
   for (VAR_1=0; VAR_1 < FUNC_0(VAR_0); ++VAR_1)
      VAR_2 += VAR_0[VAR_1];
   return VAR_2;
}
