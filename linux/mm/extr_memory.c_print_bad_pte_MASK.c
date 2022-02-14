
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {TYPE_4__* vm_file; TYPE_1__* vm_ops; int anon_vma; int vm_flags; int vm_mm; } ;
struct page {int dummy; } ;
struct address_space {TYPE_3__* a_ops; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgoff_t ;
typedef int pgd_t ;
typedef int p4d_t ;
struct TYPE_10__ {int comm; } ;
struct TYPE_9__ {TYPE_2__* f_op; struct address_space* f_mapping; } ;
struct TYPE_8__ {int * readpage; } ;
struct TYPE_7__ {int * mmap; } ;
struct TYPE_6__ {int * fault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_5__* VAR_3 ;
 int FUNC_1 (struct page*,char*) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (struct vm_area_struct*,unsigned long) ;
 int * FUNC_4 (int *,unsigned long) ;
 int * FUNC_5 (int ,unsigned long) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct vm_area_struct *VAR_5, unsigned long VAR_6,
     pte_t VAR_7, struct page *VAR_8)
{
 pgd_t *VAR_9 = FUNC_5(VAR_5->vm_mm, VAR_6);
 p4d_t *VAR_10 = FUNC_4(VAR_9, VAR_6);
 pud_t *VAR_11 = FUNC_10(VAR_10, VAR_6);
 pmd_t *VAR_12 = FUNC_6(VAR_11, VAR_6);
 struct address_space *VAR_13;
 pgoff_t VAR_14;
 static unsigned long VAR_15;
 static unsigned long VAR_16;
 static unsigned long VAR_17;





 if (VAR_16 == 60) {
  if (FUNC_11(VAR_4, VAR_15)) {
   VAR_17++;
   return;
  }
  if (VAR_17) {
   FUNC_8("BUG: Bad page map: %lu messages suppressed\n",
     VAR_17);
   VAR_17 = 0;
  }
  VAR_16 = 0;
 }
 if (VAR_16++ == 0)
  VAR_15 = VAR_4 + 60 * VAR_0;

 VAR_13 = VAR_5->vm_file ? VAR_5->vm_file->f_mapping : ((void*)0);
 VAR_14 = FUNC_3(VAR_5, VAR_6);

 FUNC_8("BUG: Bad page map in process %s  pte:%08llx pmd:%08llx\n",
   VAR_3->comm,
   (long long)FUNC_9(VAR_7), (long long)FUNC_7(*VAR_12));
 if (VAR_8)
  FUNC_1(VAR_8, "bad pte");
 FUNC_8("addr:%px vm_flags:%08lx anon_vma:%px mapping:%px index:%lx\n",
   (void *)VAR_6, VAR_5->vm_flags, VAR_5->anon_vma, VAR_13, VAR_14);
 FUNC_8("file:%pD fault:%ps mmap:%ps readpage:%ps\n",
   VAR_5->vm_file,
   VAR_5->vm_ops ? VAR_5->vm_ops->fault : ((void*)0),
   VAR_5->vm_file ? VAR_5->vm_file->f_op->mmap : ((void*)0),
   VAR_13 ? VAR_13->a_ops->readpage : ((void*)0));
 FUNC_2();
 FUNC_0(VAR_2, VAR_1);
}
