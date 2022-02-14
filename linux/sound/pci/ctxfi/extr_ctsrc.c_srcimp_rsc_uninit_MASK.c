
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcimp {int rsc; int * mgr; int * ops; int * imappers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct srcimp *VAR_0)
{
 FUNC_0(VAR_0->imappers);
 VAR_0->imappers = ((void*)0);
 VAR_0->ops = ((void*)0);
 VAR_0->mgr = ((void*)0);
 FUNC_1(&VAR_0->rsc);

 return 0;
}
