
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {int flags; struct mm_struct* mm; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct mm_struct *VAR_2)
{
 return VAR_1->mm == VAR_2 && !(VAR_1->flags & VAR_0);
}
