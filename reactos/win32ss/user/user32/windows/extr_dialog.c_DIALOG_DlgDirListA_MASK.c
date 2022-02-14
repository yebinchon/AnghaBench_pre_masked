
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int * LPWSTR ;
typedef scalar_t__ LPSTR ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,scalar_t__,int,int *,int) ;
 int FUNC_5 (int ,int ,int *,int,scalar_t__,int,int *,int *) ;

__attribute__((used)) static INT FUNC_6( HWND VAR_2, LPSTR VAR_3, INT VAR_4,
                               INT VAR_5, UINT VAR_6, BOOL VAR_7 )
{
    if (VAR_3)
    {
        INT VAR_8, VAR_9 = FUNC_4( VAR_0, 0, VAR_3, -1, ((void*)0), 0 );
        LPWSTR VAR_10 = FUNC_2( FUNC_1(), 0, VAR_9 * sizeof(WCHAR) );
        if (VAR_10 == ((void*)0))
            return VAR_1;
        FUNC_4( VAR_0, 0, VAR_3, -1, VAR_10, VAR_9 );
        VAR_8 = FUNC_0( VAR_2, VAR_10, VAR_4, VAR_5, VAR_6, VAR_7 );
        FUNC_5( VAR_0, 0, VAR_10, -1, VAR_3, 0x7fffffff, ((void*)0), ((void*)0) );
        FUNC_3( FUNC_1(), 0, VAR_10 );
        return VAR_8;
    }
    return FUNC_0( VAR_2, ((void*)0), VAR_4, VAR_5, VAR_6, VAR_7 );
}
