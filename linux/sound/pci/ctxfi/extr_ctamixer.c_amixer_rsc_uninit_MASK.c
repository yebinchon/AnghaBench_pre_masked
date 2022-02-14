
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amixer {int * sum; int * input; int * ops; int rsc; } ;


 int FUNC_0 (struct amixer*,int *,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct amixer *VAR_0)
{
 FUNC_0(VAR_0, ((void*)0), 0, ((void*)0));
 FUNC_1(&VAR_0->rsc);
 VAR_0->ops = ((void*)0);
 VAR_0->input = ((void*)0);
 VAR_0->sum = ((void*)0);
 return 0;
}
