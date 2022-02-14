
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcm_sock {scalar_t__ rx_disabled; struct kcm_mux* mux; } ;
struct kcm_mux {int rx_lock; } ;


 int FUNC_0 (struct kcm_sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kcm_sock *VAR_0)
{
 struct kcm_mux *VAR_1 = VAR_0->mux;

 if (!VAR_0->rx_disabled)
  return;

 FUNC_1(&VAR_1->rx_lock);

 VAR_0->rx_disabled = 0;
 FUNC_0(VAR_0);

 FUNC_2(&VAR_1->rx_lock);
}
