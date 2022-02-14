
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PKULL_M_REGISTRY_HANDLE ;
typedef int NTSTATUS ;
typedef int * LPCWSTR ;
typedef int * HKEY ;
typedef scalar_t__ HANDLE ;
typedef int BYTE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,char*,int ,int ,int **) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_9 (int,int **,char*,int **,int *) ;

NTSTATUS FUNC_10(int VAR_11, wchar_t * VAR_12[])
{
 HANDLE VAR_13, VAR_14;
 PKULL_M_REGISTRY_HANDLE VAR_15, VAR_16;
 HKEY VAR_17;
 BYTE VAR_18[VAR_10];
 LPCWSTR VAR_19 = ((void*)0), VAR_20 = ((void*)0);

 if(FUNC_9(VAR_11, VAR_12, L"system", &VAR_19, ((void*)0)))
 {
  VAR_13 = FUNC_1(VAR_19, VAR_2, VAR_1, ((void*)0), VAR_8, 0, ((void*)0));
  if(VAR_13 != VAR_4)
  {
   if(FUNC_8(VAR_6, VAR_13, VAR_0, &VAR_15))
   {
    if(FUNC_3(VAR_15, ((void*)0), VAR_18))
    {
     if(FUNC_9(VAR_11, VAR_12, L"sam", &VAR_20, ((void*)0)))
     {
      VAR_14 = FUNC_1(VAR_20, VAR_2, VAR_1, ((void*)0), VAR_8, 0, ((void*)0));
      if(VAR_14 != VAR_4)
      {
       if(FUNC_8(VAR_6, VAR_14, VAR_0, &VAR_16))
       {
        FUNC_4(VAR_16, ((void*)0), VAR_18);
        FUNC_7(VAR_16);
       }
       FUNC_0(VAR_14);
      }
      else FUNC_2(L"CreateFile (SAM hive)");
     }
    }
    FUNC_7(VAR_15);
   }
   FUNC_0(VAR_13);
  }
  else FUNC_2(L"CreateFile (SYSTEM hive)");
 }
 else
 {
  if(FUNC_8(VAR_7, ((void*)0), VAR_0, &VAR_15))
  {
   if(FUNC_6(VAR_15, VAR_3, L"SYSTEM", 0, VAR_5, &VAR_17))
   {
    if(FUNC_3(VAR_15, VAR_17, VAR_18))
    {
     if(FUNC_6(VAR_15, VAR_3, L"SAM", 0, VAR_5, &VAR_17))
     {
      FUNC_4(VAR_15, VAR_17, VAR_18);
      FUNC_5(VAR_15, VAR_17);
     }
     else FUNC_2(L"kull_m_registry_RegOpenKeyEx (SAM)");
    }
    FUNC_5(VAR_15, VAR_17);
   }
   FUNC_7(VAR_15);
  }
 }
 return VAR_9;
}
