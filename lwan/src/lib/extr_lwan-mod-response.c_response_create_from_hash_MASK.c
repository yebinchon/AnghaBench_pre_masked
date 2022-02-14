
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_response_settings {int code; } ;
struct hash {int dummy; } ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;


 char* FUNC_0 (struct hash const*,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int) ;
 void* FUNC_3 (char const*,struct lwan_response_settings*) ;

__attribute__((used)) static void *FUNC_4(const char *VAR_0,
                                       const struct hash *VAR_1)
{
    const char *VAR_2 = FUNC_0(VAR_1, "code");

    if (!VAR_2) {
        FUNC_1("`code` not supplied");
        return ((void*)0);
    }

    struct lwan_response_settings VAR_3 = {
        .code = (enum lwan_http_status)FUNC_2(VAR_2, 999)
    };

    if (VAR_3.code == 999) {
        FUNC_1("Unknown error code: %s", VAR_2);
        return ((void*)0);
    }

    return FUNC_3(VAR_0, &VAR_3);
}
