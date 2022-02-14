
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long,int ,int ) ;
 unsigned long FUNC_2 (unsigned long,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct vm_area_struct *VAR_2,
         unsigned long VAR_3,
         unsigned long VAR_4,
         unsigned long VAR_5,
         unsigned long *VAR_6,
         unsigned long *VAR_7)
{
 *VAR_6 = FUNC_1(VAR_4, FUNC_0(VAR_2->vm_start),
        FUNC_0(VAR_3 & VAR_0));
 *VAR_7 = FUNC_2(VAR_5, FUNC_0(VAR_2->vm_end),
      FUNC_0((VAR_3 & VAR_0) + VAR_1));
}
