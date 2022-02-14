
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valLen; scalar_t__ pVal; } ;
typedef int PSecPkgContext_SessionKey ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;
typedef TYPE_1__ ATTRVAL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (scalar_t__,scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;

BOOL FUNC_5(BOOL VAR_3, DWORD VAR_4, ATTRVAL *VAR_5, PSecPkgContext_SessionKey VAR_6)
{
 DWORD VAR_7;
 BYTE VAR_8[VAR_1];
 BOOL VAR_9 = VAR_0;

 if(VAR_3)
 {
  if(!(VAR_5->valLen % VAR_1))
  {
   VAR_9 = VAR_2;
   for(VAR_7 = 0; (VAR_7 < VAR_5->valLen) && VAR_9; VAR_7 += VAR_1)
   {
    VAR_9 = FUNC_0(FUNC_3(VAR_5->pVal + VAR_7, &VAR_4, VAR_8));
    if(VAR_9)
     FUNC_2(VAR_5->pVal + VAR_7, VAR_8, VAR_1);
    else FUNC_1(L"RtlEncryptDES2blocks1DWORD");
   }
  }
  else FUNC_1(L"Unexpected hash len (%u)\n", VAR_5->valLen);
 }
 if(!VAR_3 || VAR_9)
  VAR_9 = FUNC_4(VAR_5, VAR_6);
 return VAR_9;
}
