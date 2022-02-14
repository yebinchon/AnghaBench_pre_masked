
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,int,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct mm_struct*) ;

__attribute__((used)) static inline void FUNC_2(struct mm_struct *VAR_2, int *VAR_3)
{
 int VAR_4;

 if (VAR_1->mm == VAR_2)
  FUNC_1(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3[VAR_4])
   FUNC_0(VAR_2, VAR_4, VAR_3[VAR_4]);
}
