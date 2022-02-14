
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_frags {int * frags_cachep; int completion; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inet_frags *VAR_0)
{
 if (FUNC_2(&VAR_0->refcnt))
  FUNC_0(&VAR_0->completion);

 FUNC_3(&VAR_0->completion);

 FUNC_1(VAR_0->frags_cachep);
 VAR_0->frags_cachep = ((void*)0);
}
