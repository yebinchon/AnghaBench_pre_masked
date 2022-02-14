
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u_char ;
typedef int signature ;
struct TYPE_7__ {int dst_port; int dst_addr; int src_port; int src_addr; } ;
typedef TYPE_1__ ngx_proxy_protocol_t ;
typedef int ngx_proxy_protocol_header_t ;
struct TYPE_8__ {int log; TYPE_1__* proxy_protocol; int pool; } ;
typedef TYPE_2__ ngx_connection_t ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int *,int ,int *,int ) ;
 int FUNC_3 (int ,int ,int ,char*,size_t,char*) ;
 TYPE_1__* FUNC_4 (int ,int) ;
 char* FUNC_5 (TYPE_2__*,char*,char*,int *) ;
 char* FUNC_6 (char*,char*,int *,char) ;
 char* FUNC_7 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

u_char *
FUNC_9(ngx_connection_t *VAR_4, u_char *VAR_5, u_char *VAR_6)
{
    size_t VAR_7;
    u_char *VAR_8;
    ngx_proxy_protocol_t *VAR_9;

    static const u_char VAR_10[] = "\r\n\r\n\0\r\nQUIT\n";

    VAR_8 = VAR_5;
    VAR_7 = VAR_6 - VAR_5;

    if (VAR_7 >= sizeof(ngx_proxy_protocol_header_t)
        && FUNC_0(VAR_8, VAR_10, sizeof(VAR_10) - 1) == 0)
    {
        return FUNC_7(VAR_4, VAR_5, VAR_6);
    }

    if (VAR_7 < 8 || FUNC_8(VAR_8, "PROXY ", 6) != 0) {
        goto invalid;
    }

    VAR_8 += 6;
    VAR_7 -= 6;

    if (VAR_7 >= 7 && FUNC_8(VAR_8, "UNKNOWN", 7) == 0) {
        FUNC_1(VAR_2, VAR_4->log, 0,
                       "PROXY protocol unknown protocol");
        VAR_8 += 7;
        goto skip;
    }

    if (VAR_7 < 5 || FUNC_8(VAR_8, "TCP", 3) != 0
        || (VAR_8[3] != '4' && VAR_8[3] != '6') || VAR_8[4] != ' ')
    {
        goto invalid;
    }

    VAR_8 += 5;

    VAR_9 = FUNC_4(VAR_4->pool, sizeof(ngx_proxy_protocol_t));
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8 = FUNC_5(VAR_4, VAR_8, VAR_6, &VAR_9->src_addr);
    if (VAR_8 == ((void*)0)) {
        goto invalid;
    }

    VAR_8 = FUNC_5(VAR_4, VAR_8, VAR_6, &VAR_9->dst_addr);
    if (VAR_8 == ((void*)0)) {
        goto invalid;
    }

    VAR_8 = FUNC_6(VAR_8, VAR_6, &VAR_9->src_port, ' ');
    if (VAR_8 == ((void*)0)) {
        goto invalid;
    }

    VAR_8 = FUNC_6(VAR_8, VAR_6, &VAR_9->dst_port, VAR_0);
    if (VAR_8 == ((void*)0)) {
        goto invalid;
    }

    if (VAR_8 == VAR_6) {
        goto invalid;
    }

    if (*VAR_8++ != VAR_1) {
        goto invalid;
    }

    FUNC_2(VAR_2, VAR_4->log, 0,
                   "PROXY protocol src: %V %d, dst: %V %d",
                   &VAR_9->src_addr, VAR_9->src_port, &VAR_9->dst_addr, VAR_9->dst_port);

    VAR_4->proxy_protocol = VAR_9;

    return VAR_8;

skip:

    for ( ; VAR_8 < VAR_6 - 1; VAR_8++) {
        if (VAR_8[0] == VAR_0 && VAR_8[1] == VAR_1) {
            return VAR_8 + 2;
        }
    }

invalid:

    FUNC_3(VAR_3, VAR_4->log, 0,
                  "broken header: \"%*s\"", (size_t) (VAR_6 - VAR_5), VAR_5);

    return ((void*)0);
}
