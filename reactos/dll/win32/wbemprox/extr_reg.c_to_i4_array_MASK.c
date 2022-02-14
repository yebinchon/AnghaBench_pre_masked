
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int SAFEARRAY ;
typedef size_t LONG ;
typedef int HRESULT ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t*,size_t*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_4( DWORD *VAR_4, DWORD VAR_5, VARIANT *VAR_6 )
{
    SAFEARRAY *VAR_7;
    HRESULT VAR_8;
    LONG VAR_9;

    if (!(VAR_7 = FUNC_0( VAR_3, 0, VAR_5 ))) return VAR_0;
    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
    {
        if ((VAR_8 = FUNC_2( VAR_7, &VAR_9, &VAR_4[VAR_9] )) != VAR_1)
        {
            FUNC_1( VAR_7 );
            return VAR_8;
        }
    }
    FUNC_3( VAR_3|VAR_2, 0, VAR_7, VAR_6 );
    return VAR_1;
}
