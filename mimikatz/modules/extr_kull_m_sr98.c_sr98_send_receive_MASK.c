
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int outBuffer ;
typedef int inBuffer ;
typedef int* PBYTE ;
typedef int* LPCVOID ;
typedef int* LPBYTE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int*,int,int*,int *) ;
 int FUNC_6 (int*,int*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ,int*,int,int*,int *) ;

BOOL FUNC_9(HANDLE VAR_7, BYTE VAR_8, LPCVOID VAR_9, BYTE VAR_10, LPBYTE *VAR_11, BYTE *VAR_12)
{
 BOOL VAR_13 = VAR_0;
 BYTE VAR_14, VAR_15, VAR_16[24] = {0x03, 0x01, 5 + VAR_10}, VAR_17[256] = {0}, VAR_18;
 DWORD VAR_19;




 if(VAR_10 < (24 - 6))
 {
  VAR_16[3] = VAR_8;
  FUNC_6(VAR_16 + 4, VAR_9, VAR_10);
  for(VAR_14 = 0, VAR_15 = 0; VAR_14 < (3 + VAR_10); VAR_14++)
   VAR_15 ^= VAR_16[VAR_14 + 1];

  VAR_16[4 + VAR_10] = VAR_15;
  VAR_16[5 + VAR_10] = 0x04;




  FUNC_4(VAR_7, VAR_3 | VAR_2);
  FUNC_7(VAR_5);
  if(FUNC_8(VAR_7, VAR_16, sizeof(VAR_16), &VAR_19, ((void*)0)) && (VAR_19 == sizeof(VAR_16)))
  {
   FUNC_0(VAR_7, ((void*)0), ((void*)0));
   FUNC_7(VAR_4);
   if(FUNC_5(VAR_7, VAR_17, sizeof(VAR_17), &VAR_19, ((void*)0)))
   {



    if(VAR_19 >= 6)
    {
     if((VAR_17[0] == 0x05) && (VAR_17[1] == 0x01))
     {
      if((VAR_17[2] >= 5) && (VAR_17[3] == (VAR_8 | 0x80)))
      {
       VAR_18 = VAR_17[2] - 5;

       for(VAR_14 = 0, VAR_15 = 0; VAR_14 < (3 + VAR_18); VAR_14++)
        VAR_15 ^= VAR_17[VAR_14 + 1];
       if((VAR_17[4 + VAR_18] == VAR_15) && (VAR_17[5 + VAR_18] == 0x04))
       {
        VAR_13 = VAR_6;
        if(VAR_18 && VAR_11 && VAR_12)
        {
         *VAR_12 = VAR_18;
         if((*VAR_11 = (PBYTE) FUNC_1(VAR_1, VAR_18)))
          FUNC_6(*VAR_11, VAR_17 + 4, VAR_18);
         else VAR_13 = VAR_0;
        }



       }
       else FUNC_2(L"Bad CRC/data\n");
      }
      else FUNC_2(L"Bad data size/ctl code\n");
     }
     else FUNC_2(L"Bad header\n");
    }
    else FUNC_2(L"Read size = %u\n", VAR_19);
   }
   else FUNC_3(L"ReadFile");
  }
  else FUNC_3(L"WriteFile");
 }
 return VAR_13;
}
