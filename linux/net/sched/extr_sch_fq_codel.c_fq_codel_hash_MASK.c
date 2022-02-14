
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fq_codel_sched_data {int flows_cnt; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_2(const struct fq_codel_sched_data *VAR_0,
      struct sk_buff *VAR_1)
{
 return FUNC_0(FUNC_1(VAR_1), VAR_0->flows_cnt);
}
