
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_set {int gc; } ;
struct ip_set {int timeout; struct list_set* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,void (*) (struct timer_list*),int ) ;

__attribute__((used)) static void
FUNC_3(struct ip_set *VAR_2, void (*VAR_3)(struct timer_list *VAR_4))
{
 struct list_set *VAR_5 = VAR_2->data;

 FUNC_2(&VAR_5->gc, VAR_3, 0);
 FUNC_1(&VAR_5->gc, VAR_1 + FUNC_0(VAR_2->timeout) * VAR_0);
}
