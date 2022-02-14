
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int sa_family; } ;
struct TYPE_12__ {TYPE_8__ sa; } ;
struct openvpn_sockaddr {TYPE_4__ addr; } ;
struct TYPE_14__ {scalar_t__ proto; TYPE_5__* lsa; int af; } ;
struct link_socket {scalar_t__ inetd; TYPE_6__ info; scalar_t__ sd; } ;
struct frame {int dummy; } ;
typedef int socklen_t ;
typedef int local_addr ;
struct TYPE_9__ {int sa_family; } ;
struct TYPE_10__ {TYPE_1__ sa; } ;
struct TYPE_11__ {TYPE_2__ addr; } ;
struct TYPE_15__ {TYPE_3__ dest; } ;
struct TYPE_13__ {int bind_local; TYPE_7__ actual; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_8__*,int*) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (scalar_t__,int,...) ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_7__*,char const*,int ,int,int,int volatile*) ;

__attribute__((used)) static
void
FUNC_6(struct link_socket *VAR_5, const struct frame *VAR_6,
             const char *VAR_7, volatile int *VAR_8)
{
    bool VAR_9 = 0;

    if (VAR_5->info.proto == VAR_4)
    {

        VAR_5->info.lsa->actual.dest.addr.sa.sa_family = VAR_0;
        FUNC_3(VAR_3, "inetd(%s): this OS does not provide the getsockname() "
            "function, using AF_INET",
            FUNC_4(VAR_5->info.proto, 0));

        VAR_5->sd =
            FUNC_5(VAR_5->sd,
                                 &VAR_5->info.lsa->actual,
                                 VAR_7,
                                 VAR_5->info.lsa->bind_local,
                                 0,
                                 VAR_5->inetd == VAR_2,
                                 VAR_8);

    }
    FUNC_0(!VAR_9);
}
