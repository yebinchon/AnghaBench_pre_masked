
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; int vm_page_prot; } ;
struct mm_struct {int dummy; } ;
struct inode {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef scalar_t__ pgoff_t ;
struct TYPE_2__ {struct inode* f_inode; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct mm_struct*,unsigned long,int *,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct vm_area_struct*,unsigned long,int *) ;

__attribute__((used)) static int FUNC_12(struct mm_struct *VAR_3,
         pmd_t *VAR_4,
         struct vm_area_struct *VAR_5,
         unsigned long VAR_6)
{
 pte_t VAR_7, *VAR_8;
 spinlock_t *VAR_9;
 int VAR_10;
 pgoff_t VAR_11, VAR_12;
 struct inode *VAR_13;

 VAR_7 = FUNC_5(FUNC_4(FUNC_3(VAR_6),
      VAR_5->vm_page_prot));
 VAR_8 = FUNC_7(VAR_3, VAR_4, VAR_6, &VAR_9);
 if (VAR_5->vm_file) {

  VAR_13 = VAR_5->vm_file->f_inode;
  VAR_11 = FUNC_2(VAR_5, VAR_6);
  VAR_12 = FUNC_0(FUNC_1(VAR_13), VAR_2);
  VAR_10 = -VAR_1;
  if (FUNC_10(VAR_11 >= VAR_12))
   goto out_unlock;
 }
 VAR_10 = -VAR_0;
 if (!FUNC_6(*VAR_8))
  goto out_unlock;
 FUNC_9(VAR_3, VAR_6, VAR_8, VAR_7);

 FUNC_11(VAR_5, VAR_6, VAR_8);
 VAR_10 = 0;
out_unlock:
 FUNC_8(VAR_8, VAR_9);
 return VAR_10;
}
