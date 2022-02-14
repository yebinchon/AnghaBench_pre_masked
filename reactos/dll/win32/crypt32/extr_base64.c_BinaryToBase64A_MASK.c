
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* LPSTR ;
typedef char const* LPCSTR ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int FUNC_1 (int const*,int,char const*,char const*,int*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static BOOL FUNC_4(const BYTE *VAR_11,
 DWORD VAR_12, DWORD VAR_13, LPSTR VAR_14, DWORD *VAR_15)
{
    static const char VAR_16[] = "\r\n", VAR_17[] = "\n";
    BOOL VAR_18 = VAR_8;
    LPCSTR VAR_19 = ((void*)0), VAR_20 = ((void*)0), VAR_21;
    DWORD VAR_22;

    if (VAR_13 & VAR_4)
        VAR_21 = VAR_17;
    else if (VAR_13 & VAR_5)
        VAR_21 = "";
    else
        VAR_21 = VAR_16;
    switch (VAR_13 & 0x0fffffff)
    {
    case 131:

        break;
    case 130:
        VAR_19 = VAR_0;
        VAR_20 = VAR_3;
        break;
    case 129:
        VAR_19 = VAR_1;
        VAR_20 = VAR_2;
        break;
    case 128:
        VAR_19 = VAR_9;
        VAR_20 = VAR_10;
        break;
    }

    VAR_22 = 0;
    FUNC_1(VAR_11, VAR_12, VAR_21, ((void*)0), &VAR_22);
    if (VAR_19)
        VAR_22 += FUNC_3(VAR_19) + FUNC_3(VAR_21);
    if (VAR_20)
        VAR_22 += FUNC_3(VAR_20) + FUNC_3(VAR_21);

    if (VAR_14)
    {
        if (VAR_22 <= *VAR_15)
        {
            LPSTR VAR_23 = VAR_14;
            DWORD VAR_24 = VAR_22;

            if (VAR_19)
            {
                FUNC_2(VAR_23, VAR_19);
                VAR_23 += FUNC_3(VAR_23);
                FUNC_2(VAR_23, VAR_21);
                VAR_23 += FUNC_3(VAR_21);
            }
            FUNC_1(VAR_11, VAR_12, VAR_21, VAR_23, &VAR_24);
            VAR_23 += VAR_24 - 1;
            if (VAR_20)
            {
                FUNC_2(VAR_23, VAR_20);
                VAR_23 += FUNC_3(VAR_23);
               FUNC_2(VAR_23, VAR_21);
            }
            *VAR_15 = VAR_22 - 1;
        }
        else
        {
            *VAR_15 = VAR_22;
            FUNC_0(VAR_6);
            VAR_18 = VAR_7;
        }
    }
    else
        *VAR_15 = VAR_22;

    return VAR_18;
}
