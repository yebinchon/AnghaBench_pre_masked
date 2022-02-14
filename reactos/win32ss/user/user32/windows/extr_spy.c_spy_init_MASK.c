
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int LPBYTE ;
typedef int LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef char BOOL ;


 char VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (int volatile*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (void**,char*,int *) ;
 scalar_t__* VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int ,char*,int ,int*,int ,int*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ) ;
 char VAR_6 ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 char FUNC_12 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_15(void)
{
    int VAR_10;
    char VAR_11[1024];
    HKEY VAR_12;
    char *VAR_13;

    if (!FUNC_9(VAR_8)) return VAR_0;

    if (VAR_7 == VAR_5)
    {
        DWORD VAR_14 = FUNC_10();
        if (FUNC_3((volatile LONG *) &VAR_7, VAR_14, VAR_5 ) != VAR_5)
            FUNC_11( VAR_14 );
    }

    if (VAR_9) return VAR_6;
    VAR_13 = FUNC_1( FUNC_0(), VAR_1, VAR_4 + 2 );


    if(!FUNC_6(VAR_2, "Software\\Wine\\Debug", &VAR_12))
    {
        DWORD VAR_15, VAR_16 = sizeof(VAR_11);

        VAR_11[0] = 0;
        if (!FUNC_7(VAR_12, "SpyInclude", 0, &VAR_15, (LPBYTE) VAR_11, &VAR_16) &&
            FUNC_13( VAR_11, "INCLUDEALL" ))
        {
            FUNC_8("Include=%s\n", VAR_11 );
            for (VAR_10 = 0; VAR_10 <= VAR_4; VAR_10++)
                VAR_13[VAR_10] = (VAR_3[VAR_10] && !FUNC_14(VAR_11,VAR_3[VAR_10]));
        }

        VAR_16 = sizeof(VAR_11);
        VAR_11[0] = 0;
        if (!FUNC_7(VAR_12, "SpyExclude", 0, &VAR_15, (LPBYTE) VAR_11, &VAR_16))
        {
            FUNC_8("Exclude=%s\n", VAR_11 );
            if (!FUNC_13( VAR_11, "EXCLUDEALL" ))
                for (VAR_10 = 0; VAR_10 <= VAR_4; VAR_10++) VAR_13[VAR_10] = VAR_6;
            else
                for (VAR_10 = 0; VAR_10 <= VAR_4; VAR_10++)
                    VAR_13[VAR_10] = (VAR_3[VAR_10] && FUNC_14(VAR_11,VAR_3[VAR_10]));
        }

        VAR_16 = sizeof(VAR_11);
        if(!FUNC_7(VAR_12, "SpyExcludeDWP", 0, &VAR_15, (LPBYTE) VAR_11, &VAR_16))
            VAR_13[VAR_4 + 1] = FUNC_12(VAR_11);

        FUNC_5(VAR_12);
    }

    if (FUNC_4( (void **)&VAR_9, VAR_13, ((void*)0) ))
        FUNC_2( FUNC_0(), 0, VAR_13 );

    return VAR_6;
}
