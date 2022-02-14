
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef float WCHAR ;
typedef int MSIPACKAGE ;
typedef float* LPWSTR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (float*) ;
 int FUNC_1 (float*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,float const*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,float const*,int ,int ,int *) ;
 int FUNC_5 (int ,float const*,int *,int*,int *,int*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (float*) ;
 float* FUNC_8 (int) ;
 int FUNC_9 (float*,float const*) ;
 int FUNC_10 (float*,float*) ;
 int FUNC_11 (float const*) ;
 float const* VAR_6 ;

__attribute__((used)) static LPWSTR FUNC_12(MSIPACKAGE *VAR_7)
{
    static const WCHAR VAR_8[] =
        {'f','u','s','i','o','n','.','d','l','l',0};
    static const WCHAR VAR_9[] =
        {'S','o','f','t','w','a','r','e','\\','M','i','c','r','o','s','o','f','t','\\',
         'N','E','T',' ','F','r','a','m','e','w','o','r','k',' ','S','e','t','u','p','\\','N','D','P',0};
    static const WCHAR VAR_10[] =
        {'M','i','c','r','o','s','o','f','t','.','N','E','T','\\','F','r','a','m','e','w','o','r','k','\\',0};
    static const WCHAR VAR_11[] =
        {'v','2','.','0','.','5','0','7','2','7',0};
    static const WCHAR VAR_12[] =
        {'v','4','\\','C','l','i','e','n','t',0};
    static const WCHAR VAR_13[] =
        {'I','n','s','t','a','l','l','P','a','t','h',0};
    HKEY VAR_14, VAR_15;
    LONG VAR_16;
    DWORD VAR_17, VAR_18, VAR_19;
    WCHAR VAR_20[VAR_5], VAR_21[VAR_5], *VAR_22 = ((void*)0);

    VAR_16 = FUNC_4(VAR_1, VAR_9, 0, VAR_3, &VAR_14);
    if (VAR_16 != VAR_0)
        return ((void*)0);

    if (!FUNC_3(VAR_14, VAR_12, 0, ((void*)0), 0, VAR_4, ((void*)0), &VAR_15, ((void*)0)))
    {
        VAR_17 = sizeof(VAR_21)/sizeof(VAR_21[0]);
        if (!FUNC_5(VAR_15, VAR_13, ((void*)0), &VAR_19, (BYTE *)VAR_21, &VAR_17))
        {
            VAR_18 = FUNC_11(VAR_21) + FUNC_11(VAR_8) + 2;
            if (!(VAR_22 = FUNC_8(VAR_18 * sizeof(WCHAR)))) return ((void*)0);

            FUNC_10(VAR_22, VAR_21);
            FUNC_9(VAR_22, VAR_6);
            FUNC_9(VAR_22, VAR_8);
            if (FUNC_0(VAR_22) != VAR_2)
            {
                FUNC_6( "found %s\n", FUNC_7(VAR_22) );
                FUNC_2(VAR_15);
                FUNC_2(VAR_14);
                return VAR_22;
            }
        }
        FUNC_2(VAR_15);
    }

    if (!FUNC_3(VAR_14, VAR_11, 0, ((void*)0), 0, VAR_4, ((void*)0), &VAR_15, ((void*)0)))
    {
        FUNC_2(VAR_15);
        FUNC_1(VAR_20, VAR_5);
        VAR_18 = FUNC_11(VAR_20) + FUNC_11(VAR_10) + FUNC_11(VAR_11) + FUNC_11(VAR_8) + 3;
        if (!(VAR_22 = FUNC_8(VAR_18 * sizeof(WCHAR)))) return ((void*)0);

        FUNC_10(VAR_22, VAR_20);
        FUNC_9(VAR_22, VAR_6);
        FUNC_9(VAR_22, VAR_10);
        FUNC_9(VAR_22, VAR_11);
        FUNC_9(VAR_22, VAR_6);
        FUNC_9(VAR_22, VAR_8);
        if (FUNC_0(VAR_22) != VAR_2)
        {
            FUNC_6( "found %s\n", FUNC_7(VAR_22) );
            FUNC_2(VAR_14);
            return VAR_22;
        }
    }

    FUNC_2(VAR_14);
    return VAR_22;
}
