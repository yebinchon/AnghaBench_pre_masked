
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpumask_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_5)
{
 cpumask_t VAR_6;

 if (!VAR_4)
  return 0;

 FUNC_1(&VAR_6, &VAR_2);
 FUNC_0(VAR_5, &VAR_6);
 if (FUNC_2(&VAR_6))

  return -VAR_0;

 FUNC_4(((void*)0));
 if (!FUNC_2(&VAR_3))
  return 0;
 FUNC_5(FUNC_3(&VAR_2),
     VAR_1, ((void*)0), 1);
 return 0;
}
