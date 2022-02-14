
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conntrack_gc_work {int exiting; int next_gc_run; int dwork; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct conntrack_gc_work *VAR_2)
{
 FUNC_0(&VAR_2->dwork, VAR_1);
 VAR_2->next_gc_run = VAR_0;
 VAR_2->exiting = 0;
}
