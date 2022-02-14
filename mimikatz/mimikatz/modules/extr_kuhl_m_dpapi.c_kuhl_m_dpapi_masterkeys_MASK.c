
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PKULL_M_DPAPI_MASTERKEYS ;
typedef int PBYTE ;
typedef int NTSTATUS ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;

NTSTATUS FUNC_5(int VAR_1, wchar_t * VAR_2[])
{
 PKULL_M_DPAPI_MASTERKEYS VAR_3;
 PBYTE VAR_4;
 DWORD VAR_5;

 if(VAR_1 && FUNC_4(VAR_2[0], &VAR_4, &VAR_5))
 {
  if((VAR_3 = FUNC_1(VAR_4)))
  {
   FUNC_3(VAR_3);
   FUNC_2(VAR_3);
  }
  FUNC_0(VAR_4);
 }
 return VAR_0;
}
