
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; struct vm_area_struct* vm_next; } ;
struct mm_struct {int mmap_sem; int exe_file; struct vm_area_struct* mmap; } ;
struct inode {int i_mode; } ;
struct file {int f_path; } ;
struct fd {TYPE_2__* file; } ;
struct TYPE_6__ {int f_path; } ;
struct TYPE_5__ {int f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct fd FUNC_2 (unsigned int) ;
 int FUNC_3 (struct fd) ;
 struct inode* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (TYPE_2__*) ;
 struct file* FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (struct inode*,int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct file* FUNC_12 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(struct mm_struct *VAR_4, unsigned int VAR_5)
{
 struct fd VAR_6;
 struct file *VAR_7, *VAR_8;
 struct inode *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6.file)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_6.file);






 VAR_10 = -VAR_0;
 if (!FUNC_0(VAR_9->i_mode) || FUNC_10(&VAR_6.file->f_path))
  goto exit;

 VAR_10 = FUNC_8(VAR_9, VAR_3);
 if (VAR_10)
  goto exit;




 VAR_8 = FUNC_7(VAR_4);
 VAR_10 = -VAR_2;
 if (VAR_8) {
  struct vm_area_struct *VAR_11;

  FUNC_1(&VAR_4->mmap_sem);
  for (VAR_11 = VAR_4->mmap; VAR_11; VAR_11 = VAR_11->vm_next) {
   if (!VAR_11->vm_file)
    continue;
   if (FUNC_9(&VAR_11->vm_file->f_path,
           &VAR_8->f_path))
    goto exit_err;
  }

  FUNC_11(&VAR_4->mmap_sem);
  FUNC_5(VAR_8);
 }

 VAR_10 = 0;

 FUNC_6(VAR_6.file);
 VAR_7 = FUNC_12(&VAR_4->exe_file, VAR_6.file);
 if (VAR_7)
  FUNC_5(VAR_7);
exit:
 FUNC_3(VAR_6);
 return VAR_10;
exit_err:
 FUNC_11(&VAR_4->mmap_sem);
 FUNC_5(VAR_8);
 goto exit;
}
