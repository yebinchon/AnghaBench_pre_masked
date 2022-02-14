
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cond; int mutex; int * data; int * in; } ;
struct perf_top {TYPE_1__ qe; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct perf_top*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct perf_top *VAR_1)
{
 FUNC_0(&VAR_1->qe.data[0], VAR_0, VAR_1);
 FUNC_0(&VAR_1->qe.data[1], VAR_0, VAR_1);
 FUNC_1(&VAR_1->qe.data[0], 1);
 FUNC_1(&VAR_1->qe.data[1], 1);
 VAR_1->qe.in = &VAR_1->qe.data[0];
 FUNC_3(&VAR_1->qe.mutex, ((void*)0));
 FUNC_2(&VAR_1->qe.cond, ((void*)0));
}
