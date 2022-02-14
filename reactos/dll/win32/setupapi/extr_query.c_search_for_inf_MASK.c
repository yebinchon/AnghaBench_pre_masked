
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char const* LPCVOID ;
typedef scalar_t__ HINF ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,int *,int,int *) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static HINF FUNC_4(LPCVOID VAR_5, DWORD VAR_6)
{
    HINF VAR_7 = VAR_3;
    WCHAR VAR_8[VAR_4];

    static const WCHAR VAR_9[] = {'\\','i','n','f','\\',0};
    static const WCHAR VAR_10[] = {'\\','s','y','s','t','e','m','3','2','\\',0};

    if (VAR_6 == VAR_0)
    {
        FUNC_0(VAR_8, VAR_4);
        FUNC_2(VAR_8, VAR_10);
        FUNC_2(VAR_8, VAR_5);

        VAR_7 = FUNC_1(VAR_8, ((void*)0),
                                 VAR_1 | VAR_2, ((void*)0));
        if (VAR_7 != VAR_3)
            return VAR_7;

        FUNC_0(VAR_8, VAR_4);
        FUNC_3(VAR_8, VAR_9);
        FUNC_2(VAR_8, VAR_5);

        return FUNC_1(VAR_8, ((void*)0),
                                 VAR_1 | VAR_2, ((void*)0));
    }

    return VAR_3;
}
