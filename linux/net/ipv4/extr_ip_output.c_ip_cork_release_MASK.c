
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_cork {int * dst; int * opt; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct inet_cork *VAR_1)
{
 VAR_1->flags &= ~VAR_0;
 FUNC_1(VAR_1->opt);
 VAR_1->opt = ((void*)0);
 FUNC_0(VAR_1->dst);
 VAR_1->dst = ((void*)0);
}
