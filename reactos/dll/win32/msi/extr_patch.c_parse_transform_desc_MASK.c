
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transform_desc {scalar_t__* upgrade_code; scalar_t__* version_to; scalar_t__* product_code_to; scalar_t__* version_from; scalar_t__* product_code_from; } ;
typedef char WCHAR ;
typedef int UINT ;


 int FUNC_0 (struct transform_desc*) ;
 int FUNC_1 (scalar_t__*,char const*,int) ;
 void* FUNC_2 (int) ;
 struct transform_desc* FUNC_3 (int) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static struct transform_desc *FUNC_5( const WCHAR *VAR_0 )
{
    struct transform_desc *VAR_1;
    const WCHAR *VAR_2 = VAR_0, *VAR_3;
    UINT VAR_4;

    if (!(VAR_1 = FUNC_3( sizeof(*VAR_1) ))) return ((void*)0);

    VAR_3 = FUNC_4( VAR_2, '}' );
    if (*VAR_2 != '{' || !VAR_3) goto error;

    VAR_4 = VAR_3 - VAR_2 + 1;
    if (!(VAR_1->product_code_from = FUNC_2( (VAR_4 + 1) * sizeof(WCHAR) ))) goto error;
    FUNC_1( VAR_1->product_code_from, VAR_2, VAR_4 * sizeof(WCHAR) );
    VAR_1->product_code_from[VAR_4] = 0;

    VAR_2 = VAR_3 + 1;
    if (!(VAR_3 = FUNC_4( VAR_2, ';' ))) goto error;
    VAR_4 = VAR_3 - VAR_2;
    if (!(VAR_1->version_from = FUNC_2( (VAR_4 + 1) * sizeof(WCHAR) ))) goto error;
    FUNC_1( VAR_1->version_from, VAR_2, VAR_4 * sizeof(WCHAR) );
    VAR_1->version_from[VAR_4] = 0;

    VAR_2 = VAR_3 + 1;
    VAR_3 = FUNC_4( VAR_2, '}' );
    if (*VAR_2 != '{' || !VAR_3) goto error;

    VAR_4 = VAR_3 - VAR_2 + 1;
    if (!(VAR_1->product_code_to = FUNC_2( (VAR_4 + 1) * sizeof(WCHAR) ))) goto error;
    FUNC_1( VAR_1->product_code_to, VAR_2, VAR_4 * sizeof(WCHAR) );
    VAR_1->product_code_to[VAR_4] = 0;

    VAR_2 = VAR_3 + 1;
    if (!(VAR_3 = FUNC_4( VAR_2, ';' ))) goto error;
    VAR_4 = VAR_3 - VAR_2;
    if (!(VAR_1->version_to = FUNC_2( (VAR_4 + 1) * sizeof(WCHAR) ))) goto error;
    FUNC_1( VAR_1->version_to, VAR_2, VAR_4 * sizeof(WCHAR) );
    VAR_1->version_to[VAR_4] = 0;

    VAR_2 = VAR_3 + 1;
    VAR_3 = FUNC_4( VAR_2, '}' );
    if (*VAR_2 != '{' || !VAR_3) goto error;

    VAR_4 = VAR_3 - VAR_2 + 1;
    if (!(VAR_1->upgrade_code = FUNC_2( (VAR_4 + 1) * sizeof(WCHAR) ))) goto error;
    FUNC_1( VAR_1->upgrade_code, VAR_2, VAR_4 * sizeof(WCHAR) );
    VAR_1->upgrade_code[VAR_4] = 0;

    return VAR_1;

error:
    FUNC_0( VAR_1 );
    return ((void*)0);
}
