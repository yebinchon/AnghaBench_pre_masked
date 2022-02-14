
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int blockContent ;
typedef int * PDWORD ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int*,int,int**,int*) ;

BOOL FUNC_3(HANDLE VAR_4, BYTE VAR_5, BYTE VAR_6, DWORD VAR_7, BYTE VAR_8, DWORD VAR_9 )
{
 BOOL VAR_10 = VAR_0;
 BYTE VAR_11[11], *VAR_12, VAR_13;

 VAR_11[0] = VAR_2;
 VAR_11[1] = VAR_5 & 1;



 *(PDWORD) (VAR_11 + 2) = VAR_7;
 VAR_11[6] = VAR_6 & 7;

 if(VAR_8)
 {
  VAR_11[0] = VAR_3;
  *(PDWORD) (VAR_11 + 7) = VAR_9;
 }

 if(FUNC_2(VAR_4, VAR_1, VAR_11, VAR_8 ? sizeof(VAR_11) : sizeof(VAR_11) - sizeof(DWORD), &VAR_12, &VAR_13))
 {
  if(VAR_13 == 1)
  {
   if(!(VAR_10 = (*VAR_12 == sizeof(DWORD))))
    FUNC_1(L"Received data size is not 4 (0x%02x)\n", *VAR_12);
  }
  else FUNC_1(L"Received size is not 1 (0x%02x)\n", VAR_13);
  FUNC_0(VAR_12);
 }
 return VAR_10;
}
