
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int * FUNC_0 (char*,scalar_t__,scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (char**,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_7(WCHAR **VAR_5, DWORD *VAR_6, DWORD *VAR_7, DWORD VAR_8, BYTE *VAR_9, DWORD VAR_10, BOOL VAR_11)
{
    DWORD VAR_12, VAR_13;
    const WCHAR *VAR_14;
    const WCHAR VAR_15[] = {'h','e','x',':',0};
    WCHAR VAR_16[17];
    const WCHAR VAR_17[] = {'\\','\r','\n',' ',' ',0};
    DWORD VAR_18, VAR_19;
    const WCHAR VAR_20[] = {'\r','\n',0};
    CHAR* VAR_21 = ((void*)0);

    if (VAR_8 == VAR_0) {
        VAR_14 = VAR_15;
    } else {
        const WCHAR VAR_22[] = {'h','e','x','(','%','x',')',':',0};
        VAR_14 = VAR_16;
        FUNC_6(VAR_16, VAR_22, VAR_8);
        if ((VAR_8 == VAR_4 || VAR_8 == VAR_1 || VAR_8 == VAR_3) && !VAR_11)
        {
            VAR_21 = FUNC_0((WCHAR*)VAR_9, VAR_10 / sizeof(WCHAR), &VAR_10);
            VAR_9 = (BYTE*)VAR_21;
        }
    }

    VAR_19 = FUNC_5(VAR_17);
    VAR_18 = 2;

    VAR_12 = *VAR_7;
    *VAR_7 += FUNC_5(VAR_14);
    VAR_13 = *VAR_7;
    *VAR_7 += VAR_10 * 3;
    *VAR_7 += *VAR_7 / (VAR_2 - VAR_18) * VAR_19 + 1;
    FUNC_3(VAR_5, VAR_6, *VAR_7);
    FUNC_4(*VAR_5 + VAR_12, VAR_14);
    if (VAR_10)
    {
        const WCHAR VAR_23[] = {'%','0','2','x',0};
        DWORD VAR_24, VAR_25;

        VAR_25 = VAR_13;
        VAR_24 = 0;
        while (1)
        {
            FUNC_6(*VAR_5 + VAR_13, VAR_23, (unsigned int)VAR_9[VAR_24]);
            VAR_13 += 2;
            if (++VAR_24 == VAR_10)
                break;

            (*VAR_5)[VAR_13++] = ',';
            VAR_25 += 3;


            if (VAR_25 >= VAR_2) {
                FUNC_4(*VAR_5 + VAR_13, VAR_17);
                VAR_13 += VAR_19;
                VAR_25 = VAR_18;
            }
        }
    }
    FUNC_4(*VAR_5 + VAR_13, VAR_20);
    FUNC_2(FUNC_1(), 0, VAR_21);
}
