
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link_socket_owned; scalar_t__ link_socket; } ;
struct context {TYPE_1__ c2; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_0)
{
    FUNC_0(!VAR_0->c2.link_socket);
    VAR_0->c2.link_socket = FUNC_1();
    VAR_0->c2.link_socket_owned = 1;
}
