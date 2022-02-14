
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_peer_base {scalar_t__ total; int lock; int rb_root; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct inet_peer_base *VAR_1)
{
 VAR_1->rb_root = VAR_0;
 FUNC_0(&VAR_1->lock);
 VAR_1->total = 0;
}
