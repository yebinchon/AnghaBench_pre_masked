
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,int *,int ,int) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,int *) ;

__attribute__((used)) static void FUNC_4(struct vm_area_struct *VAR_2, unsigned long VAR_3,
  pmd_t *VAR_4, int VAR_5)
{
 pmd_t VAR_6;

 VAR_6 = FUNC_1(*VAR_4);
 if (VAR_5 & VAR_0)
  VAR_6 = FUNC_0(VAR_6);
 if (FUNC_2(VAR_2, VAR_3 & VAR_1,
    VAR_4, VAR_6, VAR_5 & VAR_0))
  FUNC_3(VAR_2, VAR_3, VAR_4);
}
