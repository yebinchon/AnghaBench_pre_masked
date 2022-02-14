
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int flags; int hlist; int list; scalar_t__ post_handler; int fault_handler; int pre_handler; int addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct kprobe*,struct kprobe*) ;
 int FUNC_3 (struct kprobe*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct kprobe*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct kprobe *VAR_4, struct kprobe *VAR_5)
{

 FUNC_2(VAR_5, VAR_4);
 FUNC_3(VAR_4);
 VAR_4->addr = VAR_5->addr;
 VAR_4->flags = VAR_5->flags & ~VAR_0;
 VAR_4->pre_handler = VAR_3;
 VAR_4->fault_handler = VAR_1;

 if (VAR_5->post_handler && !FUNC_5(VAR_5))
  VAR_4->post_handler = VAR_2;

 FUNC_1(&VAR_4->list);
 FUNC_0(&VAR_4->hlist);

 FUNC_6(&VAR_5->list, &VAR_4->list);
 FUNC_4(&VAR_5->hlist, &VAR_4->hlist);
}
