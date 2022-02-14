
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_file; TYPE_1__* vm_ops; struct vm_area_struct* vm_next; } ;
struct TYPE_2__ {int (* close ) (struct vm_area_struct*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (struct vm_area_struct*) ;

__attribute__((used)) static struct vm_area_struct *FUNC_6(struct vm_area_struct *VAR_0)
{
 struct vm_area_struct *VAR_1 = VAR_0->vm_next;

 FUNC_1();
 if (VAR_0->vm_ops && VAR_0->vm_ops->close)
  VAR_0->vm_ops->close(VAR_0);
 if (VAR_0->vm_file)
  FUNC_0(VAR_0->vm_file);
 FUNC_2(FUNC_5(VAR_0));
 FUNC_4(VAR_0);
 return VAR_1;
}
