
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_region {int vm_flags; unsigned long vm_start; unsigned long vm_end; unsigned long vm_top; } ;
struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; scalar_t__ vm_file; TYPE_1__* vm_region; } ;
typedef unsigned long loff_t ;
struct TYPE_4__ {int comm; int pid; } ;
struct TYPE_3__ {int vm_end; int vm_top; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long,int *) ;
 int FUNC_3 (scalar_t__,struct vm_area_struct*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (scalar_t__,void*,unsigned long,unsigned long*) ;
 int FUNC_7 (void*,int ,unsigned long) ;
 int VAR_8 ;
 int FUNC_8 (char*,unsigned long,int ,int ) ;
 int FUNC_9 (int ,int *) ;
 unsigned long VAR_9 ;
 int FUNC_10 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_11(struct vm_area_struct *VAR_10,
      struct vm_region *VAR_11,
      unsigned long VAR_12,
      unsigned long VAR_13)
{
 unsigned long VAR_14, VAR_15;
 void *VAR_16;
 int VAR_17, VAR_18;





 if (VAR_13 & VAR_3) {
  VAR_17 = FUNC_3(VAR_10->vm_file, VAR_10);
  if (VAR_17 == 0) {

   FUNC_0(!(VAR_10->vm_flags & VAR_6));
   VAR_10->vm_region->vm_top = VAR_10->vm_region->vm_end;
   return 0;
  }
  if (VAR_17 != -VAR_1)
   return VAR_17;




 }






 VAR_18 = FUNC_5(VAR_12);
 VAR_14 = 1 << VAR_18;
 VAR_15 = VAR_12 >> VAR_4;


 if (VAR_9 && VAR_14 - VAR_15 >= VAR_9)
  VAR_14 = VAR_15;

 VAR_16 = FUNC_1(VAR_14 << VAR_4, VAR_2);
 if (!VAR_16)
  goto enomem;

 FUNC_2(VAR_14, &VAR_8);

 VAR_11->vm_flags = VAR_10->vm_flags |= VAR_5;
 VAR_11->vm_start = (unsigned long) VAR_16;
 VAR_11->vm_end = VAR_11->vm_start + VAR_12;
 VAR_11->vm_top = VAR_11->vm_start + (VAR_14 << VAR_4);

 VAR_10->vm_start = VAR_11->vm_start;
 VAR_10->vm_end = VAR_11->vm_start + VAR_12;

 if (VAR_10->vm_file) {

  loff_t VAR_19;

  VAR_19 = VAR_10->vm_pgoff;
  VAR_19 <<= VAR_4;

  VAR_17 = FUNC_6(VAR_10->vm_file, VAR_16, VAR_12, &VAR_19);
  if (VAR_17 < 0)
   goto error_free;


  if (VAR_17 < VAR_12)
   FUNC_7(VAR_16 + VAR_17, 0, VAR_12 - VAR_17);

 } else {
  FUNC_10(VAR_10);
 }

 return 0;

error_free:
 FUNC_4(VAR_11->vm_start, VAR_11->vm_top);
 VAR_11->vm_start = VAR_10->vm_start = 0;
 VAR_11->vm_end = VAR_10->vm_end = 0;
 VAR_11->vm_top = 0;
 return VAR_17;

enomem:
 FUNC_8("Allocation of length %lu from process %d (%s) failed\n",
        VAR_12, VAR_7->pid, VAR_7->comm);
 FUNC_9(0, ((void*)0));
 return -VAR_0;
}
