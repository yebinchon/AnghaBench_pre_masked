
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,unsigned long,int,unsigned long) ;

int FUNC_1(unsigned long VAR_3[][2], unsigned long *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if ((VAR_3[VAR_5][0] != VAR_4[65 + 2 * VAR_5]) ||
    (VAR_3[VAR_5][1] != VAR_4[64 + 2 * VAR_5])) {
   FUNC_0("vmx[%d][0]: %lx load[%d] %lx\n",
     VAR_5, VAR_3[VAR_5][0], 65 + 2 * VAR_5,
     VAR_4[65 + 2 * VAR_5]);
   FUNC_0("vmx[%d][1]: %lx load[%d] %lx\n",
     VAR_5, VAR_3[VAR_5][1], 64 + 2 * VAR_5,
     VAR_4[64 + 2 * VAR_5]);
   return VAR_0;
  }

 }
 return VAR_1;
}
