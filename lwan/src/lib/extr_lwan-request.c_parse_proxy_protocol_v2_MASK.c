
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; int sin6_family; } ;
struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {int sin_family; int sin_port; TYPE_2__ sin_addr; } ;
struct TYPE_11__ {int dst_port; int dst_addr; int src_port; int src_addr; } ;
struct TYPE_10__ {int dst_port; int dst_addr; int src_port; int src_addr; } ;
struct TYPE_12__ {TYPE_4__ ip6; TYPE_3__ ip4; } ;
struct proxy_header_v2 {int cmd_ver; int fam; TYPE_5__ addr; int len; } ;
struct lwan_request_parser_helper {TYPE_1__* buffer; } ;
struct lwan_request {int flags; struct lwan_proxy* proxy; struct lwan_request_parser_helper* helper; } ;
struct TYPE_14__ {struct sockaddr_in ipv4; struct sockaddr_in6 ipv6; } ;
struct TYPE_13__ {struct sockaddr_in ipv4; struct sockaddr_in6 ipv6; } ;
struct lwan_proxy {TYPE_7__ to; TYPE_6__ from; } ;
struct TYPE_8__ {unsigned int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static char *FUNC_3(struct lwan_request *VAR_4, char *VAR_5)
{
    struct proxy_header_v2 *VAR_6 = (struct proxy_header_v2 *)VAR_5;
    struct lwan_request_parser_helper *VAR_7 = VAR_4->helper;
    const unsigned int VAR_8 = 16;
    unsigned int VAR_9;
    struct lwan_proxy *const VAR_10 = VAR_4->proxy;

    enum { LOCAL = 0x20, PROXY = 0x21, TCP4 = 0x11, TCP6 = 0x21 };

    VAR_9 = VAR_8 + (unsigned int)FUNC_2(VAR_6->len);
    if (FUNC_1(VAR_9 > (unsigned int)sizeof(*VAR_6)))
        return ((void*)0);
    if (FUNC_1(VAR_9 >= VAR_7->buffer->len))
        return ((void*)0);

    if (FUNC_0(VAR_6->cmd_ver == PROXY)) {
        if (VAR_6->fam == TCP4) {
            struct sockaddr_in *VAR_11 = &VAR_10->from.ipv4;
            struct sockaddr_in *VAR_12 = &VAR_10->to.ipv4;

            VAR_12->sin_family = VAR_11->sin_family = VAR_0;

            VAR_11->sin_addr.s_addr = VAR_6->addr.ip4.src_addr;
            VAR_11->sin_port = VAR_6->addr.ip4.src_port;

            VAR_12->sin_addr.s_addr = VAR_6->addr.ip4.dst_addr;
            VAR_12->sin_port = VAR_6->addr.ip4.dst_port;
        } else if (VAR_6->fam == TCP6) {
            struct sockaddr_in6 *VAR_13 = &VAR_10->from.ipv6;
            struct sockaddr_in6 *VAR_14 = &VAR_10->to.ipv6;

            VAR_13->sin6_family = VAR_14->sin6_family = VAR_1;

            VAR_13->sin6_addr = VAR_6->addr.ip6.src_addr;
            VAR_13->sin6_port = VAR_6->addr.ip6.src_port;

            VAR_14->sin6_addr = VAR_6->addr.ip6.dst_addr;
            VAR_14->sin6_port = VAR_6->addr.ip6.dst_port;
        } else {
            return ((void*)0);
        }
    } else if (VAR_6->cmd_ver == LOCAL) {
        struct sockaddr_in *VAR_15 = &VAR_10->from.ipv4;
        struct sockaddr_in *VAR_16 = &VAR_10->to.ipv4;

        VAR_15->sin_family = VAR_16->sin_family = VAR_2;
    } else {
        return ((void*)0);
    }

    VAR_4->flags |= VAR_3;
    return VAR_5 + VAR_9;
}
