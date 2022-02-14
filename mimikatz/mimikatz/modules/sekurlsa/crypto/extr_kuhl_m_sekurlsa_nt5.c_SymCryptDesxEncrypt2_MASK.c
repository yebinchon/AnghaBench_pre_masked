
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ outputWhitening; int desKey; scalar_t__ inputWhitening; } ;
typedef int* PULONGLONG ;
typedef TYPE_1__* PCSYMCRYPT_NT5_DESX_EXPANDED_KEY ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ LPCBYTE ;


 int FUNC_0 (int *,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;

VOID FUNC_1(PCSYMCRYPT_NT5_DESX_EXPANDED_KEY VAR_1, LPCBYTE VAR_2, PBYTE VAR_3)
{
 *(PULONGLONG) VAR_3 = *(PULONGLONG) VAR_2 ^ *(PULONGLONG) VAR_1->inputWhitening;
 FUNC_0(&VAR_1->desKey, VAR_3, VAR_3, VAR_0);
 *(PULONGLONG) VAR_3 ^= *(PULONGLONG) VAR_1->outputWhitening;
}
