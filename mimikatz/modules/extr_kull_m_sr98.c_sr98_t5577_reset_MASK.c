
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int inBuffer ;
typedef int HANDLE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int*,int,int**,int*) ;

BOOL FUNC_2(HANDLE VAR_3, BYTE VAR_4)
{
 BYTE VAR_5[5] = {VAR_2, VAR_4 & 0x0b}, *VAR_6, VAR_7;
 if(FUNC_1(VAR_3, VAR_1, VAR_5, sizeof(VAR_5), &VAR_6, &VAR_7))
 {
  if(VAR_7 == 1)
  {
   if(*VAR_6)
    FUNC_0(L"Data size is not 0 (0x%02x)\n", *VAR_6);
  }
  else FUNC_0(L"Received size is not 1 (0x%02x)\n", VAR_7);
 }
 return VAR_0;
}
