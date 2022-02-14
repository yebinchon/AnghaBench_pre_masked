
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ USHORT ;
typedef scalar_t__ LANGID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*,int ,void**,int*) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (int const*,int*) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_3( const void *VAR_3, const WCHAR *VAR_4 )
{
    struct lang
    {
        USHORT id;
        USHORT codepage;
    } *VAR_5;
    DWORD VAR_6, VAR_7, VAR_8, VAR_9;
    BOOL VAR_10 = VAR_0;
    LANGID *VAR_11;

    if (!VAR_4 || !VAR_4[0]) return VAR_1;
    if (!FUNC_0( VAR_3, VAR_2, (void **)&VAR_5, &VAR_6 )) return VAR_0;
    if (!(VAR_11 = FUNC_2( VAR_4, &VAR_7 ))) return VAR_0;

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    {
        VAR_10 = VAR_0;
        for (VAR_9 = 0; VAR_9 < VAR_6 / sizeof(struct lang); VAR_9++)
        {
            if (!VAR_11[VAR_8] || VAR_11[VAR_8] == VAR_5[VAR_9].id) VAR_10 = VAR_1;
        }
        if (!VAR_10) goto done;
    }

done:
    FUNC_1( VAR_11 );
    return VAR_10;
}
