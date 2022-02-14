
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int n_chunks; int chunk_size; int n_clients; int inet_port; int inet_addr; int sock_prot; int sock_type; } ;
typedef TYPE_3__ test_params ;
struct TYPE_11__ {int sock_flags; TYPE_3__* general; } ;
typedef TYPE_4__ client_params ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_12__ {scalar_t__ s; void* send_buf; void* recv_buf; TYPE_2__ addr; } ;
typedef TYPE_5__ client_memory ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 size_t VAR_6 ;
 int * VAR_7 ;
 int FUNC_6 (void*,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int,char*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_11 ( client_params *VAR_10 )
{
    test_params *VAR_11 = VAR_10->general;
    client_memory *VAR_12 = FUNC_0 (VAR_3, sizeof (client_memory));

    FUNC_2 ( VAR_9, VAR_12 );

    FUNC_5 ( VAR_8, VAR_1 );

    VAR_12->s = FUNC_3 ( VAR_0, VAR_11->sock_type, VAR_11->sock_prot,
                          ((void*)0), 0, VAR_10->sock_flags );

    VAR_12->addr.sin_family = VAR_0;
    VAR_12->addr.sin_addr.s_addr = FUNC_8 ( VAR_11->inet_addr );
    VAR_12->addr.sin_port = FUNC_7 ( VAR_11->inet_port );

    FUNC_10 ( VAR_12->s != VAR_2, "Client: WSASocket failed\n" );

    VAR_12->send_buf = FUNC_0 ( VAR_3, 2 * VAR_11->n_chunks * VAR_11->chunk_size );
    VAR_12->recv_buf = VAR_12->send_buf + VAR_11->n_chunks * VAR_11->chunk_size;
    FUNC_6 ( VAR_12->send_buf, VAR_11->chunk_size, VAR_11->n_chunks );

    FUNC_1 ( VAR_7[VAR_6] );

    FUNC_4 ( FUNC_9 ( VAR_11->n_clients, VAR_4 ), VAR_7, VAR_5, VAR_1 );
}
