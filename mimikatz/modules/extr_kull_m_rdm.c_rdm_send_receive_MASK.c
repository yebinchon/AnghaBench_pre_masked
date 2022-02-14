
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int USHORT ;
typedef int* PUSHORT ;
typedef int* PBYTE ;
typedef char* LPCWCHAR ;
typedef int* LPCVOID ;
typedef int* LPBYTE ;
typedef int HANDLE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int*,int) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int*,int,int) ;

BOOL FUNC_9(HANDLE VAR_5, BYTE VAR_6, LPCVOID VAR_7, BYTE VAR_8, LPBYTE *VAR_9, BYTE *VAR_10)
{
 BOOL VAR_11 = VAR_0;
 BYTE VAR_12, VAR_13, VAR_14[0x100] = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 6 + VAR_8, 0x00, 0xaa, 0x00 , 1 + VAR_8, VAR_6, };
 USHORT VAR_15;
 LPCWCHAR VAR_16;

 if(VAR_8 <= 242)
 {
  if(VAR_8)
   FUNC_5(VAR_14 + 12, VAR_7, VAR_8);
  for(VAR_12 = 0, VAR_13 = 0; VAR_12 < (VAR_8 + 2); VAR_12++)
   VAR_13 ^= VAR_14[10 + VAR_12];
  VAR_14[12 + VAR_8] = VAR_13;
  VAR_14[12 + VAR_8 + 1] = 0xbb;
  FUNC_7(L">> "); FUNC_8(VAR_14, 14 + VAR_8, 1); FUNC_7(L"\n");
  FUNC_6(VAR_3);
  if(FUNC_1(VAR_5, VAR_14, sizeof(VAR_14)))
  {
   FUNC_6(VAR_2);
   if(FUNC_0(VAR_5, VAR_14, sizeof(VAR_14)))
   {
    if(VAR_14[0] == 0x03)
    {
     VAR_15 = *(PUSHORT) (VAR_14 + 6);
     if((VAR_15 >= 6) && (VAR_15 <= (242 + 6)))
     {
      FUNC_7(L"<< "); FUNC_8(VAR_14, VAR_15 + 8, 1); FUNC_7(L"\n");
      VAR_8 = (BYTE) (VAR_15 - 6);
      if(VAR_14[8] == 0xaa)
      {
       if((VAR_14[10] - 1) == VAR_8)
       {
        for(VAR_12 = 0, VAR_13 = 0; VAR_12 < (VAR_8 + 2); VAR_12++)
         VAR_13 ^= VAR_14[10 + VAR_12];
        if(VAR_13 == VAR_14[12 + VAR_8])
        {
         if((VAR_14[12 + VAR_8 + 1] = 0xbb))
         {
          switch(VAR_14[11])
          {
          case 0x00:
          case 0xff:
           VAR_11 = VAR_4;
           if(VAR_9 && VAR_10)
           {
            *VAR_9 = ((void*)0);
            *VAR_10 = 0;
            if(VAR_8)
            {
             if((*VAR_9 = (PBYTE) FUNC_2(VAR_1, VAR_8)))
             {
              FUNC_5(*VAR_9, VAR_14 + 12, VAR_8);
              *VAR_10 = VAR_8;
             }
             else VAR_11 = VAR_0;
            }
           }
           VAR_16 = ((void*)0);
           break;
          case 0x01:
           if(VAR_8 == 1)
           {
            switch(VAR_14[12])
            {
            case 0x80: VAR_16 = L"set OK"; break;
            case 0x81: VAR_16 = L"set failure"; break;
            case 0x82: VAR_16 = L"reader reply timeout"; break;
            case 0x83: VAR_16 = L"card does not exist"; break;
            case 0x84: VAR_16 = L"data response from the card"; break;
            case 0x85: VAR_16 = L"format or parameter of the command"; break;
            case 0x87: VAR_16 = L"unknown internal error"; break;
            case 0x8a: VAR_16 = L"initVal process"; break;
            case 0x8b: VAR_16 = L"wrong SNR during anticollision"; break;
            case 0x8c: VAR_16 = L"authentication failure"; break;
            case 0x8f: VAR_16 = L"reader received unknown command"; break;
            case 0x90: VAR_16 = L"card does not support this command"; break;
            case 0x91: VAR_16 = L"format of the command"; break;
            case 0x92: VAR_16 = L"does not support option mode"; break;
            case 0x93: VAR_16 = L"block does not exist"; break;
            case 0x94: VAR_16 = L"object has been locked"; break;
            case 0x95: VAR_16 = L"lock operation did not succeed"; break;
            case 0x96: VAR_16 = L"operation did not succeed"; break;
            default: L"unknow error code!";
            }
            FUNC_3(L"Command failure: 0x%02x - %s\n", VAR_14[12], VAR_16);
           }
           else FUNC_3(L"data size is not 1 when dealing when an error status (%hhu)\n", VAR_8);
           VAR_16 = ((void*)0);
           break;
          case 0x02: VAR_16 = L"checksum"; break;
          case 0x03: VAR_16 = L"not COM port selected"; break;
          case 0x04: VAR_16 = L"timeout reply"; break;
          case 0x05: VAR_16 = L"check sequence"; break;
          case 0x07: VAR_16 = L"receive"; break;
          case 0x0a: VAR_16 = L"parameter value out of range"; break;
          default: VAR_16 = L"unknow error code!";
          }
          if(VAR_16)
           FUNC_3(L"Status failure: 0x%02x - %s\n", VAR_14[11], VAR_16);
         }
         else FUNC_3(L"Bad China footer (0x%02x)\n", VAR_14[12 + VAR_8 + 1]);
        }
        else FUNC_3(L"Bad CRC (0x%02x -- 0x%02x)\n", VAR_13, VAR_14[12 + VAR_8]);
       }
       else FUNC_3(L"Bad HID size vs Data size (0x%02x -- 0x%02x)\n", VAR_8, VAR_14[10] - 1);
      }
      else FUNC_3(L"Bad China header (0x%02x)\n", VAR_14[8]);
     }
     else FUNC_3(L"Bad HID size (%hhu)\n", VAR_15);
    }
    else FUNC_3(L"Bad HID header (0x%02x)\n", VAR_14[0]);
   }
   else FUNC_4(L"HidD_GetFeature");
  }
  else FUNC_4(L"HidD_SetFeature");
 }
 else FUNC_3(L"Size >= 242 (%hhu)\n", VAR_8);
 return VAR_11;
}
