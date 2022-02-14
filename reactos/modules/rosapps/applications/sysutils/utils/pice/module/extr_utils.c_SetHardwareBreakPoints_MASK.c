
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int LinearAddress; int Virtual; scalar_t__ Used; scalar_t__ Active; } ;
typedef int* PULONG ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(void)
{
ULONG VAR_1;
ULONG VAR_2;
ULONG VAR_3,VAR_4,VAR_5,VAR_6;
PULONG VAR_7[4]={&VAR_3,&VAR_4,&VAR_5,&VAR_6};

    FUNC_1();


 __asm__("\n\t 		pushl %eax\n\t 		xorl %eax,%eax\n\t 		mov %eax,%dr6\n\t 		mov %eax,%dr7\n\t 		popl %eax");






 for(VAR_2=0,VAR_1=0;VAR_1<4;VAR_1++)
 {
  VAR_2<<=2;
  if(VAR_0[VAR_1].Active && VAR_0[VAR_1].Used && !VAR_0[VAR_1].Virtual)
  {
   VAR_2|=0x03;
   *VAR_7[3-VAR_1]=VAR_0[VAR_1].LinearAddress;
   FUNC_0((0,"breakpoint %u at %.8X\n",VAR_1,VAR_0[VAR_1].LinearAddress));
  }
 }
 if(VAR_2)
 {
  __asm__("\n\t 			pushl %%eax\n\t 			movl %0,%%eax\n\t 			andl $0x000000FF,%%eax\n\t 			orl $0x300,%%eax\n\t 			mov %%eax,%%dr7\n\t 			mov %1,%%eax\n\t 			mov %%eax,%%dr0\n\t 			mov %2,%%eax\n\t 			mov %%eax,%%dr1\n\t 			mov %3,%%eax\n\t 			mov %%eax,%%dr2\n\t 			mov %4,%%eax\n\t 			mov %%eax,%%dr3\n\t 			popl %%eax"
   :
   :"m" (VAR_2),"m" (VAR_3),"m" (VAR_4),"m" (VAR_5),"m" (VAR_6));
 }

    FUNC_2();
}
