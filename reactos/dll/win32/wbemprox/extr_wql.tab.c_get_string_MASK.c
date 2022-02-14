
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {char* data; int len; } ;
struct parser {int dummy; } ;
typedef char WCHAR ;


 char* FUNC_0 (struct parser*,int) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static WCHAR *FUNC_2( struct parser *VAR_0, const struct string *VAR_1 )
{
    const WCHAR *VAR_2 = VAR_1->data;
    int VAR_3 = VAR_1->len;
    WCHAR *VAR_4;

    if ((VAR_2[0] == '\"' && VAR_2[VAR_3 - 1] != '\"') ||
        (VAR_2[0] == '\'' && VAR_2[VAR_3 - 1] != '\'')) return ((void*)0);
    if ((VAR_2[0] == '\"' && VAR_2[VAR_3 - 1] == '\"') ||
        (VAR_2[0] == '\'' && VAR_2[VAR_3 - 1] == '\''))
    {
        VAR_2++;
        VAR_3 -= 2;
    }
    if (!(VAR_4 = FUNC_0( VAR_0, (VAR_3 + 1) * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_1( VAR_4, VAR_2, VAR_3 * sizeof(WCHAR) );
    VAR_4[VAR_3] = 0;
    return VAR_4;
}
