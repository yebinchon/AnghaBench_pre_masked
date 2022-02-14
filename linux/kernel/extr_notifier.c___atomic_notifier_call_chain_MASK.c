
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atomic_notifier_head {int head; } ;


 int FUNC_0 (int *,unsigned long,void*,int,int*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct atomic_notifier_head *VAR_0,
     unsigned long VAR_1, void *VAR_2,
     int VAR_3, int *VAR_4)
{
 int VAR_5;

 FUNC_1();
 VAR_5 = FUNC_0(&VAR_0->head, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2();
 return VAR_5;
}
