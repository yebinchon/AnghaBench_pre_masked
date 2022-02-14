
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; struct rchan_buf* vm_private_data; int vm_flags; int * vm_ops; struct file* vm_file; } ;
struct rchan_buf {TYPE_2__* chan; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cb; scalar_t__ alloc_size; } ;
struct TYPE_3__ {int (* buf_mapped ) (struct rchan_buf*,struct file*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rchan_buf*,struct file*) ;

__attribute__((used)) static int FUNC_1(struct rchan_buf *VAR_4, struct vm_area_struct *VAR_5)
{
 unsigned long VAR_6 = VAR_5->vm_end - VAR_5->vm_start;
 struct file *VAR_7 = VAR_5->vm_file;

 if (!VAR_4)
  return -VAR_0;

 if (VAR_6 != (unsigned long)VAR_4->chan->alloc_size)
  return -VAR_1;

 VAR_5->vm_ops = &VAR_3;
 VAR_5->vm_flags |= VAR_2;
 VAR_5->vm_private_data = VAR_4;
 VAR_4->chan->cb->buf_mapped(VAR_4, VAR_7);

 return 0;
}
