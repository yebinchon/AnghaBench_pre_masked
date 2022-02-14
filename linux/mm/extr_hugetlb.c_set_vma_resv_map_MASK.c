
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct resv_map {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,struct vm_area_struct*) ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct vm_area_struct *VAR_2, struct resv_map *VAR_3)
{
 FUNC_0(!FUNC_2(VAR_2), VAR_2);
 FUNC_0(VAR_2->vm_flags & VAR_1, VAR_2);

 FUNC_3(VAR_2, (FUNC_1(VAR_2) &
    VAR_0) | (unsigned long)VAR_3);
}
