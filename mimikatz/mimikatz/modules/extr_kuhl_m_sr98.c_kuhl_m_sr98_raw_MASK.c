
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ULONG ;
typedef size_t UCHAR ;
struct TYPE_7__ {int toProg; int data; } ;
struct TYPE_6__ {int hDevice; } ;
typedef TYPE_1__* PSR98_DEVICE ;
typedef int PCWCHAR ;
typedef int NTSTATUS ;
typedef TYPE_2__ KUHL_M_SR98_RAW_BLOCK ;
typedef int BOOLEAN ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int **,char*,int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__**,int*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,size_t,int ,int,int ) ;
 void* FUNC_10 (int ,int *,int ) ;

NTSTATUS FUNC_11(int VAR_3, wchar_t * VAR_4[])
{
 KUHL_M_SR98_RAW_BLOCK VAR_5[8];
 PSR98_DEVICE VAR_6;
 ULONG VAR_7;
 PCWCHAR VAR_8;
 UCHAR VAR_9;
 BOOLEAN VAR_10 = VAR_0, VAR_11 = FUNC_5(VAR_3, VAR_4, L"wipe", ((void*)0), ((void*)0));

 if((VAR_10 |= (VAR_5[0].toProg = FUNC_5(VAR_3, VAR_4, L"b0", &VAR_8, ((void*)0)))))
 {
  VAR_5[0].data = FUNC_10(VAR_8, ((void*)0), 0);
  FUNC_4(VAR_5[0].data);
 }
 if((VAR_10 |= (VAR_5[1].toProg = FUNC_5(VAR_3, VAR_4, L"b1", &VAR_8, ((void*)0)))))
  VAR_5[1].data = FUNC_10(VAR_8, ((void*)0), 0);
 if((VAR_10 |= (VAR_5[2].toProg = FUNC_5(VAR_3, VAR_4, L"b2", &VAR_8, ((void*)0)))))
  VAR_5[2].data = FUNC_10(VAR_8, ((void*)0), 0);
 if((VAR_10 |= (VAR_5[3].toProg = FUNC_5(VAR_3, VAR_4, L"b3", &VAR_8, ((void*)0)))))
  VAR_5[3].data = FUNC_10(VAR_8, ((void*)0), 0);
 if((VAR_10 |= (VAR_5[4].toProg = FUNC_5(VAR_3, VAR_4, L"b4", &VAR_8, ((void*)0)))))
  VAR_5[4].data = FUNC_10(VAR_8, ((void*)0), 0);
 if((VAR_10 |= (VAR_5[5].toProg = FUNC_5(VAR_3, VAR_4, L"b5", &VAR_8, ((void*)0)))))
  VAR_5[5].data = FUNC_10(VAR_8, ((void*)0), 0);
 if((VAR_10 |= (VAR_5[6].toProg = FUNC_5(VAR_3, VAR_4, L"b6", &VAR_8, ((void*)0)))))
  VAR_5[6].data = FUNC_10(VAR_8, ((void*)0), 0);
 if((VAR_10 |= (VAR_5[7].toProg = FUNC_5(VAR_3, VAR_4, L"b7", &VAR_8, ((void*)0)))))
 {
  VAR_5[7].data = FUNC_10(VAR_8, ((void*)0), 0);
  if(VAR_5[0].toProg && (VAR_5[0].data & 0x10))
   FUNC_3(L"\n> blocks[0] indicates PWD, blocks[7] will be the password (0x%08x)\n", VAR_5[7].data);
 }

 if(VAR_10 || VAR_11)
 {
  if(FUNC_7(&VAR_6, &VAR_7))
  {
   if(VAR_7 == 1)
   {
    if(VAR_11)
    {
     FUNC_3(L"\n * Wipe T5577 tag...\n");
     FUNC_8(VAR_6->hDevice, VAR_2);
    }
    if(VAR_10)
    {
     FUNC_3(L"\n * Write operations...\n");
     for(VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++)
     {
      if(VAR_5[VAR_9].toProg)
      {
       FUNC_3(L"   [%hhu] 0x%08x\n", VAR_9, VAR_5[VAR_9].data);
       FUNC_9(VAR_6->hDevice, 0, VAR_9, FUNC_2(VAR_5[VAR_9].data), VAR_0, 0);
      }
     }
    }
   }
   else FUNC_1(L"Reader device is not unique (%u)\n", VAR_7);
   FUNC_6(VAR_6);
  }
 }
 else FUNC_1(L"No operation\n");
 return VAR_1;
}
