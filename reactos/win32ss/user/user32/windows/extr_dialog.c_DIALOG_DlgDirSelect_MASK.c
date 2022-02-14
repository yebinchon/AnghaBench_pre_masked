
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__* LPSTR ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (char*,int,int ,...) ;
 int FUNC_6 (int ,int ,char*,int,scalar_t__*,scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,char*,scalar_t__) ;
 int * FUNC_10 (char*,char) ;
 size_t FUNC_11 (char*) ;

__attribute__((used)) static BOOL FUNC_12( HWND VAR_9, LPWSTR VAR_10, INT VAR_11,
                                 INT VAR_12, BOOL VAR_13, BOOL VAR_14 )
{
    WCHAR *VAR_15, *VAR_16;
    INT VAR_17, VAR_18;
    BOOL VAR_19;
    HWND VAR_20 = FUNC_0( VAR_9, VAR_12 );

    FUNC_5("%p %s %d\n", VAR_9, VAR_13 ? FUNC_8(VAR_10) : FUNC_7((LPSTR)VAR_10), VAR_12 );
    if (!VAR_20) return VAR_4;

    VAR_17 = FUNC_4(VAR_20, VAR_14 ? VAR_0 : VAR_6, 0, 0 );
    if (VAR_17 == VAR_5) return VAR_4;

    VAR_18 = FUNC_4(VAR_20, VAR_14 ? VAR_2 : VAR_8, VAR_17, 0 );
    if (VAR_18 == VAR_5) return VAR_4;

    if (!(VAR_15 = FUNC_2( FUNC_1(), 0, (VAR_18+2) * sizeof(WCHAR) ))) return VAR_4;

    FUNC_4( VAR_20, VAR_14 ? VAR_1 : VAR_7, VAR_17, (LPARAM)VAR_15 );

    if ((VAR_19 = (VAR_15[0] == '[')))
    {
        if (VAR_15[1] == '-')
        {
            VAR_15[3] = ':';
            VAR_15[4] = 0;
            VAR_16 = VAR_15 + 2;
        }
        else
        {
            VAR_15[FUNC_11(VAR_15)-1] = '\\';
            VAR_16 = VAR_15 + 1;
        }
    }
    else
    {

        if (FUNC_10(VAR_15, '.') == ((void*)0))
        {
            VAR_15[FUNC_11(VAR_15)+1] = '\0';
            VAR_15[FUNC_11(VAR_15)] = '.';
        }
        VAR_16 = VAR_15;
    }

    if (!VAR_13)
    {
        if (VAR_11 > 0 && !FUNC_6( VAR_3, 0, VAR_16, -1, (LPSTR)VAR_10, VAR_11, 0, 0 ))
            ((LPSTR)VAR_10)[VAR_11-1] = 0;
    }
    else FUNC_9( VAR_10, VAR_16, VAR_11 );
    FUNC_3( FUNC_1(), 0, VAR_15 );
    FUNC_5("Returning %d %s\n", VAR_19, VAR_13 ? FUNC_8(VAR_10) : FUNC_7((LPSTR)VAR_10) );
    return VAR_19;
}
