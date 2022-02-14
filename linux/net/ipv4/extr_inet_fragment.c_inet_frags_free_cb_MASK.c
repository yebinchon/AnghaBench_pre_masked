
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_frag_queue {int flags; int refcnt; int lock; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct inet_frag_queue*) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, void *VAR_3)
{
 struct inet_frag_queue *VAR_4 = VAR_2;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->timer) ? 1 : 0;

 FUNC_3(&VAR_4->lock);
 if (!(VAR_4->flags & VAR_0)) {
  VAR_4->flags |= VAR_0;
  VAR_5++;
 } else if (VAR_4->flags & VAR_1) {
  VAR_5++;
 }
 FUNC_4(&VAR_4->lock);

 if (FUNC_2(VAR_5, &VAR_4->refcnt))
  FUNC_1(VAR_4);
}
