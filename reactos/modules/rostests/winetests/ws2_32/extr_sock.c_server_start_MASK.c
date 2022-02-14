
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ sock_type; int n_chunks; int chunk_size; int inet_port; int inet_addr; int sock_prot; } ;
typedef TYPE_4__ test_params ;
struct sockaddr {int dummy; } ;
struct TYPE_13__ {int sock_flags; TYPE_4__* general; } ;
typedef TYPE_5__ server_params ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_11__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_14__ {scalar_t__ s; TYPE_3__ addr; TYPE_2__* sock; } ;
typedef TYPE_6__ server_memory ;
struct TYPE_10__ {scalar_t__ n_sent; scalar_t__ n_recvd; void* buf; scalar_t__ s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int *,int ,int ) ;
 int FUNC_3 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7 ( server_params *VAR_6 )
{
    int VAR_7;
    test_params *VAR_8 = VAR_6->general;
    server_memory *VAR_9 = FUNC_0 ( VAR_2, sizeof ( server_memory ) );

    FUNC_1 ( VAR_5, VAR_9 );
    VAR_9->s = FUNC_2 ( VAR_0, VAR_8->sock_type, VAR_8->sock_prot,
                          ((void*)0), 0, VAR_6->sock_flags );
    FUNC_6 ( VAR_9->s != VAR_1, "Server: WSASocket failed\n" );

    VAR_9->addr.sin_family = VAR_0;
    VAR_9->addr.sin_addr.s_addr = FUNC_5 ( VAR_8->inet_addr );
    VAR_9->addr.sin_port = FUNC_4 ( VAR_8->inet_port );

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
        VAR_9->sock[VAR_7].s = VAR_1;
        VAR_9->sock[VAR_7].buf = FUNC_0 ( VAR_2, VAR_8->n_chunks * VAR_8->chunk_size );
        VAR_9->sock[VAR_7].n_recvd = 0;
        VAR_9->sock[VAR_7].n_sent = 0;
    }

    if ( VAR_8->sock_type == VAR_4 )
        FUNC_3 ( VAR_9->s, (struct sockaddr*) &VAR_9->addr, sizeof (VAR_9->addr) );
}
