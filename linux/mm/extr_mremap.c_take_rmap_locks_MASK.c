
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ anon_vma; TYPE_1__* vm_file; } ;
struct TYPE_2__ {int f_mapping; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0)
{
 if (VAR_0->vm_file)
  FUNC_1(VAR_0->vm_file->f_mapping);
 if (VAR_0->anon_vma)
  FUNC_0(VAR_0->anon_vma);
}
