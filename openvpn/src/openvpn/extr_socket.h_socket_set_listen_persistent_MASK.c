
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_socket {int listen_persistent_queued; } ;
struct event_set {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct event_set*,int ,int ,void*) ;
 int FUNC_1 (struct link_socket*) ;

__attribute__((used)) static inline void
FUNC_2(struct link_socket *VAR_1,
                             struct event_set *VAR_2,
                             void *VAR_3)
{
    if (VAR_1 && !VAR_1->listen_persistent_queued)
    {
        FUNC_0(VAR_2, FUNC_1(VAR_1), VAR_0, VAR_3);
        VAR_1->listen_persistent_queued = 1;
    }
}
