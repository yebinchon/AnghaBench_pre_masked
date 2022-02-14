
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union sockaddr_union {int dummy; } sockaddr_union ;
struct sockaddr_un {int dummy; } ;
struct TYPE_7__ {scalar_t__* sun_path; } ;
struct TYPE_8__ {TYPE_1__ un; } ;
struct TYPE_9__ {TYPE_2__ sockaddr; } ;
typedef TYPE_3__ SocketAddress ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__ const*) ;

const char* FUNC_3(const SocketAddress *VAR_1) {
        FUNC_0(VAR_1);

        if (FUNC_2(VAR_1) != VAR_0)
                return ((void*)0);

        if (VAR_1->sockaddr.un.sun_path[0] == 0)
                return ((void*)0);




        FUNC_1(sizeof(union sockaddr_union) >= sizeof(struct sockaddr_un)+1);
        return VAR_1->sockaddr.un.sun_path;
}
