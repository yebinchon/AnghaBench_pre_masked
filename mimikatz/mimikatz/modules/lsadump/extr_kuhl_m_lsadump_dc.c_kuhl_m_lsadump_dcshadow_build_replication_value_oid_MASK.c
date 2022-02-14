
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valLen; scalar_t__ pVal; } ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef int PWSTR ;
typedef scalar_t__ PSTR ;
typedef scalar_t__ PBYTE ;
typedef int DWORD ;
typedef int BOOL ;
typedef TYPE_1__ ATTRVAL ;
typedef int ATTRTYP ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;

BOOL FUNC_4(ATTRVAL* VAR_2, PWSTR VAR_3)
{
 BOOL VAR_4 = VAR_0;
 PSTR VAR_5 = FUNC_3(VAR_3);

 if(VAR_5)
 {
  VAR_2->valLen = sizeof(DWORD);
  VAR_2->pVal = (PBYTE) FUNC_1(VAR_2->valLen);
  if(VAR_2->pVal)
   VAR_4 = FUNC_2((SCHEMA_PREFIX_TABLE*) &VAR_1, VAR_5, (ATTRTYP*) VAR_2->pVal, VAR_0 );
  FUNC_0(VAR_5);
 }
 return VAR_4;
}
