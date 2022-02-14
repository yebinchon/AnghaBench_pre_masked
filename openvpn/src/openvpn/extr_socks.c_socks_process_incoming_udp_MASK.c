
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sin_port; int sin_addr; } ;
struct TYPE_4__ {TYPE_3__ in4; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct link_socket_actual {TYPE_2__ dest; } ;
struct buffer {scalar_t__ len; } ;


 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*,int *,int) ;
 int FUNC_2 (struct buffer*) ;
 int FUNC_3 (struct buffer*) ;

void
FUNC_4(struct buffer *VAR_0,
                           struct link_socket_actual *VAR_1)
{
    int VAR_2;

    if (FUNC_0(VAR_0) < 10)
    {
        goto error;
    }

    FUNC_2(VAR_0);
    if (FUNC_3(VAR_0) != 0)
    {
        goto error;
    }

    VAR_2 = FUNC_3(VAR_0);
    if (VAR_2 != 1)
    {
        goto error;
    }

    FUNC_1(VAR_0, &VAR_1->dest.addr.in4.sin_addr, sizeof(VAR_1->dest.addr.in4.sin_addr));
    FUNC_1(VAR_0, &VAR_1->dest.addr.in4.sin_port, sizeof(VAR_1->dest.addr.in4.sin_port));

    return;

error:
    VAR_0->len = 0;
}
