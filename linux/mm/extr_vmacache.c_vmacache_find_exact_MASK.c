
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct mm_struct {int dummy; } ;
struct TYPE_3__ {struct vm_area_struct** vmas; } ;
struct TYPE_4__ {TYPE_1__ vmacache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct mm_struct*) ;

struct vm_area_struct *FUNC_3(struct mm_struct *VAR_4,
        unsigned long VAR_5,
        unsigned long VAR_6)
{
 int VAR_7 = FUNC_0(VAR_5);
 int VAR_8;

 FUNC_1(VAR_0);

 if (!FUNC_2(VAR_4))
  return ((void*)0);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct vm_area_struct *VAR_9 = VAR_3->vmacache.vmas[VAR_7];

  if (VAR_9 && VAR_9->vm_start == VAR_5 && VAR_9->vm_end == VAR_6) {
   FUNC_1(VAR_1);
   return VAR_9;
  }
  if (++VAR_7 == VAR_2)
   VAR_7 = 0;
 }

 return ((void*)0);
}
