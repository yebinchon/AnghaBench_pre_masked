
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sql_str {char* data; int len; } ;
typedef int WCHAR ;
typedef int UINT ;
typedef scalar_t__* LPWSTR ;
typedef char* LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,char*,int) ;
 scalar_t__* FUNC_1 (void*,int) ;

UINT FUNC_2( void *VAR_3, const struct sql_str *VAR_4, LPWSTR *VAR_5 )
{
    LPCWSTR VAR_6 = VAR_4->data;
    UINT VAR_7 = VAR_4->len;


    if( ( (VAR_6[0]=='`') && (VAR_6[VAR_7-1]!='`') ) ||
        ( (VAR_6[0]=='\'') && (VAR_6[VAR_7-1]!='\'') ) )
        return VAR_0;


    if( ( (VAR_6[0]=='`') && (VAR_6[VAR_7-1]=='`') ) ||
        ( (VAR_6[0]=='\'') && (VAR_6[VAR_7-1]=='\'') ) )
    {
        VAR_6++;
        VAR_7 -= 2;
    }
    *VAR_5 = FUNC_1( VAR_3, (VAR_7 + 1)*sizeof(WCHAR) );
    if( !*VAR_5 )
        return VAR_1;
    FUNC_0( *VAR_5, VAR_6, VAR_7*sizeof(WCHAR) );
    (*VAR_5)[VAR_7]=0;

    return VAR_2;
}
