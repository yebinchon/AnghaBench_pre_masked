
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_8__ {TYPE_1__* pCertInfo; } ;
struct TYPE_7__ {scalar_t__ NotAfter; scalar_t__ NotBefore; } ;
struct TYPE_6__ {scalar_t__ NotAfter; scalar_t__ NotBefore; } ;
typedef scalar_t__ PVOID ;
typedef int* PULONGLONG ;
typedef scalar_t__* PULONG ;
typedef TYPE_2__* PKIWI_SIGNER ;
typedef scalar_t__* PFILETIME ;
typedef TYPE_3__* PCCERT_CONTEXT ;


 int FUNC_0 (scalar_t__*) ;

void FUNC_1(PFILETIME VAR_0, PFILETIME VAR_1, PVOID VAR_2, PCCERT_CONTEXT VAR_3, PKIWI_SIGNER VAR_4)
{
 PFILETIME *VAR_5 = (PFILETIME *) VAR_2;
 if(VAR_5[0])
  *VAR_0 = *VAR_5[0];
 else
 {
  if(VAR_3 && *(PULONG) &VAR_3->pCertInfo->NotBefore)
   *VAR_0 = VAR_3->pCertInfo->NotBefore;
  else if(VAR_4 && *(PULONG) &VAR_4->NotBefore)
   *VAR_0 = VAR_4->NotBefore;
  else FUNC_0(VAR_0);
 }
 if(VAR_5[1])
  *VAR_1 = *VAR_5[1];
 else
 {
  if(VAR_3 && *(PULONG) &VAR_3->pCertInfo->NotAfter)
   *VAR_1 = VAR_3->pCertInfo->NotAfter;
  else if(VAR_4 && *(PULONG) &VAR_4->NotAfter)
   *VAR_1 = VAR_4->NotAfter;
  else
  {
   *VAR_1 = *VAR_0;
   *(PULONGLONG) VAR_1 += (ULONGLONG) 10000000 * 60 * 60 * 24 * 365 * 10;
  }
 }
}
