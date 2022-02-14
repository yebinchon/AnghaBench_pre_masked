
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; scalar_t__ vm_pgoff; int vm_flags; TYPE_1__* vm_file; } ;
struct page {int dummy; } ;
struct kcov {int size; scalar_t__ mode; int lock; void* area; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct kcov* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,struct page*) ;
 struct page* FUNC_5 (void*) ;
 void* FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 int VAR_7 = 0;
 void *VAR_8;
 struct kcov *VAR_9 = VAR_6->vm_file->private_data;
 unsigned long VAR_10, VAR_11;
 struct page *VAR_12;

 VAR_8 = FUNC_6(VAR_6->vm_end - VAR_6->vm_start);
 if (!VAR_8)
  return -VAR_1;

 FUNC_1(&VAR_9->lock);
 VAR_10 = VAR_9->size * sizeof(unsigned long);
 if (VAR_9->mode != VAR_2 || VAR_6->vm_pgoff != 0 ||
     VAR_6->vm_end - VAR_6->vm_start != VAR_10) {
  VAR_7 = -VAR_0;
  goto exit;
 }
 if (!VAR_9->area) {
  VAR_9->area = VAR_8;
  VAR_6->vm_flags |= VAR_4;
  FUNC_2(&VAR_9->lock);
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11 += VAR_3) {
   VAR_12 = FUNC_5(VAR_9->area + VAR_11);
   if (FUNC_4(VAR_6, VAR_6->vm_start + VAR_11, VAR_12))
    FUNC_0(1, "vm_insert_page() failed");
  }
  return 0;
 }
exit:
 FUNC_2(&VAR_9->lock);
 FUNC_3(VAR_8);
 return VAR_7;
}
