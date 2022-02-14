
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_socket {int mark; void* sd; int socket_buffer_sizes; void* ctrl_sd; scalar_t__ socks_proxy; int sockflags; } ;
struct addrinfo {scalar_t__ ai_protocol; scalar_t__ ai_socktype; int ai_family; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct link_socket*,int ) ;
 void* FUNC_2 (struct addrinfo*) ;
 void* FUNC_3 (struct addrinfo*,int ) ;
 int FUNC_4 (void*,int *) ;
 int FUNC_5 (void*,int ) ;

__attribute__((used)) static void
FUNC_6(struct link_socket *VAR_5, struct addrinfo *VAR_6)
{
    if (VAR_6->ai_protocol == VAR_1 || VAR_6->ai_socktype == VAR_3)
    {
        VAR_5->sd = FUNC_3(VAR_6, VAR_5->sockflags);
        VAR_5->sockflags |= VAR_2;



        if (VAR_5->socks_proxy)
        {



            struct addrinfo VAR_7 = *VAR_6;
            VAR_7.ai_socktype = VAR_4;
            VAR_7.ai_protocol = VAR_0;
            VAR_5->ctrl_sd = FUNC_2(&VAR_7);
        }
    }
    else if (VAR_6->ai_protocol == VAR_0 || VAR_6->ai_socktype == VAR_4)
    {
        VAR_5->sd = FUNC_2(VAR_6);
    }
    else
    {
        FUNC_0(0);
    }

    FUNC_4(VAR_5->sd, &VAR_5->socket_buffer_sizes);


    FUNC_5(VAR_5->sd, VAR_5->mark);

    FUNC_1(VAR_5, VAR_6->ai_family);
}
