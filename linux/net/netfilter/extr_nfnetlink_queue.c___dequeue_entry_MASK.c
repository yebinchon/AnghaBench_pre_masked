
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfqnl_instance {int queue_total; } ;
struct nf_queue_entry {int list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct nfqnl_instance *VAR_0, struct nf_queue_entry *VAR_1)
{
 FUNC_0(&VAR_1->list);
 VAR_0->queue_total--;
}
