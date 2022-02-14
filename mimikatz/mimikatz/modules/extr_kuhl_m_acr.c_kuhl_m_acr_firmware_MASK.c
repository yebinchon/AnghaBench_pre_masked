
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int acrFirmware ;
typedef int UINT16 ;
typedef int NTSTATUS ;
typedef int BYTE ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int,int,int,int,int *,int ,int*,int*,int ) ;
 scalar_t__ FUNC_3 (int *,int*) ;

NTSTATUS FUNC_4(int VAR_5, wchar_t * VAR_6[])
{
 BYTE VAR_7[10];
 BYTE VAR_8[4], VAR_9;
 UINT16 VAR_10 = sizeof(VAR_7);

 if(FUNC_2(&VAR_3, 0xff, 0x00, 0x48, 0x00, ((void*)0), 0, VAR_7, &VAR_10, VAR_0))
  FUNC_1(L"ACR firmware: %.*S\n", VAR_10, VAR_7);

 if(FUNC_3(&VAR_4, VAR_8))
 {
  FUNC_1(L"PN532 chip\n version    : 0x%02x\n firmware   : %hhu.%hhu\n support    : ", VAR_8[0], VAR_8[1], VAR_8[2]);
  for(VAR_9 = 0; VAR_9 < 8; VAR_9++)
   if((VAR_8[3] >> VAR_9) & 1)
    FUNC_1(L"%s ; ", (VAR_9 < FUNC_0(VAR_1)) ? VAR_1[VAR_9] : L"RFU");
  FUNC_1(L"\n");
 }
 return VAR_2;
}
