
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_node {int grphi; int grplo; int level; int gp_seq; } ;
struct rcu_data {int dummy; } ;
struct TYPE_2__ {int name; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long,int ,int ,int ,char const*) ;

__attribute__((used)) static void FUNC_1(struct rcu_node *VAR_1, struct rcu_data *VAR_2,
         unsigned long VAR_3, const char *VAR_4)
{
 FUNC_0(VAR_0.name, VAR_1->gp_seq, VAR_3,
          VAR_1->level, VAR_1->grplo, VAR_1->grphi, VAR_4);
}
