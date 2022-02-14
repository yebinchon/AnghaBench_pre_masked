
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsos {int root; int head; } ;
struct dso {int node; } ;


 int FUNC_0 (int *,struct dso*,int *) ;
 int FUNC_1 (struct dso*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct dsos *VAR_0, struct dso *VAR_1)
{
 FUNC_2(&VAR_1->node, &VAR_0->head);
 FUNC_0(&VAR_0->root, VAR_1, ((void*)0));
 FUNC_1(VAR_1);
}
