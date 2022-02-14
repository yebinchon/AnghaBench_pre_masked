
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 int VAR_0 ;


 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct vm_area_struct *VAR_4,
       unsigned long *VAR_5, int VAR_6)
{
 switch (VAR_6) {
 case 129:
  *VAR_5 &= ~VAR_2;
  *VAR_5 |= VAR_1;





  if (!(*VAR_5 & VAR_3) &&
    FUNC_0(VAR_4, *VAR_5))
   return -VAR_0;
  break;
 case 128:
  *VAR_5 &= ~VAR_1;
  *VAR_5 |= VAR_2;





  break;
 }

 return 0;
}
