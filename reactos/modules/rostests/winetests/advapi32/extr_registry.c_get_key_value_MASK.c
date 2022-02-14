
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dw ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int ,int *,int ,scalar_t__,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int *,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_4( HKEY VAR_3, const char *VAR_4, DWORD VAR_5 )
{
    HKEY VAR_6;
    DWORD VAR_7, VAR_8, VAR_9, VAR_10 = sizeof(VAR_9);

    VAR_7 = FUNC_1( VAR_3, VAR_4, 0, ((void*)0), 0, VAR_5 | VAR_2, ((void*)0), &VAR_6, ((void*)0) );
    if (VAR_7 == VAR_0) return 0;
    FUNC_3( VAR_7 == VAR_1, "%08x: RegCreateKeyEx failed: %u\n", VAR_5, VAR_7 );

    VAR_7 = FUNC_2( VAR_6, "value", ((void*)0), &VAR_8, (BYTE *)&VAR_9, &VAR_10 );
    if (VAR_7 == VAR_0)
        VAR_9 = 0;
    else
        FUNC_3( VAR_7 == VAR_1, "%08x: RegQueryValueEx failed: %u\n", VAR_5, VAR_7 );
    FUNC_0( VAR_6 );
    return VAR_9;
}
