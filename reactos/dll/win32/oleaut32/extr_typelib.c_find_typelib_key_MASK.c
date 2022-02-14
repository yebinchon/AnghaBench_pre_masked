
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int typelibW ;
typedef int key_name ;
typedef int WORD ;
typedef char WCHAR ;
typedef int REFGUID ;
typedef scalar_t__ INT ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,...) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static BOOL FUNC_9( REFGUID VAR_5, WORD *VAR_6, WORD *VAR_7 )
{
    static const WCHAR VAR_8[] = {'T','y','p','e','l','i','b','\\',0};
    WCHAR VAR_9[60];
    char VAR_10[16];
    DWORD VAR_11, VAR_12;
    INT VAR_13 = -1, VAR_14 = -1;
    HKEY VAR_15;

    FUNC_6( VAR_9, VAR_8, sizeof(VAR_8) );
    FUNC_3( VAR_5, VAR_9 + FUNC_8(VAR_9), 40 );

    if (FUNC_2( VAR_2, VAR_9, 0, VAR_3, &VAR_15 ) != VAR_0)
        return VAR_1;

    VAR_11 = sizeof(VAR_10);
    VAR_12 = 0;
    while (FUNC_1(VAR_15, VAR_12++, VAR_10, &VAR_11, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) == VAR_0)
    {
        INT VAR_16, VAR_17;

        if (FUNC_7(VAR_10, "%x.%x", &VAR_16, &VAR_17) == 2)
        {
            FUNC_4("found %s: %x.%x\n", FUNC_5(VAR_9), VAR_16, VAR_17);

            if (*VAR_6 == 0xffff && *VAR_7 == 0xffff)
            {
                if (VAR_16 > VAR_13) VAR_13 = VAR_16;
                if (VAR_17 > VAR_14) VAR_14 = VAR_17;
            }
            else if (*VAR_6 == VAR_16)
            {
                VAR_13 = VAR_16;

                if (*VAR_7 == VAR_17)
                {
                    VAR_14 = VAR_17;
                    break;
                }
                if (*VAR_7 != 0xffff && VAR_17 > VAR_14) VAR_14 = VAR_17;
            }
        }
        VAR_11 = sizeof(VAR_10);
    }
    FUNC_0( VAR_15 );

    FUNC_4("found best_maj %d, best_min %d\n", VAR_13, VAR_14);

    if (*VAR_6 == 0xffff && *VAR_7 == 0xffff)
    {
        if (VAR_13 >= 0 && VAR_14 >= 0)
        {
            *VAR_6 = VAR_13;
            *VAR_7 = VAR_14;
            return VAR_4;
        }
    }

    if (*VAR_6 == VAR_13 && VAR_14 >= 0)
    {
        *VAR_7 = VAR_14;
        return VAR_4;
    }
    return VAR_1;
}
