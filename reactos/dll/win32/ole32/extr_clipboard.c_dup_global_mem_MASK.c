
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef int * HGLOBAL ;
typedef int DWORD ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (void*,void*,int ) ;

__attribute__((used)) static HRESULT FUNC_5( HGLOBAL VAR_3, DWORD VAR_4, HGLOBAL *VAR_5 )
{
    void *VAR_6, *VAR_7;
    DWORD VAR_8;

    *VAR_5 = ((void*)0);
    if ( !VAR_3 ) return VAR_1;

    VAR_8 = FUNC_2(VAR_3);

    *VAR_5 = FUNC_0( VAR_4, VAR_8 );
    if ( !*VAR_5 ) return VAR_0;

    VAR_6 = FUNC_1(VAR_3);
    VAR_7 = FUNC_1(*VAR_5);

    FUNC_4(VAR_7, VAR_6, VAR_8);

    FUNC_3(*VAR_5);
    FUNC_3(VAR_3);

    return VAR_2;
}
