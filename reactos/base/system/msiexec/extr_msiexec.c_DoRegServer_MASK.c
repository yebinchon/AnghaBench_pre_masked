
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int SC_HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,char const*,int ,int ,int ,int ,char*,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char const*) ;
 int VAR_8 ;

__attribute__((used)) static DWORD FUNC_7(void)
{
    static const WCHAR VAR_9[] = {'M','S','I','S','e','r','v','e','r',0};
    static const WCHAR VAR_10[] = {'\\','m','s','i','e','x','e','c',' ','/','V',0};
    SC_HANDLE VAR_11, VAR_12;
    WCHAR VAR_13[VAR_2+12];
    DWORD VAR_14, VAR_15 = 0;

    if (!(VAR_11 = FUNC_4(((void*)0), VAR_4, VAR_3)))
    {
        FUNC_5(VAR_8, "Failed to open the service control manager.\n");
        return 1;
    }
    VAR_14 = FUNC_3(VAR_13, VAR_2);
    FUNC_6(VAR_13 + VAR_14, VAR_10);
    if ((VAR_12 = FUNC_1(VAR_11, VAR_9, VAR_9, VAR_1,
                                  VAR_7, VAR_5,
                                  VAR_6, VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0))))
    {
        FUNC_0(VAR_12);
    }
    else if (FUNC_2() != VAR_0)
    {
        FUNC_5(VAR_8, "Failed to create MSI service\n");
        VAR_15 = 1;
    }
    FUNC_0(VAR_11);
    return VAR_15;
}
