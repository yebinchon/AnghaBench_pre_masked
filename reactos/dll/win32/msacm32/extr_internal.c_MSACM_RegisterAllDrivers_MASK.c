
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef char WCHAR ;
typedef int HKEY ;
typedef int FILETIME ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*,scalar_t__,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*,char const*,int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,char*,scalar_t__*,int ,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,char*,scalar_t__*,int ,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,char const*,int ,int ,int *) ;
 int FUNC_8 (int ,int ,int ,int ,scalar_t__*,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;

void FUNC_12(void)
{
    static const WCHAR VAR_4[] = {'m','s','a','c','m','3','2','.','d','l','l','\0'};
    static const WCHAR VAR_5[] = {'M','S','A','C','M','.'};
    static const WCHAR VAR_6[] = {'d','r','i','v','e','r','s','3','2','\0'};
    static const WCHAR VAR_7[] = {'s','y','s','t','e','m','.','i','n','i','\0'};
    static const WCHAR VAR_8[] = {'S','o','f','t','w','a','r','e','\\',
       'M','i','c','r','o','s','o','f','t','\\',
       'W','i','n','d','o','w','s',' ','N','T','\\',
       'C','u','r','r','e','n','t','V','e','r','s','i','o','n','\\',
       'D','r','i','v','e','r','s','3','2','\0'};
    DWORD VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    WCHAR VAR_14[2048], VAR_15[64], *VAR_16, *VAR_17;
    FILETIME VAR_18;
    HKEY VAR_19;



    if (VAR_3) return;

    VAR_12 = FUNC_7(VAR_1, VAR_8, 0, VAR_2, &VAR_19);
    if (VAR_12 == VAR_0) {
 FUNC_8( VAR_19, 0, 0, 0, &VAR_10, 0, 0, 0, 0, 0, 0, 0);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
     VAR_11 = FUNC_0(VAR_14);
     VAR_12 = FUNC_5(VAR_19, VAR_9, VAR_14, &VAR_11, 0, 0, 0, &VAR_18);
     if (VAR_12 != VAR_0) continue;
     if (FUNC_9(VAR_14, VAR_5, FUNC_0(VAR_5))) continue;
     if (!(VAR_16 = FUNC_11(VAR_14, '='))) continue;
     *VAR_16 = 0;
     FUNC_2(VAR_14, VAR_16 + 1, 0);
 }
 VAR_9 = 0;
 VAR_10 = FUNC_0(VAR_15);
 VAR_11 = sizeof(VAR_14);
 while(FUNC_6(VAR_19, VAR_9, VAR_15, &VAR_10, 0,
      &VAR_13, (BYTE*)VAR_14, &VAR_11) == VAR_0){
     if (!FUNC_9(VAR_15, VAR_5, FUNC_0(VAR_5)))
  FUNC_2(VAR_15, VAR_14, 0);
     ++VAR_9;
 }
     FUNC_4( VAR_19 );
    }

    if (FUNC_1(VAR_6, VAR_14, FUNC_0(VAR_14), VAR_7))
    {
 for(VAR_17 = VAR_14; *VAR_17; VAR_17 += FUNC_10(VAR_17) + 1)
 {
     if (FUNC_9(VAR_17, VAR_5, FUNC_0(VAR_5))) continue;
     if (!(VAR_16 = FUNC_11(VAR_17, '='))) continue;
     *VAR_16 = 0;
     FUNC_2(VAR_17, VAR_16 + 1, 0);
     *VAR_16 = '=';
 }
    }
    FUNC_3();
    FUNC_2(VAR_4, VAR_4, 0);
}
