
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int USHORT ;
typedef int SCARDHANDLE ;
typedef int * PUSHORT ;
typedef int * PDWORD ;
typedef int* LPCBYTE ;
typedef scalar_t__ LONG ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int,int *,int ,int*,int,int*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int*,int,int) ;

BOOL FUNC_4(SCARDHANDLE VAR_2, DWORD VAR_3)
{
 DWORD VAR_4;
 BYTE VAR_5[256];
 LPCBYTE VAR_6;
 LONG VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, ((void*)0), 0, VAR_5, sizeof(VAR_5), &VAR_4);
 if(VAR_7 == VAR_1)
 {
  for(VAR_6 = VAR_5; VAR_6 < (VAR_5 + VAR_4); VAR_6 += VAR_6[1] + 2)
  {
   FUNC_2(L"    \\ %02x - ", VAR_6[0], VAR_6[1]);
   switch(VAR_6[0])
   {
   case 1:
    if(VAR_6[1] == sizeof(USHORT))
     FUNC_2(L"LCD Layout: %hhux%hhu\n", VAR_6[2], VAR_6[3]);
    break;
   case 2:
    if(VAR_6[1] == sizeof(BYTE))
     FUNC_2(L"Entry Validation Condition: 0x%02x\n", VAR_6[2]);
    break;
   case 3:
    if(VAR_6[1] == sizeof(BYTE))
     FUNC_2(L"TimeOut2: %hhu\n", VAR_6[2]);
    break;
   case 4:
    if(VAR_6[1] == sizeof(USHORT))
     FUNC_2(L"LCD Max Characters: %hu\n", *(PUSHORT) (VAR_6 + 2));
    break;
   case 5:
    if(VAR_6[1] == sizeof(USHORT))
     FUNC_2(L"LCD Max Lines: %hu\n", *(PUSHORT) (VAR_6 + 2));
    break;
   case 6:
    if(VAR_6[1] == sizeof(BYTE))
     FUNC_2(L"Min Pin Size: %hhu\n", VAR_6[2]);
    break;
   case 7:
    if(VAR_6[1] == sizeof(BYTE))
     FUNC_2(L"Max Pin Size: %hhu\n", VAR_6[2]);
    break;
   case 8:
    FUNC_2(L"FirmwareID: %.*S\n", VAR_6[1], VAR_6 + 2);
    break;
   case 9:
    if(VAR_6[1] == sizeof(BYTE))
    {
     FUNC_2(L"PPDU Support: %s", VAR_6[2] ? L"YES" : L"NO");
     if(VAR_6[2] & 1)
      FUNC_2(L" - SCardControl(FEATURE_CCID_ESC_COMMAND)");
     if(VAR_6[2] & 2)
      FUNC_2(L" - SCardTransmit");
     FUNC_2(L"\n");
    }
    break;
   case 0x0a:
    if(VAR_6[1] == sizeof(DWORD))
     FUNC_2(L"Max APDU Data Size: %u - 0x%x\n", *(PDWORD) (VAR_6 + 2), *(PDWORD) (VAR_6 + 2));
    break;
   case 0x0b:
    if(VAR_6[1] == sizeof(USHORT))
     FUNC_2(L"USB VendorID : %04x\n", *(PUSHORT) (VAR_6 + 2));
    break;
   case 0x0c:
    if(VAR_6[1] == sizeof(USHORT))
     FUNC_2(L"USB ProductID: %04x\n", *(PUSHORT) (VAR_6 + 2));
    break;

   default:
    FUNC_3(VAR_6 + 2, VAR_6[1], 1);
    FUNC_2(L"\n");
   }
  }
 }
 else FUNC_0(L"SCardControl(!FEATURE_GET_TLV_PROPERTIES!): 0x%08x (%u)\n", VAR_7, VAR_4);
 return VAR_0;
}
