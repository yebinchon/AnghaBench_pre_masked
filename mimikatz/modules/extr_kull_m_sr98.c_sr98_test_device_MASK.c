
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temoin ;
typedef int USHORT ;
typedef int* PUSHORT ;
typedef int HANDLE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int*,int,int**,int*) ;

BOOL FUNC_4(HANDLE VAR_2)
{
 BOOL VAR_3 = VAR_0;
 USHORT VAR_4 = 'BB';
 BYTE *VAR_5, VAR_6;
 if(FUNC_3(VAR_2, VAR_1, &VAR_4, sizeof(VAR_4), &VAR_5, &VAR_6))
 {
  if(VAR_6 == sizeof(USHORT))
  {
   if(!(VAR_3 = *((PUSHORT) VAR_5) == (VAR_4 | 0x0100)))
    FUNC_1(L"Received data is not origin+1 (0x%04x)\n", FUNC_2(*((PUSHORT) VAR_5)));
  }
  else FUNC_1(L"Received size is not 2 (0x%02x)\n", VAR_6);
  FUNC_0(VAR_5);
 }
 return VAR_3;
}
