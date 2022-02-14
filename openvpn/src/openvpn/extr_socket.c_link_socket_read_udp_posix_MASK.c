
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sa; } ;
struct TYPE_6__ {TYPE_2__ addr; } ;
struct link_socket_actual {TYPE_3__ dest; } ;
struct TYPE_4__ {scalar_t__ proto; int af; } ;
struct link_socket {int sockflags; int sd; TYPE_1__ info; } ;
struct buffer {int len; } ;
typedef scalar_t__ socklen_t ;


 int FUNC_0 (struct buffer*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct buffer*) ;
 scalar_t__ FUNC_5 (struct link_socket*,struct buffer*,struct link_socket_actual*) ;
 int FUNC_6 (int ,int ,int ,int ,int *,scalar_t__*) ;

int
FUNC_7(struct link_socket *VAR_2,
                           struct buffer *VAR_3,
                           struct link_socket_actual *VAR_4)
{
    socklen_t VAR_5 = sizeof(VAR_4->dest.addr);
    socklen_t VAR_6 = FUNC_2(VAR_2->info.af);
    FUNC_1(&VAR_4->dest);
    VAR_3->len = FUNC_6(VAR_2->sd, FUNC_0(VAR_3), FUNC_4(VAR_3), 0,
                        &VAR_4->dest.addr.sa, &VAR_5);

    if (VAR_3->len >= 0 && VAR_6 && VAR_5 != VAR_6)
    {
        FUNC_3(VAR_5, VAR_6);
    }
    return VAR_3->len;
}
