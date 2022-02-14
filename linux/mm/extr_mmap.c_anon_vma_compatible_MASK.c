
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; scalar_t__ vm_file; int vm_flags; scalar_t__ vm_pgoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_5, struct vm_area_struct *VAR_6)
{
 return VAR_5->vm_end == VAR_6->vm_start &&
  FUNC_0(FUNC_1(VAR_5), FUNC_1(VAR_6)) &&
  VAR_5->vm_file == VAR_6->vm_file &&
  !((VAR_5->vm_flags ^ VAR_6->vm_flags) & ~(VAR_2|VAR_4|VAR_1|VAR_3)) &&
  VAR_6->vm_pgoff == VAR_5->vm_pgoff + ((VAR_6->vm_start - VAR_5->vm_start) >> VAR_0);
}
