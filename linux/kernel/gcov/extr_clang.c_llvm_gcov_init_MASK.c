
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int head; int functions; } ;
typedef int (* llvm_gcov_callback ) () ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct gcov_info* VAR_3 ;
 int FUNC_1 (int ,struct gcov_info*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct gcov_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(llvm_gcov_callback VAR_6, llvm_gcov_callback VAR_7)
{
 struct gcov_info *VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);

 if (!VAR_8)
  return;

 FUNC_0(&VAR_8->head);
 FUNC_0(&VAR_8->functions);

 FUNC_4(&VAR_5);

 FUNC_3(&VAR_8->head, &VAR_2);
 VAR_3 = VAR_8;
 VAR_6();
 VAR_3 = ((void*)0);
 if (VAR_4)
  FUNC_1(VAR_0, VAR_8);

 FUNC_5(&VAR_5);
}
