
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned long,int ) ;

__attribute__((used)) static int FUNC_1(struct vm_area_struct *VAR_3,
      unsigned long VAR_4, unsigned long VAR_5)
{
 return FUNC_0(VAR_1, VAR_3->vm_file, VAR_5,
      !(VAR_3->vm_flags & VAR_2) ? VAR_0 : 0);
}
