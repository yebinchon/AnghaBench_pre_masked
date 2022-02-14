
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ip_vs_proto_data {TYPE_1__* pp; } ;
struct ip_vs_conn {int dummy; } ;
struct TYPE_2__ {int (* state_transition ) (struct ip_vs_conn*,int,struct sk_buff const*,struct ip_vs_proto_data*) ;} ;


 scalar_t__ FUNC_0 (int (*) (struct ip_vs_conn*,int,struct sk_buff const*,struct ip_vs_proto_data*)) ;
 int FUNC_1 (struct ip_vs_conn*,int,struct sk_buff const*,struct ip_vs_proto_data*) ;

__attribute__((used)) static inline void
FUNC_2(struct ip_vs_conn *VAR_0, int VAR_1,
  const struct sk_buff *VAR_2,
  struct ip_vs_proto_data *VAR_3)
{
 if (FUNC_0(VAR_3->pp->state_transition))
  VAR_3->pp->state_transition(VAR_0, VAR_1, VAR_2, VAR_3);
}
