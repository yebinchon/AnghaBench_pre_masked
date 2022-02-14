
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; } ;


 unsigned long FUNC_0 (struct vm_area_struct*) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct vm_area_struct *VAR_0)
{
 return VAR_0->vm_pgoff + FUNC_0(VAR_0) - 1;
}
