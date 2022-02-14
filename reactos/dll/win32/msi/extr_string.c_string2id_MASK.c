
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codepage; } ;
typedef TYPE_1__ string_table ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int * LPWSTR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*,int *,int,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_6( const string_table *VAR_3, const char *VAR_4, UINT *VAR_5 )
{
    DWORD VAR_6;
    UINT VAR_7 = VAR_0;
    LPWSTR VAR_8;

    FUNC_1("Finding string %s in string table\n", FUNC_2(VAR_4) );

    if( VAR_4[0] == 0 )
    {
        *VAR_5 = 0;
        return VAR_2;
    }

    VAR_6 = FUNC_0( VAR_3->codepage, 0, VAR_4, -1, ((void*)0), 0 );
    if( VAR_6 <= 0 )
        return VAR_7;
    VAR_8 = FUNC_3( VAR_6*sizeof(WCHAR) );
    if( !VAR_8 )
        return VAR_1;
    FUNC_0( VAR_3->codepage, 0, VAR_4, -1, VAR_8, VAR_6 );

    VAR_7 = FUNC_5( VAR_3, VAR_8, VAR_6 - 1, VAR_5 );
    FUNC_4( VAR_8 );
    return VAR_7;
}
