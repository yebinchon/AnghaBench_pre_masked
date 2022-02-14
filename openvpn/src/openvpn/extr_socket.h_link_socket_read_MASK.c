
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct link_socket_actual {int dest; } ;
struct TYPE_6__ {TYPE_2__* lsa; int proto; } ;
struct link_socket {TYPE_3__ info; } ;
struct buffer {int dummy; } ;
struct TYPE_4__ {int dest; } ;
struct TYPE_5__ {TYPE_1__ actual; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct link_socket*,struct buffer*) ;
 int FUNC_3 (struct link_socket*,struct buffer*,struct link_socket_actual*) ;
 int FUNC_4 (struct link_socket*,struct buffer*,struct link_socket_actual*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline int
FUNC_7(struct link_socket *VAR_0,
                 struct buffer *VAR_1,
                 struct link_socket_actual *VAR_2)
{
    if (FUNC_6(VAR_0->info.proto))
    {
        int VAR_3;




        VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);

        return VAR_3;
    }
    else if (FUNC_5(VAR_0->info.proto))
    {

        FUNC_1(&VAR_2->dest, &VAR_0->info.lsa->actual.dest);
        return FUNC_2(VAR_0, VAR_1);
    }
    else
    {
        FUNC_0(0);
        return -1;
    }
}
