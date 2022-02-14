
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
typedef int UINT16 ;
struct TYPE_3__ {scalar_t__ descr; int suppdata; scalar_t__ (* communicator ) (int*,int,int*,int*,int ) ;} ;
typedef TYPE_1__* PKULL_M_PN532_COMM ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*,int const*,int const) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*,int,int) ;
 scalar_t__ FUNC_4 (int*,int,int*,int*,int ) ;

BOOL FUNC_5(PKULL_M_PN532_COMM VAR_4, const BYTE VAR_5, const BYTE *VAR_6, const UINT16 VAR_7, BYTE *VAR_8, UINT16 *VAR_9)
{
 BOOL VAR_10 = VAR_0;
 BYTE VAR_11[VAR_2];
 UINT16 VAR_12 = VAR_7 + 2, VAR_13 = *VAR_9 + 2;

 if(VAR_4->communicator)
 {
 if((VAR_12 <= sizeof(VAR_11)) && (VAR_13 <= sizeof(VAR_11)))
 {
  if(!(VAR_5 & 1))
  {
   VAR_11[0] = VAR_1;
   VAR_11[1] = VAR_5;
   if(VAR_7)
    FUNC_1(VAR_11 + 2, VAR_6, VAR_7);
   if(VAR_4->descr)
   {
    FUNC_2(L"PN532> ");
    FUNC_3(VAR_11, VAR_12, 1);
    FUNC_2(L"\n");
   }
   if(VAR_4->communicator(VAR_11, VAR_12, VAR_11, &VAR_13, VAR_4->suppdata))
   {
    if(VAR_4->descr)
    {
     FUNC_2(L"PN532< ");
     FUNC_3(VAR_11, VAR_13, 1);
     FUNC_2(L"\n");
    }

    if(VAR_13 >= 2)
    {
     *VAR_9 = VAR_13 - 2;
     if(VAR_11[0] == VAR_3)
     {
      if((VAR_10 = (VAR_11[1] == VAR_5 + 1)))
       FUNC_1(VAR_8, VAR_11 + 2, *VAR_9);
      else FUNC_0(L"Recv CC is not valid: 0x%02x, expected 0x%02x\n", VAR_11[1], VAR_5 + 1);
     }
     else FUNC_0(L"Recv TFI is not valid: 0x%02x, expected 0x%02x\n", VAR_11[0], VAR_3);
    }
    else FUNC_0(L"cbOut = %hu (not long enough)\n", VAR_13);
   }
  }
  else FUNC_0(L"pn532_cmd is not even (0x%02x)\n", VAR_5);
 }
 else FUNC_0(L"cbIn = %hu / cbOut = %hu (max is %hu)\n", VAR_12, VAR_13, sizeof(VAR_11));
 }
 else FUNC_0(L"No communicator\n");
 return VAR_10;
}
