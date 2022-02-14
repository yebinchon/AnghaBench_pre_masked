
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef void* USHORT ;
struct TYPE_6__ {int Eflags; int Cs; int Eip; int Edi; int Esi; int Ebp; int Esp; int Ebx; int Edx; int Ecx; int Eax; scalar_t__ Ds; scalar_t__ Es; scalar_t__ Fs; scalar_t__ Gs; } ;
struct TYPE_5__ {int EFlags; int SegCs; int Eip; int Edi; int Esi; int Ebp; int HardwareEsp; int Ebx; int Edx; int Ecx; int Eax; void* SegDs; void* SegEs; void* SegFs; void* SegGs; } ;
typedef TYPE_1__* PKTRAP_FRAME ;
typedef TYPE_2__* PKIRQ_TRAPFRAME ;


 int VAR_0 ;

VOID
FUNC_0(PKIRQ_TRAPFRAME VAR_1,
      PKTRAP_FRAME VAR_2)
{



   VAR_2->SegGs = (USHORT)VAR_1->Gs;
   VAR_2->SegFs = (USHORT)VAR_1->Fs;
   VAR_2->SegEs = (USHORT)VAR_1->Es;
   VAR_2->SegDs = (USHORT)VAR_1->Ds;
   VAR_2->Eax = VAR_1->Eax;
   VAR_2->Ecx = VAR_1->Ecx;
   VAR_2->Edx = VAR_1->Edx;
   VAR_2->Ebx = VAR_1->Ebx;
   VAR_2->HardwareEsp = VAR_1->Esp;
   VAR_2->Ebp = VAR_1->Ebp;
   VAR_2->Esi = VAR_1->Esi;
   VAR_2->Edi = VAR_1->Edi;
   VAR_2->Eip = VAR_1->Eip;
   VAR_2->SegCs = VAR_1->Cs;
   VAR_2->EFlags = VAR_1->Eflags;

}
