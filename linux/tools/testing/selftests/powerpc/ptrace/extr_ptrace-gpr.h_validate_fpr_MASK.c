
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,unsigned long,unsigned long) ;

int FUNC_1(unsigned long *VAR_2, unsigned long VAR_3)
{
 int VAR_4, VAR_5 = 1;

 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  if (VAR_2[VAR_4] != VAR_3) {
   FUNC_0("FPR[%d]: %lx Expected: %lx\n", VAR_4, VAR_2[VAR_4], VAR_3);
   VAR_5 = 0;
  }
 }

 if (!VAR_5)
  return VAR_0;
 return VAR_1;
}
