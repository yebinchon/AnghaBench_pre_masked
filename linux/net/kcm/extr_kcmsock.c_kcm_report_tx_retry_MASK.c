
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kcm_sock {struct kcm_mux* mux; } ;
struct TYPE_2__ {int tx_retries; } ;
struct kcm_mux {int lock; TYPE_1__ stats; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kcm_sock *VAR_0)
{
 struct kcm_mux *VAR_1 = VAR_0->mux;

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1->stats.tx_retries);
 FUNC_2(&VAR_1->lock);
}
