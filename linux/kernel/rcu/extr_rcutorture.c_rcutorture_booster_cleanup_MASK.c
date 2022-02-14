
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 struct task_struct** VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct task_struct*) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_3)
{
 struct task_struct *VAR_4;

 if (VAR_1[VAR_3] == ((void*)0))
  return 0;
 FUNC_0(&VAR_0);
 VAR_4 = VAR_1[VAR_3];
 VAR_1[VAR_3] = ((void*)0);
 FUNC_2();
 FUNC_1(&VAR_0);


 FUNC_3(VAR_2, VAR_4);
 return 0;
}
