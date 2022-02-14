
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ImageBase; } ;
struct TYPE_5__ {scalar_t__ FileNameOffset; scalar_t__ FullPathName; int ImageSize; TYPE_1__ BasicInfo; } ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef int PKIWI_BUFFER ;
typedef TYPE_2__* PAUX_MODULE_EXTENDED_INFO ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,char*,int ,int ,scalar_t__) ;

NTSTATUS FUNC_1(SIZE_T VAR_0, PVOID VAR_1, PKIWI_BUFFER VAR_2, PAUX_MODULE_EXTENDED_INFO VAR_3, PVOID VAR_4, BOOLEAN * VAR_5)
{
 return FUNC_0(VAR_2, L"0x%p - %u\t%S\n", VAR_3->BasicInfo.ImageBase, VAR_3->ImageSize, VAR_3->FullPathName + VAR_3->FileNameOffset);
}
