
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pgprot_t ;


 unsigned long FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,int ,int,int) ;
 unsigned long FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*) ;

unsigned long FUNC_3(struct vm_area_struct *VAR_0, unsigned long VAR_1,
         unsigned long VAR_2, pgprot_t VAR_3,
         int VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 if (FUNC_2(VAR_0))
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_6;
}
