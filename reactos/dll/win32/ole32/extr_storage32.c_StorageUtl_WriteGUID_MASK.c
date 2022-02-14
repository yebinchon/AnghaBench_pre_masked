
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int Data4; int Data3; int Data2; int Data1; } ;
typedef TYPE_1__ GUID ;
typedef int BYTE ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(BYTE* VAR_0, ULONG VAR_1, const GUID* VAR_2)
{
  FUNC_0(VAR_0, VAR_1, VAR_2->Data1);
  FUNC_1(VAR_0, VAR_1+4, VAR_2->Data2);
  FUNC_1(VAR_0, VAR_1+6, VAR_2->Data3);

  FUNC_2(VAR_0+VAR_1+8, VAR_2->Data4, sizeof(VAR_2->Data4));
}
