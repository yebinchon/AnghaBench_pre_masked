
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int SAFEARRAY ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,void**) ;
 int * FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (void*,void*,int ) ;
 int FUNC_6 (int,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_7( void *VAR_4, DWORD VAR_5, VARIANT *VAR_6 )
{
    SAFEARRAY *VAR_7;
    void *VAR_8;
    HRESULT VAR_9;

    if (!(VAR_7 = FUNC_2( VAR_3, 0, VAR_5 ))) return VAR_0;

    VAR_9 = FUNC_1( VAR_7, &VAR_8 );

    if (FUNC_0(VAR_9))
    {
        FUNC_5( VAR_8, VAR_4, VAR_5 );

        FUNC_4( VAR_7 );
    }
    else
    {
        FUNC_3( VAR_7 );
        return VAR_9;
    }

    FUNC_6( VAR_3|VAR_2, 0, VAR_7, VAR_6 );
    return VAR_1;
}
