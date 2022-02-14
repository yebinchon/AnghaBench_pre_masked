
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,unsigned long,int,unsigned long) ;

int FUNC_1(unsigned long *VAR_4, unsigned long *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_4[1 + 2 * VAR_6] != VAR_5[1 + 2 * VAR_6]) {
   FUNC_0("store[%d]: %lx load[%d] %lx\n",
     1 + 2 * VAR_6, VAR_4[VAR_6],
     1 + 2 * VAR_6, VAR_5[VAR_6]);
   return VAR_0;
  }
 }
 for (VAR_6 = 64; VAR_6 < VAR_2; VAR_6++) {
  if (!(VAR_6 % 2) && (VAR_4[VAR_6] != VAR_5[VAR_6+1])) {
   FUNC_0("store[%d]: %lx load[%d] %lx\n",
     VAR_6, VAR_4[VAR_6], VAR_6+1, VAR_5[VAR_6+1]);
   return VAR_0;
  }
  if ((VAR_6 % 2) && (VAR_4[VAR_6] != VAR_5[VAR_6-1])) {
   FUNC_0("here store[%d]: %lx load[%d] %lx\n",
     VAR_6, VAR_4[VAR_6], VAR_6-1, VAR_5[VAR_6-1]);
   return VAR_0;
  }
 }

 return VAR_1;
}
