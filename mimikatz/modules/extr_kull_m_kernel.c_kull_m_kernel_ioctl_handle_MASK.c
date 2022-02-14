
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PVOID ;
typedef int* PDWORD ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int *,scalar_t__,int *,int,scalar_t__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

BOOL FUNC_5(HANDLE VAR_4, DWORD VAR_5, PVOID VAR_6, DWORD VAR_7, PVOID * VAR_8, PDWORD VAR_9, BOOL VAR_10)
{
 BOOL VAR_11 = VAR_2;
 DWORD VAR_12 = VAR_0, VAR_13;

 if(!VAR_10)
 {
  VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 ? *VAR_8 : ((void*)0), VAR_9 ? *VAR_9 : 0, &VAR_13, ((void*)0));
 }
 else
 {
  for(*VAR_9 = 0x10000; (VAR_12 == VAR_0) && (*VAR_8 = FUNC_2(VAR_3, *VAR_9)) ; *VAR_9 <<= 1)
  {
   if((VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, *VAR_8, *VAR_9, &VAR_13, ((void*)0))))
   {
    VAR_12 = VAR_1;
   }
   else
   {
    VAR_12 = FUNC_1();
    if(VAR_12 == VAR_0)
     FUNC_3(*VAR_8);
   }
  }
 }
 if(!VAR_11)
 {
  FUNC_4(L"DeviceIoControl (0x%08x) : 0x%08x\n", VAR_5, FUNC_1());
  if(VAR_10)
   FUNC_3(*VAR_8);
 }
 else if(VAR_9)
  *VAR_9 = VAR_13;
 return VAR_11;
}
