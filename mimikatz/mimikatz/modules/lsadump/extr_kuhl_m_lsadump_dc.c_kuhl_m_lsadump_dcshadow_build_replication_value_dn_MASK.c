
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int valLen; int * pVal; } ;
struct TYPE_4__ {int structLen; int NameLen; int StringName; } ;
typedef int PWSTR ;
typedef int * PBYTE ;
typedef int DWORD ;
typedef TYPE_1__ DSNAME ;
typedef int BOOL ;
typedef TYPE_2__ ATTRVAL ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;

BOOL FUNC_4(ATTRVAL* VAR_0, PWSTR VAR_1)
{
 DWORD VAR_2 = FUNC_3(VAR_1);

 VAR_0->valLen = sizeof(DSNAME) + VAR_2 * sizeof(WCHAR);
 VAR_0->pVal = (PBYTE) FUNC_0(VAR_0->valLen);
 if(VAR_0->pVal)
 {
  FUNC_2(VAR_0->pVal, VAR_0->valLen);
  ((DSNAME*)VAR_0->pVal)->structLen = VAR_0->valLen;
  ((DSNAME*)VAR_0->pVal)->NameLen = VAR_2;
  FUNC_1(((DSNAME*)VAR_0->pVal)->StringName, VAR_1, (VAR_2+1)*sizeof(WCHAR));
 }
 return VAR_0->pVal != ((void*)0);
}
