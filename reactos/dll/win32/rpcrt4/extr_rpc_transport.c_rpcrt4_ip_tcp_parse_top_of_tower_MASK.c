
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count_lhs; unsigned char protid; int count_rhs; int port; } ;
typedef TYPE_1__ twr_tcp_floor_t ;
struct TYPE_4__ {int count_lhs; scalar_t__ protid; int count_rhs; int ipv4addr; } ;
typedef TYPE_2__ twr_ipv4_floor_t ;
struct in_addr {int s_addr; } ;
typedef int RPC_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,unsigned char const*,int,char**,char**) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct in_addr*,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static RPC_STATUS FUNC_8(const unsigned char *VAR_6,
                                                   size_t VAR_7,
                                                   char **VAR_8,
                                                   unsigned char VAR_9,
                                                   char **VAR_10)
{
    const twr_tcp_floor_t *VAR_11 = (const twr_tcp_floor_t *)VAR_6;
    const twr_ipv4_floor_t *VAR_12;
    struct in_addr VAR_13;

    FUNC_3("(%p, %d, %p, %p)\n", VAR_6, (int)VAR_7, VAR_8, VAR_10);

    if (VAR_7 < sizeof(*VAR_11))
        return VAR_2;

    VAR_6 += sizeof(*VAR_11);
    VAR_7 -= sizeof(*VAR_11);

    if (VAR_7 < sizeof(*VAR_12))
        return VAR_2;

    VAR_12 = (const twr_ipv4_floor_t *)VAR_6;

    if ((VAR_11->count_lhs != sizeof(VAR_11->protid)) ||
        (VAR_11->protid != VAR_9) ||
        (VAR_11->count_rhs != sizeof(VAR_11->port)) ||
        (VAR_12->count_lhs != sizeof(VAR_12->protid)) ||
        (VAR_12->protid != VAR_1) ||
        (VAR_12->count_rhs != sizeof(VAR_12->ipv4addr)))
        return VAR_2;

    if (VAR_10)
    {
        *VAR_10 = FUNC_1(6 );
        if (!*VAR_10)
            return VAR_5;
        FUNC_7(*VAR_10, "%u", FUNC_6(VAR_11->port));
    }

    if (VAR_8)
    {
        *VAR_8 = FUNC_1(VAR_3);
        if (!*VAR_8)
        {
            if (VAR_10)
            {
                FUNC_2(*VAR_10);
                *VAR_10 = ((void*)0);
            }
            return VAR_5;
        }
        VAR_13.s_addr = VAR_12->ipv4addr;
        if (!FUNC_5(VAR_0, &VAR_13, *VAR_8, VAR_3))
        {
            FUNC_0("inet_ntop: %u\n", FUNC_4());
            FUNC_2(*VAR_8);
            *VAR_8 = ((void*)0);
            if (VAR_10)
            {
                FUNC_2(*VAR_10);
                *VAR_10 = ((void*)0);
            }
            return VAR_2;
        }
    }

    return VAR_4;
}
