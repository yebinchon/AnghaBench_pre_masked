
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ImageBase; } ;
struct TYPE_7__ {int ImageSize; TYPE_1__ BasicInfo; } ;
struct TYPE_6__ {int size; scalar_t__ addr; } ;
typedef int SIZE_T ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_2__* PKKLL_M_MODULE_BASIC_INFOS ;
typedef int PKIWI_BUFFER ;
typedef TYPE_3__* PAUX_MODULE_EXTENDED_INFO ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

NTSTATUS FUNC_0(SIZE_T VAR_2, PVOID VAR_3, PKIWI_BUFFER VAR_4, PAUX_MODULE_EXTENDED_INFO VAR_5, PVOID VAR_6, BOOLEAN * VAR_7)
{
 *VAR_7 = VAR_0;
 ((PKKLL_M_MODULE_BASIC_INFOS) VAR_6)->addr = (PUCHAR) VAR_5->BasicInfo.ImageBase;
 ((PKKLL_M_MODULE_BASIC_INFOS) VAR_6)->size = VAR_5->ImageSize;
 return VAR_1;
}
