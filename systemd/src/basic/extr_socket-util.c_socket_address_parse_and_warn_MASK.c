
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_7__ {TYPE_1__ sa; } ;
struct TYPE_8__ {TYPE_2__ sockaddr; } ;
typedef TYPE_3__ SocketAddress ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,char const*) ;
 int FUNC_2 () ;

int FUNC_3(SocketAddress *VAR_2, const char *VAR_3) {
        SocketAddress VAR_4;
        int VAR_5;



        VAR_5 = FUNC_1(&VAR_4, VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        if (!FUNC_2() && VAR_4.sockaddr.sa.sa_family == VAR_0) {
                FUNC_0("Binding to IPv6 address not available since kernel does not support IPv6.");
                return -VAR_1;
        }

        *VAR_2 = VAR_4;
        return 0;
}
