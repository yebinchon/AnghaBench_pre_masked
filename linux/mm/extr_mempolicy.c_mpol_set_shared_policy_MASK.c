
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_pgoff; } ;
struct sp_node {int dummy; } ;
struct shared_policy {int dummy; } ;
struct TYPE_2__ {int nodes; } ;
struct mempolicy {int mode; int flags; TYPE_1__ v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,unsigned long,int,int,int ) ;
 int FUNC_2 (struct shared_policy*,scalar_t__,scalar_t__,struct sp_node*) ;
 struct sp_node* FUNC_3 (scalar_t__,scalar_t__,struct mempolicy*) ;
 int FUNC_4 (struct sp_node*) ;
 unsigned long FUNC_5 (struct vm_area_struct*) ;

int FUNC_6(struct shared_policy *VAR_2,
   struct vm_area_struct *VAR_3, struct mempolicy *VAR_4)
{
 int VAR_5;
 struct sp_node *VAR_6 = ((void*)0);
 unsigned long VAR_7 = FUNC_5(VAR_3);

 FUNC_1("set_shared_policy %lx sz %lu %d %d %lx\n",
   VAR_3->vm_pgoff,
   VAR_7, VAR_4 ? VAR_4->mode : -1,
   VAR_4 ? VAR_4->flags : -1,
   VAR_4 ? FUNC_0(VAR_4->v.nodes)[0] : VAR_1);

 if (VAR_4) {
  VAR_6 = FUNC_3(VAR_3->vm_pgoff, VAR_3->vm_pgoff + VAR_7, VAR_4);
  if (!VAR_6)
   return -VAR_0;
 }
 VAR_5 = FUNC_2(VAR_2, VAR_3->vm_pgoff, VAR_3->vm_pgoff+VAR_7, VAR_6);
 if (VAR_5 && VAR_6)
  FUNC_4(VAR_6);
 return VAR_5;
}
