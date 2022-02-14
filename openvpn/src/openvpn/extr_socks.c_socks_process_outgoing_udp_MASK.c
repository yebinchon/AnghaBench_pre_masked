
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin_port; int sin_addr; } ;
struct TYPE_5__ {TYPE_1__ in4; } ;
struct TYPE_6__ {TYPE_2__ addr; } ;
struct link_socket_actual {TYPE_3__ dest; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*) ;
 struct buffer FUNC_2 (struct buffer*,int,int) ;
 int FUNC_3 (struct buffer*,int *,int) ;
 int FUNC_4 (struct buffer*,int ) ;
 int FUNC_5 (struct buffer*,char) ;

int
FUNC_6(struct buffer *VAR_0,
                           const struct link_socket_actual *VAR_1)
{





    struct buffer VAR_2 = FUNC_2(VAR_0, 10, 1);


    FUNC_0(FUNC_1(&VAR_2));

    FUNC_4(&VAR_2, 0);
    FUNC_5(&VAR_2, 0);
    FUNC_5(&VAR_2, '\x01');
    FUNC_3(&VAR_2, &VAR_1->dest.addr.in4.sin_addr, sizeof(VAR_1->dest.addr.in4.sin_addr));
    FUNC_3(&VAR_2, &VAR_1->dest.addr.in4.sin_port, sizeof(VAR_1->dest.addr.in4.sin_port));

    return 10;
}
