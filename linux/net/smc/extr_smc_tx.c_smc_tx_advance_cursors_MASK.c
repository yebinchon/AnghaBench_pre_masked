
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union smc_host_cursor {int dummy; } smc_host_cursor ;
struct smc_connection {TYPE_1__* sndbuf_desc; int peer_rmbe_space; int peer_rmbe_size; } ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (int ,union smc_host_cursor*,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline void FUNC_4(struct smc_connection *VAR_0,
       union smc_host_cursor *VAR_1,
       union smc_host_cursor *VAR_2,
       size_t VAR_3)
{
 FUNC_1(VAR_0->peer_rmbe_size, VAR_1, VAR_3);

 FUNC_3();

 FUNC_0(VAR_3, &VAR_0->peer_rmbe_space);

 FUNC_2();
 FUNC_1(VAR_0->sndbuf_desc->len, VAR_2, VAR_3);
}
