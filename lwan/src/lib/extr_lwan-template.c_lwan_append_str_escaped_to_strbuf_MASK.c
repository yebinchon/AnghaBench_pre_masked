
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_strbuf {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct lwan_strbuf*,char const) ;
 int FUNC_2 (struct lwan_strbuf*,char*,int) ;

void FUNC_3(struct lwan_strbuf *VAR_0, void *VAR_1)
{
    if (FUNC_0(!VAR_1))
        return;

    const char *VAR_2 = *(char **)VAR_1;
    if (FUNC_0(!VAR_2))
        return;

    for (const char *VAR_3 = VAR_2; *VAR_3; VAR_3++) {
        if (*VAR_3 == '<')
            FUNC_2(VAR_0, "&lt;", 4);
        else if (*VAR_3 == '>')
            FUNC_2(VAR_0, "&gt;", 4);
        else if (*VAR_3 == '&')
            FUNC_2(VAR_0, "&amp;", 5);
        else if (*VAR_3 == '"')
            FUNC_2(VAR_0, "&quot;", 6);
        else if (*VAR_3 == '\'')
            FUNC_2(VAR_0, "&#x27;", 6);
        else if (*VAR_3 == '/')
            FUNC_2(VAR_0, "&#x2f;", 6);
        else
            FUNC_1(VAR_0, *VAR_3);
    }
}
