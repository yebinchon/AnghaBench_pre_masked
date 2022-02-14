
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_mm; int vm_end; } ;
struct TYPE_2__ {int mm; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vm_area_struct*) ;
 TYPE_1__* VAR_3 ;
 struct vm_area_struct* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned char*,int,unsigned long) ;
 unsigned long FUNC_4 (int ,unsigned long) ;
 int VAR_4 ;
 int FUNC_5 (int ,unsigned long,unsigned long,int *,unsigned char*) ;

__attribute__((used)) static long FUNC_6(unsigned long VAR_5, unsigned long VAR_6, unsigned char *VAR_7)
{
 struct vm_area_struct *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_3->mm, VAR_5);
 if (!VAR_8 || VAR_5 < VAR_8->vm_start)
  return -VAR_0;
 VAR_9 = FUNC_4(VAR_8->vm_end, VAR_5 + (VAR_6 << VAR_1));
 if (!FUNC_1(VAR_8)) {
  unsigned long VAR_11 = FUNC_0(VAR_9 - VAR_5, VAR_2);
  FUNC_3(VAR_7, 1, VAR_11);
  return VAR_11;
 }
 VAR_10 = FUNC_5(VAR_8->vm_mm, VAR_5, VAR_9, &VAR_4, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 return (VAR_9 - VAR_5) >> VAR_1;
}
