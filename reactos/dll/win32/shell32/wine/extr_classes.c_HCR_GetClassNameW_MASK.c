
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int REFIID ;
typedef int PVOID ;
typedef scalar_t__* LPWSTR ;
typedef char* LPOLESTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__*,int) ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int *,int ,int *,int ,int*) ;
 int FUNC_6 (int ,char const*,scalar_t__*,int,int *,int ,int *) ;
 int FUNC_7 (int ,int ,int ,int *,int ,int*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_8 (int ,char**) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (scalar_t__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (char*,char*,char*) ;

BOOL FUNC_12(REFIID VAR_19, LPWSTR VAR_20, DWORD VAR_21)
{
 HKEY VAR_22;
 BOOL VAR_23 = VAR_6;
 DWORD VAR_24 = VAR_21;





  VAR_20[0] = 0;
 if (FUNC_1(VAR_19, &VAR_22))

 {
          static const WCHAR VAR_25[] =
            { 'L','o','c','a','l','i','z','e','d','S','t','r','i','n','g', 0 };
          if (!FUNC_6(VAR_22, VAR_25, VAR_20, VAR_21, ((void*)0), 0, ((void*)0)) ||
              !FUNC_7(VAR_22, VAR_18, 0, ((void*)0), (LPBYTE)VAR_20, &VAR_21))
          {
     VAR_23 = VAR_16;
   }
   FUNC_4(VAR_22);
 }

 if (!VAR_23 || !VAR_20[0])
 {
   if(FUNC_2(VAR_19, &VAR_5))
   {
     if (FUNC_3(VAR_17, VAR_10, VAR_20, VAR_24))
       VAR_23 = VAR_16;
   }
   else if (FUNC_2(VAR_19, &VAR_2))
   {
     if(FUNC_3(VAR_17, VAR_11, VAR_20, VAR_24))
       VAR_23 = VAR_16;
   }
 }
 FUNC_9("-- %s\n", FUNC_10(VAR_20));
 return VAR_23;
}
