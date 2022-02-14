
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * kcov; int * kcov_area; scalar_t__ kcov_size; int kcov_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

void FUNC_2(struct task_struct *VAR_1)
{
 FUNC_0(VAR_1->kcov_mode, VAR_0);
 FUNC_1();
 VAR_1->kcov_size = 0;
 VAR_1->kcov_area = ((void*)0);
 VAR_1->kcov = ((void*)0);
}
