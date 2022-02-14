
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_args {int last; scalar_t__ list; } ;
typedef char WCHAR ;
typedef char ULONG_PTR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ,char const*,int,char*,int) ;
 char FUNC_4 (int,int,struct format_args*) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*,int,char*,char) ;
 int FUNC_8 (char*,char const*,char) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static LPCWSTR FUNC_11( BOOL VAR_1, int VAR_2, LPCWSTR VAR_3,
                              DWORD VAR_4, struct format_args *VAR_5,
                              LPWSTR *VAR_6 )
{
    static const WCHAR VAR_7[] = {'%','u',0};
    WCHAR *VAR_8 = ((void*)0), *VAR_9, VAR_10[256];
    ULONG_PTR VAR_11;
    int VAR_12;

    if (*VAR_3 != '!')
    {
        VAR_11 = FUNC_4( VAR_2, VAR_4, VAR_5 );
        if (VAR_1 || !VAR_11)
        {
            static const WCHAR VAR_13[] = {'(','n','u','l','l',')',0};
            const WCHAR *VAR_14 = (const WCHAR *)VAR_11;

            if (!VAR_14) VAR_14 = VAR_13;
            *VAR_6 = FUNC_1( FUNC_0(), 0, (FUNC_10(VAR_14) + 1) * sizeof(WCHAR) );
            FUNC_9( *VAR_6, VAR_14 );
        }
        else
        {
            const char *VAR_15 = (const char *)VAR_11;
            DWORD VAR_16 = FUNC_3( VAR_0, 0, VAR_15, -1, ((void*)0), 0 );
            *VAR_6 = FUNC_1( FUNC_0(), 0, VAR_16 * sizeof(WCHAR) );
            FUNC_3( VAR_0, 0, VAR_15, -1, *VAR_6, VAR_16 );
        }
        return VAR_3;
    }

    VAR_3++;
    VAR_9 = VAR_10;
    *VAR_9++ = '%';

    while (*VAR_3 == '0' ||
           *VAR_3 == '+' ||
           *VAR_3 == '-' ||
           *VAR_3 == ' ' ||
           *VAR_3 == '*' ||
           *VAR_3 == '#')
    {
        if (*VAR_3 == '*')
        {
            VAR_9 += FUNC_8( VAR_9, VAR_7, FUNC_4( VAR_2, VAR_4, VAR_5 ));
            VAR_2 = -1;
            VAR_3++;
        }
        else *VAR_9++ = *VAR_3++;
    }
    while (FUNC_5(*VAR_3)) *VAR_9++ = *VAR_3++;

    if (*VAR_3 == '.')
    {
        *VAR_9++ = *VAR_3++;
        if (*VAR_3 == '*')
        {
            VAR_9 += FUNC_8( VAR_9, VAR_7, FUNC_4( VAR_2, VAR_4, VAR_5 ));
            VAR_2 = -1;
            VAR_3++;
        }
        else
            while (FUNC_5(*VAR_3)) *VAR_9++ = *VAR_3++;
    }


    if (VAR_2 == -1 && VAR_5->list) VAR_5->last--;
    VAR_11 = FUNC_4( VAR_2, VAR_4, VAR_5 );


    if ((VAR_3[0] == 'h' && VAR_3[1] == 's') ||
        (VAR_3[0] == 'h' && VAR_3[1] == 'S') ||
        (VAR_1 && VAR_3[0] == 'S') ||
        (!VAR_1 && VAR_3[0] == 's'))
    {
        DWORD VAR_17 = FUNC_3( VAR_0, 0, (char *)VAR_11, -1, ((void*)0), 0 );
        VAR_8 = FUNC_1( FUNC_0(), 0, VAR_17 * sizeof(WCHAR) );
        FUNC_3( VAR_0, 0, (char *)VAR_11, -1, VAR_8, VAR_17 );
        VAR_11 = (ULONG_PTR)VAR_8;
        *VAR_9++ = 's';
    }

    else if ((VAR_3[0] == 'h' && VAR_3[1] == 'c') ||
             (VAR_3[0] == 'h' && VAR_3[1] == 'C') ||
             (VAR_1 && VAR_3[0] == 'C') ||
             (!VAR_1 && VAR_3[0] == 'c'))
    {
        char VAR_18 = VAR_11;
        VAR_8 = FUNC_1( FUNC_0(), 0, 2 * sizeof(WCHAR) );
        FUNC_3( VAR_0, 0, &VAR_18, 1, VAR_8, 1 );
        VAR_8[1] = 0;
        VAR_11 = (ULONG_PTR)VAR_8;
        *VAR_9++ = 's';
    }

    else if ((VAR_3[0] == 'l' && VAR_3[1] == 's') ||
             (VAR_3[0] == 'l' && VAR_3[1] == 'S') ||
             (VAR_3[0] == 'w' && VAR_3[1] == 's') ||
             (!VAR_1 && VAR_3[0] == 'S'))
    {
        *VAR_9++ = 's';
    }

    else if ((VAR_3[0] == 'l' && VAR_3[1] == 'c') ||
             (VAR_3[0] == 'l' && VAR_3[1] == 'C') ||
             (VAR_3[0] == 'w' && VAR_3[1] == 'c') ||
             (!VAR_1 && VAR_3[0] == 'C'))
    {
        *VAR_9++ = 'c';
    }

    else while (*VAR_3 && *VAR_3 != '!') *VAR_9++ = *VAR_3++;

    *VAR_9 = 0;
    VAR_12 = 256;
    for (;;)
    {
        WCHAR *VAR_19 = FUNC_1( FUNC_0(), 0, VAR_12 * sizeof(WCHAR) );
        int VAR_20 = FUNC_7( VAR_19, VAR_12, VAR_10, VAR_11 );
        if (VAR_20 == -1 || VAR_20 >= VAR_12)
        {
            FUNC_2( FUNC_0(), 0, VAR_19 );
            VAR_12 = FUNC_6( VAR_20 + 1, VAR_12 * 2 );
        }
        else
        {
            *VAR_6 = VAR_19;
            break;
        }
    }

    while (*VAR_3 && *VAR_3 != '!') VAR_3++;
    if (*VAR_3 == '!') VAR_3++;

    FUNC_2( FUNC_0(), 0, VAR_8 );
    return VAR_3;
}
