
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct register_dll_info {int dummy; } ;
typedef int buffer ;
typedef char WCHAR ;
typedef int PCWSTR ;
typedef int INT ;
typedef int INFCONTEXT ;
typedef int HINF ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char*) ;
 char* FUNC_2 (int ,int ,char*,int) ;
 int VAR_0 ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int,int*) ;
 scalar_t__ FUNC_7 (int *,int,char*,int,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_8 (struct register_dll_info*,char*,int,int,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static BOOL FUNC_11( HINF VAR_2, PCWSTR VAR_3, void *VAR_4 )
{
    struct register_dll_info *VAR_5 = VAR_4;
    INFCONTEXT VAR_6;
    BOOL VAR_7 = VAR_1;
    BOOL VAR_8 = FUNC_4( VAR_2, VAR_3, ((void*)0), &VAR_6 );

    for (; VAR_8; VAR_8 = FUNC_5( &VAR_6, &VAR_6 ))
    {
        WCHAR *VAR_9, *VAR_10, *VAR_11;
        WCHAR VAR_12[VAR_0];
        INT VAR_13, VAR_14;


        if (!(VAR_9 = FUNC_3( &VAR_6 ))) continue;


        if (!FUNC_7( &VAR_6, 3, VAR_12, sizeof(VAR_12)/sizeof(WCHAR), ((void*)0) ))
            goto done;
        if (!(VAR_11 = FUNC_2( FUNC_0(), 0, VAR_9,
                               (FUNC_10(VAR_9) + FUNC_10(VAR_12) + 2) * sizeof(WCHAR) ))) goto done;
        VAR_9 = VAR_11;
        VAR_11 += FUNC_10(VAR_11);
        if (VAR_11 == VAR_9 || VAR_11[-1] != '\\') *VAR_11++ = '\\';
        FUNC_9( VAR_11, VAR_12 );


        if (!FUNC_6( &VAR_6, 4, &VAR_13 )) VAR_13 = 0;


        if (!FUNC_6( &VAR_6, 5, &VAR_14 )) VAR_14 = 60;


        VAR_10 = ((void*)0);
        if (FUNC_7( &VAR_6, 6, VAR_12, sizeof(VAR_12)/sizeof(WCHAR), ((void*)0) ))
            VAR_10 = VAR_12;

        VAR_7 = FUNC_8( VAR_5, VAR_9, VAR_13, VAR_14, VAR_10 );

    done:
        FUNC_1( FUNC_0(), 0, VAR_9 );
        if (!VAR_7) break;
    }
    return VAR_7;
}
