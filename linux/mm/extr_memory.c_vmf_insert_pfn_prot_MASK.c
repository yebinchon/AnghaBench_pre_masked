
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; } ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int ,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned long,int ) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct vm_area_struct*,int *,int ) ;

vm_fault_t FUNC_7(struct vm_area_struct *VAR_4, unsigned long VAR_5,
   unsigned long VAR_6, pgprot_t VAR_7)
{






 FUNC_0(!(VAR_4->vm_flags & (VAR_3|VAR_2)));
 FUNC_0((VAR_4->vm_flags & (VAR_3|VAR_2)) ==
      (VAR_3|VAR_2));
 FUNC_0((VAR_4->vm_flags & VAR_3) && FUNC_3(VAR_4->vm_flags));
 FUNC_0((VAR_4->vm_flags & VAR_2) && FUNC_5(VAR_6));

 if (VAR_5 < VAR_4->vm_start || VAR_5 >= VAR_4->vm_end)
  return VAR_1;

 if (!FUNC_4(VAR_6, VAR_7))
  return VAR_1;

 FUNC_6(VAR_4, &VAR_7, FUNC_1(VAR_6, VAR_0));

 return FUNC_2(VAR_4, VAR_5, FUNC_1(VAR_6, VAR_0), VAR_7,
   0);
}
