
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vm_area_struct {struct mempolicy* vm_policy; TYPE_1__* vm_ops; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_9__ {int user_nodemask; } ;
struct TYPE_8__ {int nodes; } ;
struct mempolicy {int mode; int flags; TYPE_3__ w; TYPE_2__ v; } ;
typedef int nodemask_t ;
struct TYPE_10__ {int il_prev; struct mempolicy* mempolicy; struct mm_struct* mm; } ;
struct TYPE_7__ {struct mempolicy* (* get_policy ) (struct vm_area_struct*,unsigned long) ;} ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 struct mempolicy VAR_10 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (struct mempolicy*,int *) ;
 int FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (struct mempolicy*) ;
 int FUNC_5 (struct mempolicy*) ;
 int FUNC_6 (struct mempolicy*) ;
 scalar_t__ FUNC_7 (struct mempolicy*) ;
 int FUNC_8 (int ,int ) ;
 struct mempolicy* FUNC_9 (struct vm_area_struct*,unsigned long) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static long FUNC_13(int *VAR_11, nodemask_t *VAR_12,
        unsigned long VAR_13, unsigned long VAR_14)
{
 int VAR_15;
 struct mm_struct *VAR_16 = VAR_9->mm;
 struct vm_area_struct *VAR_17 = ((void*)0);
 struct mempolicy *VAR_18 = VAR_9->mempolicy, *VAR_19 = ((void*)0);

 if (VAR_14 &
  ~(unsigned long)(VAR_5|VAR_3|VAR_4))
  return -VAR_1;

 if (VAR_14 & VAR_4) {
  if (VAR_14 & (VAR_5|VAR_3))
   return -VAR_1;
  *VAR_11 = 0;
  FUNC_10(VAR_9);
  *VAR_12 = VAR_8;
  FUNC_11(VAR_9);
  return 0;
 }

 if (VAR_14 & VAR_3) {





  FUNC_0(&VAR_16->mmap_sem);
  VAR_17 = FUNC_1(VAR_16, VAR_13, VAR_13+1);
  if (!VAR_17) {
   FUNC_12(&VAR_16->mmap_sem);
   return -VAR_0;
  }
  if (VAR_17->vm_ops && VAR_17->vm_ops->get_policy)
   VAR_18 = VAR_17->vm_ops->get_policy(VAR_17, VAR_13);
  else
   VAR_18 = VAR_17->vm_policy;
 } else if (VAR_13)
  return -VAR_1;

 if (!VAR_18)
  VAR_18 = &VAR_10;

 if (VAR_14 & VAR_5) {
  if (VAR_14 & VAR_3) {






   VAR_19 = VAR_18;
   VAR_17 = ((void*)0);
   FUNC_5(VAR_18);
   VAR_15 = FUNC_3(VAR_16, VAR_13);
   if (VAR_15 < 0)
    goto out;
   *VAR_11 = VAR_15;
  } else if (VAR_18 == VAR_9->mempolicy &&
    VAR_18->mode == VAR_6) {
   *VAR_11 = FUNC_8(VAR_9->il_prev, VAR_18->v.nodes);
  } else {
   VAR_15 = -VAR_1;
   goto out;
  }
 } else {
  *VAR_11 = VAR_18 == &VAR_10 ? VAR_2 :
      VAR_18->mode;




  *VAR_11 |= (VAR_18->flags & VAR_7);
 }

 VAR_15 = 0;
 if (VAR_12) {
  if (FUNC_7(VAR_18)) {
   *VAR_12 = VAR_18->w.user_nodemask;
  } else {
   FUNC_10(VAR_9);
   FUNC_2(VAR_18, VAR_12);
   FUNC_11(VAR_9);
  }
 }

 out:
 FUNC_4(VAR_18);
 if (VAR_17)
  FUNC_12(&VAR_16->mmap_sem);
 if (VAR_19)
  FUNC_6(VAR_19);
 return VAR_15;
}
