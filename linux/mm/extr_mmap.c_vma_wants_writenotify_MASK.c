
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_flags_t ;
struct vm_operations_struct {scalar_t__ pfn_mkwrite; scalar_t__ page_mkwrite; } ;
struct vm_area_struct {int vm_flags; TYPE_1__* vm_file; struct vm_operations_struct* vm_ops; } ;
typedef int pgprot_t ;
struct TYPE_2__ {scalar_t__ f_mapping; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct vm_area_struct *VAR_5, pgprot_t VAR_6)
{
 vm_flags_t VAR_7 = VAR_5->vm_flags;
 const struct vm_operations_struct *VAR_8 = VAR_5->vm_ops;


 if ((VAR_7 & (VAR_4|VAR_2)) != ((VAR_4|VAR_2)))
  return 0;


 if (VAR_8 && (VAR_8->page_mkwrite || VAR_8->pfn_mkwrite))
  return 1;



 if (FUNC_2(VAR_6) !=
     FUNC_2(FUNC_3(VAR_6, VAR_7)))
  return 0;


 if (FUNC_0(VAR_0) && !(VAR_7 & VAR_3))
  return 1;


 if (VAR_7 & VAR_1)
  return 0;


 return VAR_5->vm_file && VAR_5->vm_file->f_mapping &&
  FUNC_1(VAR_5->vm_file->f_mapping);
}
