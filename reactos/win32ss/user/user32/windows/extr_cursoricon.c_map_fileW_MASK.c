
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* LPVOID ;
typedef int * LPDWORD ;
typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 void* FUNC_4 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void *FUNC_5( LPCWSTR VAR_7, LPDWORD VAR_8 )
{
    HANDLE VAR_9, VAR_10;
    LPVOID VAR_11 = ((void*)0);

    VAR_9 = FUNC_2( VAR_7, VAR_3, VAR_2, ((void*)0),
                         VAR_5, VAR_0, 0 );
    if (VAR_9 != VAR_4)
    {
        VAR_10 = FUNC_1( VAR_9, ((void*)0), VAR_6, 0, 0, ((void*)0) );
        if (VAR_10)
        {
            VAR_11 = FUNC_4( VAR_10, VAR_1, 0, 0, 0 );
            FUNC_0( VAR_10 );
            if (VAR_8)
                *VAR_8 = FUNC_3( VAR_9, ((void*)0) );
        }
        FUNC_0( VAR_9 );
    }
    return VAR_11;
}
