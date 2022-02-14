
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct list_set {TYPE_1__ gc; struct ip_set* set; } ;
struct ip_set {int timeout; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct list_set* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct list_set* VAR_3 ;
 int FUNC_3 (struct ip_set*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct timer_list *VAR_4)
{
 struct list_set *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_1);
 struct ip_set *VAR_6 = VAR_5->set;

 FUNC_4(&VAR_6->lock);
 FUNC_3(VAR_6);
 FUNC_5(&VAR_6->lock);

 VAR_5->gc.expires = VAR_2 + FUNC_0(VAR_6->timeout) * VAR_0;
 FUNC_1(&VAR_5->gc);
}
