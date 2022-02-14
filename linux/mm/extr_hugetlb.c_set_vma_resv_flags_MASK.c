
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int FUNC_0 (int,struct vm_area_struct*) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 FUNC_0(!FUNC_2(VAR_1), VAR_1);
 FUNC_0(VAR_1->vm_flags & VAR_0, VAR_1);

 FUNC_3(VAR_1, FUNC_1(VAR_1) | VAR_2);
}
