
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dataOut ;
typedef int dataIn ;
typedef int UINT16 ;
typedef int PKULL_M_PN532_COMM ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int*,int,int*,int*) ;
 int FUNC_3 (int*,int,int) ;

void FUNC_4(PKULL_M_PN532_COMM VAR_4)
{
 BYTE VAR_5[] = { 0x00,
      0x04, 0x00, 0x11, 0x22, 0x33, 0x08,

      0x01, 0xfe, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
      0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff,
      0xff, 0xff,

      0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99,
      0x00,
      0x00,
 };
 BYTE VAR_6[VAR_1 - 2];
 UINT16 VAR_7 = sizeof(VAR_6);

 if(FUNC_2(VAR_4, VAR_0, VAR_5, sizeof(VAR_5), VAR_6, &VAR_7))
 {
  FUNC_1(VAR_4);
  if(VAR_7)
  {
   FUNC_0(L"Framing Type        : %s\n", ((VAR_6[0] & 3) < 3) ? VAR_3[(VAR_6[0] & 3)] : L"?");
   FUNC_0(L"DEP                 : %s\n", (VAR_6[0] & 0x04) ? L"yes": L"no");
   FUNC_0(L"ISO/IEC 14443-4 PICC: %s\n", (VAR_6[0] & 0x08) ? L"yes": L"no");
   FUNC_0(L"Baudrate            : %hu\n", (((VAR_6[0] & 0x70) >> 4) < 3) ? VAR_2[((VAR_6[0] & 0x70) >> 4)] : 0);
   if(VAR_7 > 1)
   {
    FUNC_0(L"InitiatorCommand    : ");
    FUNC_3(VAR_6 + 1, VAR_7 - 1, 1);
    FUNC_0(L"\n");
   }
  }
 }
}
