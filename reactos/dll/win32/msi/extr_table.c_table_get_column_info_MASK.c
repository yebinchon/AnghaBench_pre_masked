
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIDATABASE ;
typedef int MSICOLUMNINFO ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *,scalar_t__*) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static UINT FUNC_5( MSIDATABASE *VAR_3, LPCWSTR VAR_4, MSICOLUMNINFO **VAR_5, UINT *VAR_6 )
{
    UINT VAR_7, VAR_8 = 0;
    MSICOLUMNINFO *VAR_9;


    VAR_8 = 0;
    VAR_7 = FUNC_2( VAR_3, VAR_4, ((void*)0), &VAR_8 );
    if (VAR_7 != VAR_2)
        return VAR_7;

    *VAR_6 = VAR_8;


    if (!VAR_8)
        return VAR_1;

    FUNC_0("table %s found\n", FUNC_1(VAR_4));

    VAR_9 = FUNC_3( VAR_8 * sizeof(MSICOLUMNINFO) );
    if (!VAR_9)
        return VAR_0;

    VAR_7 = FUNC_2( VAR_3, VAR_4, VAR_9, &VAR_8 );
    if (VAR_7 != VAR_2)
    {
        FUNC_4( VAR_9 );
        return VAR_0;
    }
    *VAR_5 = VAR_9;
    return VAR_7;
}
