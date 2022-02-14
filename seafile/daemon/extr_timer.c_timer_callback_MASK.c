
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SeafTimer {int in_callback; int (* func ) (int ) ;int tv; int event; int user_data; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct SeafTimer**) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
    int VAR_3;
    struct SeafTimer *VAR_4 = VAR_2;

    VAR_4->in_callback = 1;
    VAR_3 = (*VAR_4->func) (VAR_4->user_data);
    VAR_4->in_callback = 0;

    if (VAR_3)
        FUNC_0 (VAR_4->event, &VAR_4->tv);
    else
        FUNC_1 (&VAR_4);
}
