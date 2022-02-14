
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int urg_state; int splice_pending; } ;
struct TYPE_3__ {int sk_data_ready; } ;
struct smc_sock {TYPE_2__ conn; TYPE_1__ sk; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;

void FUNC_1(struct smc_sock *VAR_2)
{
 VAR_2->sk.sk_data_ready = VAR_1;
 FUNC_0(&VAR_2->conn.splice_pending, 0);
 VAR_2->conn.urg_state = VAR_0;
}
