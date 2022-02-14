
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int guid; } ;
typedef int LPCGUID ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(LPCGUID VAR_1)
{
 DWORD VAR_2;
 for(VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
 {
  if(FUNC_1(VAR_1, &VAR_0[VAR_2].guid))
  {
   FUNC_2(L"%s - ", VAR_0[VAR_2].name);
   break;
  }
 }
 FUNC_3(VAR_1);
}
