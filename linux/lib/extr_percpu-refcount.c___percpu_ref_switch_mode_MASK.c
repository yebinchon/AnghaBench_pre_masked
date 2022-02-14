
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_ref {int percpu_count_ptr; scalar_t__ force_atomic; int confirm_switch; } ;
typedef int percpu_ref_func_t ;


 int VAR_0 ;
 int FUNC_0 (struct percpu_ref*,int *) ;
 int FUNC_1 (struct percpu_ref*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct percpu_ref *VAR_3,
         percpu_ref_func_t *VAR_4)
{
 FUNC_2(&VAR_1);






 FUNC_3(VAR_2, !VAR_3->confirm_switch,
       VAR_1);

 if (VAR_3->force_atomic || (VAR_3->percpu_count_ptr & VAR_0))
  FUNC_0(VAR_3, VAR_4);
 else
  FUNC_1(VAR_3);
}
