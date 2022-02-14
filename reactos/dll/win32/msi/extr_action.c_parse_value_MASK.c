
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int MSIPACKAGE ;
typedef char* LPWSTR ;
typedef int* LPDWORD ;
typedef int DWORD ;
typedef char CHAR ;
typedef scalar_t__ BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char const*,char**) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,int *,int ) ;

__attribute__((used)) static BYTE *FUNC_7( MSIPACKAGE *VAR_5, const WCHAR *VAR_6, DWORD VAR_7, DWORD *VAR_8, DWORD *VAR_9 )
{
    BYTE *VAR_10;

    if (!VAR_6)
    {
        *VAR_9 = sizeof(WCHAR);
        *VAR_8 = VAR_4;
        if ((VAR_10 = FUNC_2( *VAR_9 ))) *(WCHAR *)VAR_10 = 0;
        return VAR_10;
    }
    if (VAR_6[0]=='#' && VAR_6[1]!='#' && VAR_6[1]!='%')
    {
        if (VAR_6[1]=='x')
        {
            LPWSTR VAR_11;
            CHAR VAR_12[5];
            LPWSTR VAR_13 = ((void*)0);
            int VAR_14;

            FUNC_1(VAR_5, &VAR_6[2], &VAR_13);


            VAR_11 = VAR_13;
            *VAR_8 = VAR_0;
            if (FUNC_5(VAR_11)%2)
                *VAR_9 = (FUNC_5(VAR_11)/2)+1;
            else
                *VAR_9 = FUNC_5(VAR_11)/2;

            VAR_10 = FUNC_2(*VAR_9);

            VAR_12[0] = '0';
            VAR_12[1] = 'x';
            VAR_12[4] = 0;
            VAR_14 = 0;

            if (FUNC_5(VAR_11)%2)
            {
                VAR_12[2]= '0';
                VAR_12[3]= *VAR_11;
                VAR_11++;
                VAR_10[VAR_14] = (BYTE)FUNC_6(VAR_12,((void*)0),0);
                VAR_14 ++;
                FUNC_0("Uneven byte count\n");
            }
            while (*VAR_11)
            {
                VAR_12[2]= *VAR_11;
                VAR_11++;
                VAR_12[3]= *VAR_11;
                VAR_11++;
                VAR_10[VAR_14] = (BYTE)FUNC_6(VAR_12,((void*)0),0);
                VAR_14 ++;
            }
            FUNC_3(VAR_13);

            FUNC_0("Data %i bytes(%i)\n",*VAR_9,VAR_14);
        }
        else
        {
            LPWSTR VAR_15;
            LPWSTR VAR_16;
            DWORD VAR_17 = 0;
            FUNC_1(VAR_5, &VAR_6[1], &VAR_15);

            *VAR_8=VAR_1;
            *VAR_9 = sizeof(DWORD);
            VAR_10 = FUNC_2(*VAR_9);
            VAR_16 = VAR_15;
            if (*VAR_16 == '-')
                VAR_16++;
            while (*VAR_16)
            {
                if ( (*VAR_16 < '0') || (*VAR_16 > '9') )
                    break;
                VAR_17 *= 10;
                VAR_17 += (*VAR_16 - '0');
                VAR_16++;
            }
            if (VAR_15[0] == '-')
                VAR_17 = -VAR_17;
            *(LPDWORD)VAR_10 = VAR_17;
            FUNC_0("DWORD %i\n",*(LPDWORD)VAR_10);

            FUNC_3(VAR_15);
        }
    }
    else
    {
        const WCHAR *VAR_18 = VAR_6;

        *VAR_8 = VAR_4;
        if (VAR_6[0] == '#')
        {
            VAR_18++; VAR_7--;
            if (VAR_6[1] == '%')
            {
                VAR_18++; VAR_7--;
                *VAR_8 = VAR_2;
            }
        }
        VAR_10 = (BYTE *)FUNC_4( VAR_18, VAR_7 );
        if (VAR_7 > FUNC_5( (const WCHAR *)VAR_10 )) *VAR_8 = VAR_3;
        *VAR_9 = (VAR_7 + 1) * sizeof(WCHAR);
    }
    return VAR_10;
}
