
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_socket_actual {int dummy; } ;
struct TYPE_2__ {int proto; } ;
struct link_socket {TYPE_1__ info; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct link_socket*,struct buffer*,struct link_socket_actual*) ;
 int FUNC_2 (struct link_socket*,struct buffer*,struct link_socket_actual*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int
FUNC_5(struct link_socket *VAR_0,
                  struct buffer *VAR_1,
                  struct link_socket_actual *VAR_2)
{
    if (FUNC_4(VAR_0->info.proto))
    {
        return FUNC_2(VAR_0, VAR_1, VAR_2);
    }
    else if (FUNC_3(VAR_0->info.proto))
    {
        return FUNC_1(VAR_0, VAR_1, VAR_2);
    }
    else
    {
        FUNC_0(0);
        return -1;
    }
}
