
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_4__ {int hDevice; } ;
typedef TYPE_1__* PSR98_DEVICE ;
typedef int PCWCHAR ;
typedef int PBYTE ;
typedef int NTSTATUS ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int ) ;
 scalar_t__ FUNC_7 (int,int **,char*,int *,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__**,int*) ;
 scalar_t__ FUNC_10 (int ,int ) ;

NTSTATUS FUNC_11(int VAR_1, wchar_t * VAR_2[])
{
 PCWCHAR VAR_3;
 ULONGLONG VAR_4 = 0;
 ULONG VAR_5[3];
 PSR98_DEVICE VAR_6;
 ULONG VAR_7;

 if(FUNC_7(VAR_1, VAR_2, L"read", ((void*)0), ((void*)0)))
 {
  FUNC_4(L"\nEM4100 reader\n\n");
  if(FUNC_9(&VAR_6, &VAR_7))
  {
   if(VAR_7 == 1)
   {
    if(FUNC_10(VAR_6->hDevice, (PBYTE) &VAR_4))
    {
     VAR_4 = FUNC_2(VAR_4);
     VAR_4 >>= 24;
     FUNC_4(L" * Tag ID      : %I64u (0x%I64x)\n", VAR_4, VAR_4);
    }
    else FUNC_1(L"sr98_read_emid\n");
   }
   else FUNC_1(L"Reader device is not unique (%u)\n", VAR_7);
   FUNC_8(VAR_6);
  }
 }
 else if(FUNC_7(VAR_1, VAR_2, L"id", &VAR_3, ((void*)0)))
 {
  FUNC_4(L"\nEM4100 encoder\n\n");
  VAR_4 = FUNC_3(VAR_3, ((void*)0), 0);
  if((VAR_4 < 0x10000000000))
  {
   FUNC_4(L" * Tag ID      : %I64u (0x%I64x)\n", VAR_4, VAR_4);
   FUNC_5(VAR_5, VAR_4);
   FUNC_4(L" * EM4100      : 0x%08x%08x\n", VAR_5[1], VAR_5[2]);
   FUNC_6(VAR_5, FUNC_0(VAR_5));
  }
  else FUNC_1(L"Tag Id (/id) must be in the [0;255] range - it was %I64u (0x%I64x)\n", VAR_4, VAR_4);
 }
 else FUNC_1(L"Tag Id (/id) is needed, or /read\n");
 return VAR_0;
}
