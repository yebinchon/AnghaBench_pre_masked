
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int cbData; scalar_t__ pbData; } ;
struct TYPE_5__ {TYPE_1__ Value; int dwValueType; scalar_t__ pszObjId; } ;
typedef TYPE_2__* PCERT_RDN_ATTR ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ LPSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

BOOL FUNC_1(PCERT_RDN_ATTR VAR_3, LPSTR VAR_4, LPCWSTR VAR_5)
{
 BOOL VAR_6 = VAR_1;
 if(VAR_3 && VAR_5 && VAR_4)
 {
  VAR_3->pszObjId = VAR_4;
  VAR_3->dwValueType = VAR_0;
  VAR_3->Value.cbData = FUNC_0(VAR_5) * sizeof(wchar_t);
  VAR_3->Value.pbData = (PBYTE) VAR_5;
  VAR_6 = VAR_2;
 }
 return VAR_6;
}
