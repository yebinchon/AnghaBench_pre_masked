
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_region {unsigned long vm_top; unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; } ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; struct vm_region* vm_region; TYPE_1__* vm_ops; scalar_t__ vm_file; } ;
struct mm_struct {scalar_t__ map_count; } ;
struct TYPE_2__ {int (* open ) (struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct vm_region*) ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_2 (struct vm_region*) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (int *) ;
 struct vm_region* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct vm_region*) ;
 int VAR_3 ;
 int FUNC_7 (struct vm_area_struct*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int *) ;
 struct vm_area_struct* FUNC_9 (struct vm_area_struct*) ;
 int VAR_5 ;

int FUNC_10(struct mm_struct *VAR_6, struct vm_area_struct *VAR_7,
       unsigned long VAR_8, int VAR_9)
{
 struct vm_area_struct *VAR_10;
 struct vm_region *VAR_11;
 unsigned long VAR_12;



 if (VAR_7->vm_file)
  return -VAR_0;

 if (VAR_6->map_count >= VAR_4)
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_5, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_9(VAR_7);
 if (!VAR_10) {
  FUNC_6(VAR_5, VAR_11);
  return -VAR_0;
 }


 *VAR_11 = *VAR_7->vm_region;
 VAR_10->vm_region = VAR_11;

 VAR_12 = (VAR_8 - VAR_7->vm_start) >> VAR_2;

 if (VAR_9) {
  VAR_11->vm_top = VAR_11->vm_end = VAR_10->vm_end = VAR_8;
 } else {
  VAR_11->vm_start = VAR_10->vm_start = VAR_8;
  VAR_11->vm_pgoff = VAR_10->vm_pgoff += VAR_12;
 }

 if (VAR_10->vm_ops && VAR_10->vm_ops->open)
  VAR_10->vm_ops->open(VAR_10);

 FUNC_3(VAR_7);
 FUNC_4(&VAR_3);
 FUNC_2(VAR_7->vm_region);
 if (VAR_9) {
  VAR_7->vm_region->vm_start = VAR_7->vm_start = VAR_8;
  VAR_7->vm_region->vm_pgoff = VAR_7->vm_pgoff += VAR_12;
 } else {
  VAR_7->vm_region->vm_end = VAR_7->vm_end = VAR_8;
  VAR_7->vm_region->vm_top = VAR_8;
 }
 FUNC_0(VAR_7->vm_region);
 FUNC_0(VAR_10->vm_region);
 FUNC_8(&VAR_3);
 FUNC_1(VAR_6, VAR_7);
 FUNC_1(VAR_6, VAR_10);
 return 0;
}
