
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,int**,int*) ;

BOOL FUNC_4(HANDLE VAR_2, BYTE VAR_3[5])
{
 BOOL VAR_4 = VAR_0;
 BYTE *VAR_5, VAR_6;
 if(FUNC_3(VAR_2, VAR_1, ((void*)0), 0, &VAR_5, &VAR_6))
 {
  if((VAR_4 = (VAR_6 == 6)))
   FUNC_2(VAR_3, VAR_5 + 1, 5);
  else FUNC_1(L"Received size is not 6 (0x%02x)\n", VAR_6);
  FUNC_0(VAR_5);
 }
 return VAR_4;
}
