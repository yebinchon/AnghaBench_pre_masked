
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; } ;
struct file {int dummy; } ;
struct address_space {int i_mmap; } ;
struct TYPE_2__ {int i_writecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct file*) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct vm_area_struct*,int *) ;

__attribute__((used)) static void FUNC_6(struct vm_area_struct *VAR_2,
  struct file *VAR_3, struct address_space *VAR_4)
{
 if (VAR_2->vm_flags & VAR_0)
  FUNC_0(&FUNC_1(VAR_3)->i_writecount);
 if (VAR_2->vm_flags & VAR_1)
  FUNC_4(VAR_4);

 FUNC_2(VAR_4);
 FUNC_5(VAR_2, &VAR_4->i_mmap);
 FUNC_3(VAR_4);
}
