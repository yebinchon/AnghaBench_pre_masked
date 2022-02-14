
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sndbuf; int rcvbuf; } ;
struct link_socket {TYPE_1__ socket_buffer_sizes; int sd; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;

void
FUNC_2(struct link_socket *VAR_0, int VAR_1, int VAR_2)
{
    if (VAR_0 && FUNC_0(VAR_0->sd))
    {
        VAR_0->socket_buffer_sizes.sndbuf = VAR_2;
        VAR_0->socket_buffer_sizes.rcvbuf = VAR_1;
        FUNC_1(VAR_0->sd, &VAR_0->socket_buffer_sizes);
    }
}
