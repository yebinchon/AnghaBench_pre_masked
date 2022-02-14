
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_socket_info {struct link_socket_addr* lsa; } ;
struct link_socket_actual {int dummy; } ;
struct link_socket_addr {struct link_socket_actual actual; } ;
struct buffer {scalar_t__ len; } ;


 scalar_t__ FUNC_0 (struct link_socket_actual*) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void
FUNC_2(struct buffer *VAR_0,
                              const struct link_socket_info *VAR_1,
                              struct link_socket_actual **VAR_2)
{
    if (VAR_0->len > 0)
    {
        struct link_socket_addr *VAR_3 = VAR_1->lsa;
        if (FUNC_0(&VAR_3->actual))
        {
            *VAR_2 = &VAR_3->actual;
        }
        else
        {
            FUNC_1();
            VAR_0->len = 0;
            *VAR_2 = ((void*)0);
        }
    }
}
