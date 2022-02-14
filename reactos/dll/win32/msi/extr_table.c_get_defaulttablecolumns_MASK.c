
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;
typedef int MSIDATABASE ;
typedef int MSICOLUMNINFO ;
typedef int LPCWSTR ;
typedef size_t DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *,size_t) ;

__attribute__((used)) static UINT FUNC_4( MSIDATABASE *VAR_6, LPCWSTR VAR_7, MSICOLUMNINFO *VAR_8, UINT *VAR_9 )
{
    const MSICOLUMNINFO *VAR_10;
    DWORD VAR_11, VAR_12;

    FUNC_0("%s\n", FUNC_1(VAR_7));

    if (!FUNC_2( VAR_7, VAR_5 ))
    {
        VAR_10 = VAR_3;
        VAR_12 = 1;
    }
    else if (!FUNC_2( VAR_7, VAR_4 ))
    {
        VAR_10 = VAR_2;
        VAR_12 = 4;
    }
    else return VAR_0;

    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
    {
        if (VAR_8 && VAR_11 < *VAR_9) VAR_8[VAR_11] = VAR_10[VAR_11];
        if (VAR_8 && VAR_11 >= *VAR_9) break;
    }
    FUNC_3( VAR_6, VAR_8, VAR_12 );
    *VAR_9 = VAR_12;
    return VAR_1;
}
