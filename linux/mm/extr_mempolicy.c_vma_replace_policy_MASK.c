
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mempolicy* vm_policy; TYPE_1__* vm_ops; int vm_file; int vm_pgoff; int vm_end; int vm_start; } ;
struct mempolicy {int dummy; } ;
struct TYPE_2__ {int (* set_policy ) (struct vm_area_struct*,struct mempolicy*) ;} ;


 scalar_t__ FUNC_0 (struct mempolicy*) ;
 int FUNC_1 (struct mempolicy*) ;
 struct mempolicy* FUNC_2 (struct mempolicy*) ;
 int FUNC_3 (struct mempolicy*) ;
 int FUNC_4 (char*,int ,int ,int ,TYPE_1__*,int ,int (*) (struct vm_area_struct*,struct mempolicy*)) ;
 int FUNC_5 (struct vm_area_struct*,struct mempolicy*) ;

__attribute__((used)) static int FUNC_6(struct vm_area_struct *VAR_0,
      struct mempolicy *VAR_1)
{
 int VAR_2;
 struct mempolicy *VAR_3;
 struct mempolicy *VAR_4;

 FUNC_4("vma %lx-%lx/%lx vm_ops %p vm_file %p set_policy %p\n",
   VAR_0->vm_start, VAR_0->vm_end, VAR_0->vm_pgoff,
   VAR_0->vm_ops, VAR_0->vm_file,
   VAR_0->vm_ops ? VAR_0->vm_ops->set_policy : ((void*)0));

 VAR_4 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_0->vm_ops && VAR_0->vm_ops->set_policy) {
  VAR_2 = VAR_0->vm_ops->set_policy(VAR_0, VAR_4);
  if (VAR_2)
   goto err_out;
 }

 VAR_3 = VAR_0->vm_policy;
 VAR_0->vm_policy = VAR_4;
 FUNC_3(VAR_3);

 return 0;
 err_out:
 FUNC_3(VAR_4);
 return VAR_2;
}
