
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bits ;
typedef int WORD ;
struct TYPE_6__ {int member_0; int member_2; int member_1; } ;
struct TYPE_5__ {int Value; int pszObjId; int fCritical; } ;
typedef TYPE_1__* PCERT_EXTENSION ;
typedef int PBYTE ;
typedef TYPE_2__ CRYPT_BIT_BLOB ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*,int *) ;
 int VAR_0 ;

BOOL FUNC_1(PCERT_EXTENSION VAR_1, BOOL VAR_2, WORD VAR_3)
{
 CRYPT_BIT_BLOB VAR_4 = {sizeof(VAR_3), (PBYTE) &VAR_3, 5};
 VAR_1->pszObjId = VAR_0;
 VAR_1->fCritical = VAR_2;
 return FUNC_0(VAR_1->pszObjId, &VAR_4, &VAR_1->Value);
}
