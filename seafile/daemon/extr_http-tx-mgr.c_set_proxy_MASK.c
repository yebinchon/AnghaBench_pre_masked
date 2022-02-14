
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_2__ {int http_proxy_addr; int http_proxy_port; int http_proxy_username; int http_proxy_password; int http_proxy_type; int use_http_proxy; } ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_16 ;

__attribute__((used)) static void
FUNC_2 (CURL *VAR_17, gboolean VAR_18)
{

    if (!VAR_16->use_http_proxy || !VAR_16->http_proxy_type || !VAR_16->http_proxy_addr) {
        FUNC_0 (VAR_17, VAR_6, ((void*)0));
        return;
    }

    if (FUNC_1(VAR_16->http_proxy_type, VAR_14) == 0) {
        FUNC_0(VAR_17, VAR_10, VAR_12);

        if (VAR_18)
            FUNC_0(VAR_17, VAR_5, 1L);
        FUNC_0(VAR_17, VAR_6, VAR_16->http_proxy_addr);
        FUNC_0(VAR_17, VAR_9,
                         VAR_16->http_proxy_port > 0 ? VAR_16->http_proxy_port : 80);
        if (VAR_16->http_proxy_username && VAR_16->http_proxy_password) {
            FUNC_0(VAR_17, VAR_7,
                             VAR_0 |
                             VAR_1 |
                             VAR_2 |
                             VAR_3 |
                             VAR_4);
            FUNC_0(VAR_17, VAR_11, VAR_16->http_proxy_username);
            FUNC_0(VAR_17, VAR_8, VAR_16->http_proxy_password);
        }
    } else if (FUNC_1(VAR_16->http_proxy_type, VAR_15) == 0) {
        if (VAR_16->http_proxy_port < 0)
            return;
        FUNC_0(VAR_17, VAR_10, VAR_13);
        FUNC_0(VAR_17, VAR_6, VAR_16->http_proxy_addr);
        FUNC_0(VAR_17, VAR_9, VAR_16->http_proxy_port);
    }
}
