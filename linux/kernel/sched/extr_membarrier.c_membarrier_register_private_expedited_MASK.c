
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mm_struct* mm; } ;
struct mm_struct {int membarrier_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 struct task_struct* VAR_7 ;
 int FUNC_3 (struct mm_struct*) ;

__attribute__((used)) static int FUNC_4(int VAR_8)
{
 struct task_struct *VAR_9 = VAR_7;
 struct mm_struct *VAR_10 = VAR_9->mm;
 int VAR_11 = VAR_4,
     VAR_12 = VAR_3,
     VAR_13;

 if (VAR_8 & VAR_2) {
  if (!FUNC_0(VAR_0))
   return -VAR_1;
  VAR_11 =
   VAR_6;
 }






 if ((FUNC_2(&VAR_10->membarrier_state) & VAR_11) == VAR_11)
  return 0;
 if (VAR_8 & VAR_2)
  VAR_12 |= VAR_5;
 FUNC_1(VAR_12, &VAR_10->membarrier_state);
 VAR_13 = FUNC_3(VAR_10);
 if (VAR_13)
  return VAR_13;
 FUNC_1(VAR_11, &VAR_10->membarrier_state);

 return 0;
}
