
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_socket {unsigned int rwflags_debug; } ;
struct event_set {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct event_set*,int ,unsigned int,void*) ;
 int FUNC_2 (struct link_socket*) ;
 int FUNC_3 (struct link_socket*,int ) ;
 int FUNC_4 (struct link_socket*) ;

unsigned int
FUNC_5(struct link_socket *VAR_1,
           struct event_set *VAR_2,
           unsigned int VAR_3,
           void *VAR_4,
           unsigned int *VAR_5)
{
    if (VAR_1)
    {
        if ((VAR_3 & VAR_0) && !FUNC_4(VAR_1))
        {
            FUNC_0(!VAR_5);
            VAR_3 &= ~VAR_0;
        }
        if (!VAR_5 || *VAR_5 != VAR_3)
        {
            FUNC_1(VAR_2, FUNC_2(VAR_1), VAR_3, VAR_4);
            if (VAR_5)
            {
                *VAR_5 = VAR_3;
            }
        }

        VAR_1->rwflags_debug = VAR_3;
    }
    return VAR_3;
}
