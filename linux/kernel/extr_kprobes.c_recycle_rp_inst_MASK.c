
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kretprobe_instance {int hlist; struct kretprobe* rp; } ;
struct hlist_head {int dummy; } ;
struct kretprobe {int lock; struct hlist_head free_instances; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct kretprobe*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct kretprobe_instance *VAR_0,
       struct hlist_head *VAR_1)
{
 struct kretprobe *VAR_2 = VAR_0->rp;


 FUNC_2(&VAR_0->hlist);
 FUNC_0(&VAR_0->hlist);
 if (FUNC_3(VAR_2)) {
  FUNC_4(&VAR_2->lock);
  FUNC_1(&VAR_0->hlist, &VAR_2->free_instances);
  FUNC_5(&VAR_2->lock);
 } else

  FUNC_1(&VAR_0->hlist, VAR_1);
}
