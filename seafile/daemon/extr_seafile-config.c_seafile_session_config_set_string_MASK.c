
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sql ;
struct TYPE_3__ {int * http_proxy_password; int * http_proxy_username; int * http_proxy_addr; int * http_proxy_type; void* use_http_proxy; void* disable_verify_certificate; void* sync_extra_temp_file; int * client_name; int config_db; } ;
typedef TYPE_1__ SeafileSession ;


 void* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int,char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_4 (int ,char*) ;

int
FUNC_5 (SeafileSession *VAR_10,
                                   const char *VAR_11,
                                   const char *VAR_12)
{
    char VAR_13[256];

    FUNC_3 (sizeof(VAR_13), VAR_13,
                      "REPLACE INTO Config VALUES ('%q', '%q');",
                      VAR_11, VAR_12);
    if (FUNC_4 (VAR_10->config_db, VAR_13) < 0)
        return -1;

    if (FUNC_1 (VAR_11, VAR_1) == 0) {
        FUNC_0 (VAR_10->client_name);
        VAR_10->client_name = FUNC_2(VAR_12);
    }

    if (FUNC_1(VAR_11, VAR_7) == 0) {
        if (FUNC_1(VAR_12, "true") == 0)
            VAR_10->sync_extra_temp_file = VAR_9;
        else
            VAR_10->sync_extra_temp_file = VAR_0;
    }

    if (FUNC_1(VAR_11, VAR_2) == 0) {
        if (FUNC_1(VAR_12, "true") == 0)
            VAR_10->disable_verify_certificate = VAR_9;
        else
            VAR_10->disable_verify_certificate = VAR_0;
    }

    if (FUNC_1(VAR_11, VAR_8) == 0) {
        if (FUNC_1(VAR_12, "true") == 0)
            VAR_10->use_http_proxy = VAR_9;
        else
            VAR_10->use_http_proxy = VAR_0;
    }

    if (FUNC_1(VAR_11, VAR_5) == 0) {
        VAR_10->http_proxy_type =
            FUNC_1(VAR_12, "none") == 0 ? ((void*)0) : FUNC_2(VAR_12);
    }

    if (FUNC_1(VAR_11, VAR_3) == 0) {
        VAR_10->http_proxy_addr = FUNC_2(VAR_12);
    }

    if (FUNC_1(VAR_11, VAR_6) == 0) {
        VAR_10->http_proxy_username = FUNC_2(VAR_12);
    }

    if (FUNC_1(VAR_11, VAR_4) == 0) {
        VAR_10->http_proxy_password = FUNC_2(VAR_12);
    }

    return 0;
}
