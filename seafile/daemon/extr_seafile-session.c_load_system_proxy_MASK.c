
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_6__ {char const* text; } ;
typedef TYPE_1__ json_error_t ;
struct TYPE_8__ {int seaf_dir; } ;
struct TYPE_7__ {void* http_proxy_password; void* http_proxy_username; int http_proxy_port; void* http_proxy_addr; void* http_proxy_type; } ;
typedef TYPE_2__ SeafileSession ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ,TYPE_1__*) ;
 int FUNC_7 (int *,char*) ;
 char const* FUNC_8 (int *,char*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (char const*) ;

__attribute__((used)) static void
FUNC_12 (SeafileSession *VAR_2)
{
    char *VAR_3 = FUNC_0 (VAR_1->seaf_dir, "system-proxy.txt", ((void*)0));
    json_t *VAR_4 = ((void*)0);
    if (!FUNC_1 (VAR_3, VAR_0)) {
        FUNC_9 ("Can't load system proxy: file %s doesn't exist\n", VAR_3);
        goto out;
    }

    json_error_t VAR_5;
    VAR_4 = FUNC_6(VAR_3, 0, &VAR_5);
    if (!VAR_4) {
        if (FUNC_11(VAR_5.text) > 0)
            FUNC_9 ("Failed to load system proxy information: %s.\n", VAR_5.text);
        else
            FUNC_9 ("Failed to load system proxy information\n");
        goto out;
    }
    const char *VAR_6;
    VAR_6 = FUNC_8 (VAR_4, "type");
    if (!VAR_6) {
        FUNC_9 ("Failed to load system proxy information: proxy type missing\n");
        goto out;
    }
    if (FUNC_10(VAR_6, "none") != 0 && FUNC_10(VAR_6, "socks") != 0 && FUNC_10(VAR_6, "http") != 0) {
        FUNC_9 ("Failed to load system proxy information: invalid proxy type %s\n", VAR_6);
        goto out;
    }
    if (FUNC_3(VAR_6, "none") == 0) {
        goto out;
    }
    VAR_2->http_proxy_type = FUNC_4(VAR_6);
    VAR_2->http_proxy_addr = FUNC_4(FUNC_8 (VAR_4, "addr"));
    VAR_2->http_proxy_port = FUNC_7 (VAR_4, "port");
    VAR_2->http_proxy_username = FUNC_4(FUNC_8 (VAR_4, "username"));
    VAR_2->http_proxy_password = FUNC_4(FUNC_8 (VAR_4, "password"));

out:
    FUNC_2 (VAR_3);
    if (VAR_4)
        FUNC_5(VAR_4);
}
