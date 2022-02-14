
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union smc_host_cursor {int dummy; } smc_host_cursor ;
struct smc_connection {TYPE_1__* sndbuf_desc; int tx_curs_prep; int tx_curs_sent; } ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (union smc_host_cursor*,int *,struct smc_connection*) ;
 int FUNC_1 (int ,union smc_host_cursor*,union smc_host_cursor*) ;

__attribute__((used)) static inline int FUNC_2(struct smc_connection *VAR_0)
{
 union smc_host_cursor VAR_1, VAR_2;

 FUNC_0(&VAR_1, &VAR_0->tx_curs_sent, VAR_0);
 FUNC_0(&VAR_2, &VAR_0->tx_curs_prep, VAR_0);
 return FUNC_1(VAR_0->sndbuf_desc->len, &VAR_1, &VAR_2);
}
