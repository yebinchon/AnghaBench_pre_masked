
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int * pbData; int cbData; } ;
typedef int * PWSTR ;
typedef int PKULL_M_DPAPI_BLOB ;
typedef int PCWSTR ;
typedef int NTSTATUS ;
typedef int LPVOID ;
typedef TYPE_1__ DATA_BLOB ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *,int ,int **,int,int **,int *,int ,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int **,int *) ;
 scalar_t__ FUNC_8 (int ,int *,int ) ;
 scalar_t__ FUNC_9 (int,int **,char*,int *,int *) ;
 int FUNC_10 (int *,int ) ;

NTSTATUS FUNC_11(int VAR_1, wchar_t * VAR_2[])
{
 DATA_BLOB VAR_3, VAR_4;
 PKULL_M_DPAPI_BLOB VAR_5;
 PCWSTR VAR_6, VAR_7;
 PWSTR VAR_8 = ((void*)0);

 if(FUNC_9(VAR_1, VAR_2, L"in", &VAR_7, ((void*)0)))
 {
  if(FUNC_7(VAR_7, &VAR_3.pbData, &VAR_3.cbData))
  {
   if((VAR_5 = FUNC_4(VAR_3.pbData)))
   {
    FUNC_6(0, VAR_5);

    if(FUNC_3(VAR_3.pbData, VAR_3.cbData, &VAR_8, VAR_1, VAR_2, ((void*)0), 0, (LPVOID *) &VAR_4.pbData, &VAR_4.cbData, ((void*)0)))
    {
     if(VAR_8)
     {
      FUNC_2(L"description : %s\n", VAR_8);
      FUNC_0(VAR_8);
     }

     if(FUNC_9(VAR_1, VAR_2, L"out", &VAR_6, ((void*)0)))
     {
      if(FUNC_8(VAR_6, VAR_4.pbData, VAR_4.cbData))
       FUNC_2(L"Write to file \'%s\' is OK\n", VAR_6);
     }
     else
     {
      FUNC_2(L"data: ");
      FUNC_10(VAR_4.pbData, VAR_4.cbData);
      FUNC_2(L"\n");
     }
     FUNC_0(VAR_4.pbData);
    }
    FUNC_5(VAR_5);
   }
   FUNC_0(VAR_3.pbData);
  }
  else FUNC_1(L"kull_m_file_readData");
 }
 return VAR_0;
}
