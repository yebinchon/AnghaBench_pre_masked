
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_socket_info {int proto; scalar_t__ remote_float; int connection_established; struct link_socket_addr* lsa; } ;
struct TYPE_2__ {int dest; } ;
struct link_socket_addr {int remote_list; TYPE_1__ actual; } ;
struct link_socket_actual {int dest; } ;
struct env_set {int dummy; } ;
struct buffer {scalar_t__ len; } ;


 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct buffer const*,struct link_socket_info*,struct link_socket_actual const*,char const*,struct env_set*) ;

__attribute__((used)) static inline void
FUNC_3(const struct buffer *VAR_0,
                              struct link_socket_info *VAR_1,
                              const struct link_socket_actual *VAR_2,
                              const char *VAR_3,
                              struct env_set *VAR_4)
{
    if (!VAR_0 || VAR_0->len > 0)
    {
        struct link_socket_addr *VAR_5 = VAR_1->lsa;
        if (

            (!VAR_1->connection_established
             || !FUNC_0(&VAR_2->dest, &VAR_5->actual.dest, VAR_1->proto)
            )
            &&

            (VAR_1->remote_float
             || (!VAR_5->remote_list || FUNC_1(&VAR_2->dest, VAR_5->remote_list, VAR_1->proto))
            )
            )
        {
            FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
        }
    }
}
