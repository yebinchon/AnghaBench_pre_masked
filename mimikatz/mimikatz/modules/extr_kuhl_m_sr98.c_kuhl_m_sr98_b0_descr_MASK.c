
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UCHAR ;
typedef int PCWCHAR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int * VAR_0 ;
 int * VAR_1 ;

void FUNC_2(ULONG VAR_2)
{
 UCHAR VAR_3 = (VAR_2 >> 17) & 1, VAR_4 = (VAR_2 >> 28) & 0xf, VAR_5;
 BOOLEAN VAR_6 = (VAR_4 == 6) || (VAR_4 == 9), VAR_7 = VAR_3 && VAR_6;
 PCWCHAR VAR_8;

 FUNC_1(L"\nT5577 Config block\n==================\nBlock[0]             : 0x%08x\nTest mode            : %s\nExtended mode        : %s\n\nMaster Key           : %hhu (0x%1x)\n", VAR_2, (VAR_4 == 6) ? L"DISABLED" : L"ENABLED", VAR_7 ? L"YES" : L"NO", VAR_4, VAR_4);
 if(VAR_7)
 {
  if((VAR_2 >> 24) & 0xf)
   FUNC_0(L"Invalid configuration bits in [5-8]\n");
  VAR_4 = ((VAR_2 >> 18) & 0x3f);
  FUNC_1(L"Data Bit Rate        : RF/%hhu (%hhu)\n", 2*VAR_4+2, VAR_4);
 }
 else
 {
  if((VAR_2 >> 21) & 0x7f)
   FUNC_0(L"Invalid configuration bits in [5-11]\n");
  VAR_4 = (VAR_2 >> 18) & 0x7;
  FUNC_1(L"Data Bit Rate        : RF/%hhu (%hhu)\n", VAR_0[VAR_4], VAR_4);
 }
 FUNC_1(L"X-Mode               : %s\n", VAR_3 ? L"YES" : L"NO");
 if(VAR_3 && !VAR_7)
  FUNC_0(L"X-mode bit is set, but not in Extended mode (because of the Master Key)\n");
 VAR_4 = (VAR_2 >> 12) & 0x1f;
 switch(VAR_4)
 {
 case 0: VAR_8 = L"Direct"; break;
 case 1: VAR_8 = L"PSK1"; break;
 case 2: VAR_8 = L"PSK2"; break;
 case 3: VAR_8 = L"PSK3"; break;
 case 4: VAR_8 = L"FSK1"; break;
 case 5: VAR_8 = L"FSK2"; break;
 case 6: VAR_8 = L"FSK1a"; break;
 case 7: VAR_8 = L"FSK2a"; break;
 case 8: VAR_8 = L"Manchester"; break;
 case 16: VAR_8 = L"Bi-phase"; break;
 case 24: VAR_8 = L"Differential bi-phase"; break;
 default: VAR_8 = L"INVALID";
 }
 FUNC_1(L"Modulation           : %s (%hhu)\n", VAR_8, VAR_4);
 if(((VAR_4 == 24) && !VAR_7) || (((VAR_4 == 6) || (VAR_4 == 7)) && VAR_7))
  FUNC_0(L"Invalid Modulation in this mode\n");
 VAR_5 = (VAR_2 >> 10) & 0x3;
 VAR_4 = (VAR_2 >> 5) & 0x7;
 FUNC_1(L"PSK Clock Frequency  : %s (%hhu)\nAnswer On Request    : %s\nOne Time Password    : %s\nMaxblock             : %hhu ( ", VAR_1[VAR_5], VAR_5, ((VAR_2 >> 9) & 1) ? L"YES" : L"NO", ((VAR_2 >> 8) & 1) ? L"YES" : L"NO", VAR_4);
 for(VAR_5 = 1; VAR_5 <= VAR_4; VAR_5++)
  FUNC_1(L"B[%hhu] ", VAR_5);
 VAR_5 = ((VAR_2 >> 4) & 1);
 FUNC_1(L")\nPassword             : %s\n", VAR_5 ? L"YES" : L"NO");
 if(VAR_5 && (VAR_4 == 7))
  FUNC_0(L"Password can be transmitted on the wire because of Maxblock\n");
 if(VAR_7)
  FUNC_1(L"Sequence Start Marker: %s\nFast Downlink        : %s\nInverse Data         : %s\n", ((VAR_2 >> 3) & 1) ? L"YES" : L"NO", ((VAR_2 >> 2) & 1) ? L"YES" : L"NO", ((VAR_2 >> 1) & 1) ? L"YES" : L"NO");
 else
 {
  FUNC_1(L"Sequence Terminator  : %s\n", ((VAR_2 >> 3) & 1) ? L"YES" : L"NO");
  if((VAR_2 >> 1) & 0x3)
   FUNC_0(L"Invalid configuration bits in [30-31]\n");
 }
 VAR_4 = VAR_2 & 1;
 FUNC_1(L"Init Delay           : %s\n", VAR_4 ? L"YES" : L"NO");
 if(VAR_4 & !VAR_6)
  FUNC_0(L"Init Delay bit is set, but was disabled (because of the Master Key)\n");
}
