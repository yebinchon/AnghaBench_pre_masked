
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {scalar_t__ post_handler; int list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct kprobe*,int) ;

__attribute__((used)) static int FUNC_2(struct kprobe *VAR_1, struct kprobe *VAR_2)
{
 if (VAR_2->post_handler)
  FUNC_1(VAR_1, 1);

 FUNC_0(&VAR_2->list, &VAR_1->list);
 if (VAR_2->post_handler && !VAR_1->post_handler)
  VAR_1->post_handler = VAR_0;

 return 0;
}
