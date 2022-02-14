
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PKULL_M_REGISTRY_HANDLE ;
typedef int NTSTATUS ;
typedef int LPCWSTR ;
typedef int * HKEY ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 int VAR_11 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int *,int *,int,int **) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int ,int *,int *,int ,int ,int **) ;
 scalar_t__ FUNC_10 (int ,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_13 (int,int **,char*,int *,int *) ;
 int FUNC_14 (int *,char*) ;

NTSTATUS FUNC_15(int VAR_12, wchar_t * VAR_13[])
{
 PKULL_M_REGISTRY_HANDLE VAR_14;
 LPCWSTR VAR_15;
 HANDLE VAR_16;
 HKEY VAR_17, VAR_18;
 DWORD VAR_19, VAR_20, VAR_21, VAR_22;
 wchar_t * VAR_23;

 if(FUNC_13(VAR_12, VAR_13, L"hive", &VAR_15, ((void*)0)))
 {
  VAR_16 = FUNC_1(VAR_15, VAR_2, VAR_1, ((void*)0), VAR_10, 0, ((void*)0));
  if(VAR_16 != VAR_4)
  {
   if(FUNC_12(VAR_7, VAR_16, VAR_0, &VAR_14))
   {
    FUNC_6(VAR_14, ((void*)0), ((void*)0), VAR_12, VAR_13);
    FUNC_11(VAR_14);
   }
   FUNC_0(VAR_16);
  }
  else FUNC_4(L"CreateFile");
 }
 else
 {
  if(FUNC_12(VAR_8, ((void*)0), VAR_0, &VAR_14))
  {
   if(FUNC_9(VAR_14, VAR_3, ((void*)0), 0, VAR_5, &VAR_17))
   {
    if(FUNC_10(VAR_14, VAR_17, ((void*)0), ((void*)0), ((void*)0), &VAR_20, &VAR_21, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
    {
     VAR_21++;
     if((VAR_23 = (wchar_t *) FUNC_2(VAR_9, (VAR_21 + 1) * sizeof(wchar_t))))
     {
      for(VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
      {
       VAR_22 = VAR_21;
       if(FUNC_8(VAR_14, VAR_17, VAR_19, VAR_23, &VAR_22, ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
       {
        if(!FUNC_14(VAR_23, L"_Classes"))
        {
         FUNC_5(L"%s ", VAR_23);
         if(FUNC_9(VAR_14, VAR_17, VAR_23, 0, VAR_6, &VAR_18))
         {
          FUNC_5(L"\n");
          FUNC_6(VAR_14, VAR_18, VAR_23, VAR_12, VAR_13);
          FUNC_7(VAR_14, VAR_18);
         }
         else FUNC_4(L"kull_m_registry_RegOpenKeyEx");
        }
       }
      }
      FUNC_3(VAR_23);
     }
    }
    FUNC_7(VAR_14, VAR_17);
   }
   else FUNC_4(L"kull_m_registry_RegOpenKeyEx");
   FUNC_11(VAR_14);
  }
 }
 return VAR_11;
}
