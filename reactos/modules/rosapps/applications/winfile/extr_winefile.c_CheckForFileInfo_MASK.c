
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PropertiesDialog {int pVersionData; } ;
struct LANGANDCODEPAGE {int wCodePage; int wLanguage; } ;
typedef char WCHAR ;
struct TYPE_2__ {int dwFileVersionLS; int dwFileVersionMS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef int UINT ;
typedef scalar_t__* PVOID ;
typedef scalar_t__ LPVOID ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ LPCSTR ;
typedef scalar_t__ LPBYTE ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__,int,char*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int,int ) ;
 int FUNC_10 (int ,int ,char*) ;
 scalar_t__ FUNC_11 (int ,char const*,scalar_t__*,int*) ;
 int FUNC_12 (char*,char const*,int ,int ,int ,int ) ;
 int FUNC_13 (char*,char const*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_14(struct PropertiesDialog* VAR_9, HWND VAR_10, LPCWSTR VAR_11)
{
 static const WCHAR VAR_12[] = {'\\','\0'};
 static const WCHAR VAR_13[] = {'\\','V','a','r','F','i','l','e','I','n','f','o','\\','T','r','a','n','s','l','a','t','i','o','n','\0'};
 static const WCHAR VAR_14[] = {'\\','S','t','r','i','n','g','F','i','l','e','I','n','f','o','\\',
          '%','0','4','x','%','0','4','x','\\','%','s','\0'};
        static const WCHAR VAR_15[] = {'%','d','.','%','d','.','%','d','.','%','d','\0'};
 DWORD VAR_16 = FUNC_1(VAR_11, ((void*)0));

 if (VAR_16) {
  VAR_9->pVersionData = FUNC_5(FUNC_3(), 0, VAR_16);

  if (FUNC_2(VAR_11, 0, VAR_16, VAR_9->pVersionData)) {
   LPVOID VAR_17;
   UINT VAR_18;

   if (FUNC_11(VAR_9->pVersionData, VAR_12, &VAR_17, &VAR_18)) {
    if (VAR_18 == sizeof(VS_FIXEDFILEINFO)) {
     VS_FIXEDFILEINFO* VAR_19 = (VS_FIXEDFILEINFO*)VAR_17;
                                        WCHAR VAR_20[VAR_0];

                                        FUNC_12(VAR_20, VAR_15,
                                                 FUNC_4(VAR_19->dwFileVersionMS), FUNC_6(VAR_19->dwFileVersionMS),
                                                 FUNC_4(VAR_19->dwFileVersionLS), FUNC_6(VAR_19->dwFileVersionLS));

                                        FUNC_10(VAR_10, VAR_4, VAR_20);
    }
   }


   if (FUNC_11(VAR_9->pVersionData, VAR_13, &VAR_17, &VAR_18)) {
    struct LANGANDCODEPAGE* VAR_21 = (struct LANGANDCODEPAGE*)VAR_17;
    struct LANGANDCODEPAGE* VAR_22 = (struct LANGANDCODEPAGE*)((LPBYTE)VAR_17+VAR_18);

    HWND VAR_23 = FUNC_0(VAR_10, VAR_2);


    for(; VAR_21<VAR_22; ++VAR_21) {
     LPCSTR* VAR_24;

     for(VAR_24=VAR_5; *VAR_24; ++VAR_24) {
      WCHAR VAR_25[200];
      WCHAR VAR_26[100];
      LPCWSTR VAR_27;
      UINT VAR_28;

      LPCSTR VAR_29 = *VAR_24;
      FUNC_7(VAR_1, 0, VAR_29, -1, VAR_26, 100);
      FUNC_13(VAR_25, VAR_14, VAR_21->wLanguage, VAR_21->wCodePage, VAR_26);


      if (FUNC_11(VAR_9->pVersionData, VAR_25, (PVOID)&VAR_27, &VAR_28)) {
       int VAR_30 = FUNC_9(VAR_23, VAR_6, 0L, (LPARAM)VAR_26);
       FUNC_9(VAR_23, VAR_8, VAR_30, (LPARAM)VAR_27);
      }
     }
    }

    FUNC_9(VAR_23, VAR_7, 0, 0);

    FUNC_8(VAR_23, FUNC_0(VAR_10,VAR_3));
   }
  }
 }
}
