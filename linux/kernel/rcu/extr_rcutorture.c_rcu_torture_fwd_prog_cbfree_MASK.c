
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_fwd_cb {struct rcu_fwd_cb* rfc_next; } ;


 int FUNC_0 (struct rcu_fwd_cb*) ;
 struct rcu_fwd_cb* VAR_0 ;
 struct rcu_fwd_cb** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_4(void)
{
 unsigned long VAR_3;
 unsigned long VAR_4 = 0;
 struct rcu_fwd_cb *VAR_5;

 for (;;) {
  FUNC_2(&VAR_2, VAR_3);
  VAR_5 = VAR_0;
  if (!VAR_5) {
   FUNC_3(&VAR_2, VAR_3);
   break;
  }
  VAR_0 = VAR_5->rfc_next;
  if (!VAR_0)
   VAR_1 = &VAR_0;
  FUNC_3(&VAR_2, VAR_3);
  FUNC_0(VAR_5);
  VAR_4++;
  FUNC_1(VAR_4);
 }
 return VAR_4;
}
