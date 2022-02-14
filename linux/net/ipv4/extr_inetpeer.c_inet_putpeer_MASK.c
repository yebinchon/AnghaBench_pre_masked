
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_peer {int rcu; int refcnt; scalar_t__ dtime; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct inet_peer *VAR_2)
{
 VAR_2->dtime = (__u32)VAR_1;

 if (FUNC_1(&VAR_2->refcnt))
  FUNC_0(&VAR_2->rcu, VAR_0);
}
