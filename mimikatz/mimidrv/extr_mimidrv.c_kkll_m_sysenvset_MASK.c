
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_2__ {char* Name; int Attributes; int ValueLength; scalar_t__ ValueOffset; int VendorGuid; } ;
typedef int SIZE_T ;
typedef int (* PZWSETSYSTEMENVIRONMENTVALUEEX ) (int *,int *,scalar_t__,int ,int ) ;
typedef int PVOID ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_1__* PMIMIDRV_VARIABLE_NAME_AND_VALUE ;
typedef int PKIWI_BUFFER ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;

NTSTATUS FUNC_2(SIZE_T VAR_1, PVOID VAR_2, PKIWI_BUFFER VAR_3)
{
 NTSTATUS VAR_4 = VAR_0;
 UNICODE_STRING VAR_5, VAR_6;
 PZWSETSYSTEMENVIRONMENTVALUEEX VAR_7;
 PMIMIDRV_VARIABLE_NAME_AND_VALUE VAR_8 = (PMIMIDRV_VARIABLE_NAME_AND_VALUE) VAR_2;
 FUNC_1(&VAR_5, L"ZwSetSystemEnvironmentValueEx");
 FUNC_1(&VAR_6, VAR_8->Name);
 if((VAR_7 = (PZWSETSYSTEMENVIRONMENTVALUEEX) FUNC_0(&VAR_5)))
  VAR_4 = VAR_7(&VAR_6, &VAR_8->VendorGuid, (PUCHAR) VAR_8 + VAR_8->ValueOffset, VAR_8->ValueLength, VAR_8->Attributes);
 return VAR_4;
}
