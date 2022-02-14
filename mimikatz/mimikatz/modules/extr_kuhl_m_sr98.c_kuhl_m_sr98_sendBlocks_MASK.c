
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
typedef size_t UCHAR ;
struct TYPE_4__ {int hDevice; } ;
typedef TYPE_1__* PSR98_DEVICE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int*) ;
 int FUNC_5 (int ,int ,size_t,int ,int ,int ) ;

BOOL FUNC_6(ULONG *VAR_2, UCHAR VAR_3)
{
 BOOL VAR_4 = VAR_0;
 PSR98_DEVICE VAR_5;
 ULONG VAR_6;
 UCHAR VAR_7;
 if(FUNC_4(&VAR_5, &VAR_6))
 {
  if(VAR_6 == 1)
  {
   FUNC_2(L" * T5577 blocks:\n");
   for(VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    FUNC_2(L"   [%hhu] 0x%08x\n", VAR_7, VAR_2[VAR_7]);
   FUNC_2(L" * Write operations...\n");
   for(VAR_7 = 0, VAR_4 = VAR_1; (VAR_7 < VAR_3) && VAR_4; VAR_7++)
    VAR_4 &= FUNC_5(VAR_5->hDevice, 0, VAR_7, FUNC_1(VAR_2[VAR_7]), VAR_0, 0);
  }
  else FUNC_0(L"Reader device is not unique (%u)\n", VAR_6);
  FUNC_3(VAR_5);
 }
 return VAR_4;
}
