
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* gpr; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 for (int VAR_1 = 0; VAR_1 < 32; VAR_1 += 4) {
  FUNC_0("r%02d 0x%016lx  r%02d 0x%016lx  " "r%02d 0x%016lx  r%02d 0x%016lx\n",

         VAR_1, VAR_0.gpr[VAR_1],
         VAR_1+1, VAR_0.gpr[VAR_1+1],
         VAR_1+2, VAR_0.gpr[VAR_1+2],
         VAR_1+3, VAR_0.gpr[VAR_1+3]);
 }
}
