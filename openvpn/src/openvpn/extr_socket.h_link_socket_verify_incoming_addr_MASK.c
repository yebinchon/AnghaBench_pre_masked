
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_socket_info {int proto; TYPE_3__* lsa; int remote_float; } ;
struct TYPE_5__ {int sa_family; } ;
struct TYPE_6__ {TYPE_1__ sa; } ;
struct TYPE_8__ {TYPE_2__ addr; } ;
struct link_socket_actual {TYPE_4__ dest; } ;
struct buffer {scalar_t__ len; } ;
struct TYPE_7__ {int remote_list; } ;




 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (struct link_socket_actual const*) ;

__attribute__((used)) static inline bool
FUNC_2(struct buffer *VAR_0,
                                 const struct link_socket_info *VAR_1,
                                 const struct link_socket_actual *VAR_2)
{
    if (VAR_0->len > 0)
    {
        switch (VAR_2->dest.addr.sa.sa_family)
        {
            case 128:
            case 129:
                if (!FUNC_1(VAR_2))
                {
                    return 0;
                }
                if (VAR_1->remote_float || (!VAR_1->lsa->remote_list))
                {
                    return 1;
                }
                if (FUNC_0(&VAR_2->dest, VAR_1->lsa->remote_list, VAR_1->proto))
                {
                    return 1;
                }
        }
    }
    return 0;
}
