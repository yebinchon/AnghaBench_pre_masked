
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valCount; } ;
struct TYPE_5__ {int * pszValue; TYPE_1__ AttrVal; } ;
typedef int PWSTR ;
typedef TYPE_2__* PDCSHADOW_PUSH_REQUEST_OBJECT_ATTRIBUTE ;
typedef int PCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ) ;

BOOL FUNC_4(PCWSTR VAR_3, PDCSHADOW_PUSH_REQUEST_OBJECT_ATTRIBUTE VAR_4, BOOL VAR_5)
{
 DWORD VAR_6 = (VAR_5 ? VAR_4->AttrVal.valCount+1 : 1);
 PWSTR* VAR_7 = VAR_4->pszValue;

 VAR_4->pszValue = (PWSTR *) FUNC_0(VAR_1, sizeof(PWSTR) * (VAR_6));
 if(VAR_4->pszValue)
 {
  if(FUNC_3(VAR_4->pszValue + VAR_6-1, VAR_3))
  {
   if(VAR_5 && VAR_4->AttrVal.valCount)
    FUNC_2(VAR_4->pszValue, VAR_7, sizeof(PWSTR) * VAR_4->AttrVal.valCount);
   VAR_4->AttrVal.valCount = VAR_6;
   if(VAR_7)
    FUNC_1(VAR_7);
   return VAR_2;
  }
  else
   FUNC_1(VAR_4->pszValue);
 }
 VAR_4->pszValue = VAR_7;
 return VAR_0;
}
