
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_5__ {scalar_t__ ImageBase; } ;
struct TYPE_7__ {scalar_t__ ImageSize; TYPE_1__ BasicInfo; scalar_t__ FileNameOffset; scalar_t__ FullPathName; } ;
struct TYPE_6__ {scalar_t__ addr; int isFound; } ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef TYPE_2__* PKKLL_M_MODULE_FROM_ADDR ;
typedef int PKIWI_BUFFER ;
typedef TYPE_3__* PAUX_MODULE_EXTENDED_INFO ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__) ;

NTSTATUS FUNC_1(SIZE_T VAR_3, PVOID VAR_4, PKIWI_BUFFER VAR_5, PAUX_MODULE_EXTENDED_INFO VAR_6, PVOID VAR_7, BOOLEAN * VAR_8)
{
 NTSTATUS VAR_9 = VAR_1;
 PKKLL_M_MODULE_FROM_ADDR VAR_10 = (PKKLL_M_MODULE_FROM_ADDR) VAR_7;

 if((VAR_10->addr >= (ULONG_PTR) VAR_6->BasicInfo.ImageBase) && (VAR_10->addr < ((ULONG_PTR) VAR_6->BasicInfo.ImageBase + VAR_6->ImageSize)))
 {
  *VAR_8 = VAR_0;
  VAR_10->isFound = VAR_2;
  VAR_9 = FUNC_0(VAR_5, L"0x%p [%S + 0x%x]\n", (PVOID) VAR_10->addr, VAR_6->FullPathName + VAR_6->FileNameOffset, VAR_10->addr - (ULONG_PTR) VAR_6->BasicInfo.ImageBase);
 }
 return VAR_9;
}
