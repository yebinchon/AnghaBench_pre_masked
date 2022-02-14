
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_socket_addr {int * current_remote; int * remote_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct link_socket_addr *VAR_0, bool VAR_1)
{
    if (VAR_0->remote_list && VAR_1)
    {
        FUNC_0(VAR_0->remote_list);
    }
    VAR_0->remote_list = ((void*)0);
    VAR_0->current_remote = ((void*)0);
}
