
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_area_struct {int vm_mm; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int ,struct vm_area_struct*,unsigned long,unsigned int) ;
 int FUNC_7 (struct vm_area_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;

vm_fault_t FUNC_13(struct vm_area_struct *VAR_9, unsigned long VAR_10,
  unsigned int VAR_11)
{
 vm_fault_t VAR_12;

 FUNC_1(VAR_5);

 FUNC_5(VAR_4);
 FUNC_4(VAR_9->vm_mm, VAR_4);


 FUNC_3(VAR_8);

 if (!FUNC_2(VAR_9, VAR_11 & VAR_3,
         VAR_11 & VAR_0,
         VAR_11 & VAR_1))
  return VAR_7;





 if (VAR_11 & VAR_2)
  FUNC_8();

 if (FUNC_12(FUNC_7(VAR_9)))
  VAR_12 = FUNC_6(VAR_9->vm_mm, VAR_9, VAR_10, VAR_11);
 else
  VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_11);

 if (VAR_11 & VAR_2) {
  FUNC_9();






  if (FUNC_11(VAR_8) && !(VAR_12 & VAR_6))
   FUNC_10(0);
 }

 return VAR_12;
}
