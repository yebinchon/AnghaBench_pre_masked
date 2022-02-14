
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int un; } ;
struct TYPE_6__ {TYPE_1__ sockaddr; } ;
typedef TYPE_2__ SocketAddress ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;

__attribute__((used)) static inline int FUNC_2(const SocketAddress *VAR_1) {
        return FUNC_1(VAR_1) == VAR_0 ? FUNC_0(&VAR_1->sockaddr.un) : 0;
}
