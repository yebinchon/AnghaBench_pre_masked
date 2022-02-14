
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VS_FIXEDFILEINFO ;
typedef int UINT ;
typedef void* LPVOID ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ,void*) ;
 int FUNC_2 (void*,char const*,void**,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;

VS_FIXEDFILEINFO *FUNC_6( LPCWSTR VAR_0 )
{
    static const WCHAR VAR_1[] = {'\\',0};
    VS_FIXEDFILEINFO *VAR_2, *VAR_3;
    LPVOID VAR_4;
    DWORD VAR_5, VAR_6;
    UINT VAR_7;

    VAR_5 = FUNC_0( VAR_0, &VAR_6 );
    if (!VAR_5)
        return ((void*)0);

    VAR_4 = FUNC_4( VAR_5 );
    if (!VAR_4)
        return ((void*)0);

    FUNC_1( VAR_0, 0, VAR_5, VAR_4 );

    if (!FUNC_2( VAR_4, VAR_1, (LPVOID *)&VAR_2, &VAR_7 ))
    {
        FUNC_5( VAR_4 );
        return ((void*)0);
    }

    VAR_3 = FUNC_4( VAR_7 );
    FUNC_3( VAR_3, VAR_2, VAR_7 );

    FUNC_5( VAR_4 );
    return VAR_3;
}
