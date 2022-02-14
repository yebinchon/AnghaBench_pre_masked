
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* value; size_t len; } ;
struct lwan_request_parser_helper {TYPE_2__ query_string; } ;
struct TYPE_3__ {char* value; size_t len; } ;
struct lwan_request {TYPE_1__ url; struct lwan_request_parser_helper* helper; } ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*,char,size_t) ;
 char* FUNC_2 (char*,char,size_t) ;

__attribute__((used)) static void FUNC_3(struct lwan_request *VAR_0,
                                     const char *VAR_1)
{
    struct lwan_request_parser_helper *VAR_2 = VAR_0->helper;



    char *VAR_3 = FUNC_2(VAR_0->url.value, '#', VAR_0->url.len);
    if (FUNC_0(VAR_3 != ((void*)0))) {
        *VAR_3 = '\0';
        VAR_0->url.len = (size_t)(VAR_3 - VAR_0->url.value);
        VAR_1 = VAR_3;
    }

    char *VAR_4 = FUNC_1(VAR_0->url.value, '?', VAR_0->url.len);
    if (VAR_4) {
        *VAR_4 = '\0';
        VAR_2->query_string.value = VAR_4 + 1;
        VAR_2->query_string.len = (size_t)(VAR_1 - VAR_4 - 1);
        VAR_0->url.len -= VAR_2->query_string.len + 1;
    }
}
