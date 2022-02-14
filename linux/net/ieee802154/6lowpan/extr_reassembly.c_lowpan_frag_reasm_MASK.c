
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int tstamp; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int * last_run_head; int * fragments_tail; int rb_fragments; int stamp; } ;
struct lowpan_frag_queue {TYPE_1__ q; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*,void*,int) ;
 void* FUNC_2 (TYPE_1__*,struct sk_buff*,struct sk_buff*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct lowpan_frag_queue *VAR_1, struct sk_buff *VAR_2,
        struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 void *VAR_5;

 FUNC_0(&VAR_1->q);

 VAR_5 = FUNC_2(&VAR_1->q, VAR_2, VAR_3);
 if (!VAR_5)
  goto out_oom;
 FUNC_1(&VAR_1->q, VAR_2, VAR_5, 0);

 VAR_2->dev = VAR_4;
 VAR_2->tstamp = VAR_1->q.stamp;
 VAR_1->q.rb_fragments = VAR_0;
 VAR_1->q.fragments_tail = ((void*)0);
 VAR_1->q.last_run_head = ((void*)0);

 return 1;
out_oom:
 FUNC_3("lowpan_frag_reasm: no memory for reassembly\n");
 return -1;
}
