
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct link_socket_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* link_socket; struct link_socket_info* link_socket_info; } ;
struct context {TYPE_2__ c2; } ;
struct TYPE_3__ {struct link_socket_info info; } ;



__attribute__((used)) static inline struct link_socket_info *
FUNC_0(struct context *VAR_0)
{
    if (VAR_0->c2.link_socket_info)
    {
        return VAR_0->c2.link_socket_info;
    }
    else
    {
        return &VAR_0->c2.link_socket->info;
    }
}
