
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_3,
        unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = VAR_4; VAR_6 < VAR_5 && !VAR_7; VAR_6 += VAR_1) {
  if (FUNC_1(VAR_3->vm_mm))
   break;
  if (FUNC_2(VAR_2))
   VAR_7 = -VAR_0;
  else
   VAR_7 = FUNC_0(VAR_3, VAR_6);
 }
 return VAR_7;
}
