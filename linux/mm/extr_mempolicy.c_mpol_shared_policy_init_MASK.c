
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_end; } ;
struct shared_policy {int lock; int root; } ;
struct TYPE_2__ {int user_nodemask; } ;
struct mempolicy {TYPE_1__ w; int flags; int mode; } ;


 scalar_t__ FUNC_0 (struct mempolicy*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mempolicy* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct mempolicy*) ;
 int FUNC_5 (struct mempolicy*,int *,int ) ;
 int FUNC_6 (struct shared_policy*,struct vm_area_struct*,struct mempolicy*) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct vm_area_struct*,int *) ;

void FUNC_11(struct shared_policy *VAR_4, struct mempolicy *VAR_5)
{
 int VAR_6;

 VAR_4->root = VAR_0;
 FUNC_7(&VAR_4->lock);

 if (VAR_5) {
  struct vm_area_struct VAR_7;
  struct mempolicy *VAR_8;
  FUNC_1(VAR_3);

  if (!VAR_3)
   goto put_mpol;

  VAR_8 = FUNC_3(VAR_5->mode, VAR_5->flags, &VAR_5->w.user_nodemask);
  if (FUNC_0(VAR_8))
   goto free_scratch;

  FUNC_8(VAR_2);
  VAR_6 = FUNC_5(VAR_8, &VAR_5->w.user_nodemask, VAR_3);
  FUNC_9(VAR_2);
  if (VAR_6)
   goto put_new;


  FUNC_10(&VAR_7, ((void*)0));
  VAR_7.vm_end = VAR_1;
  FUNC_6(VAR_4, &VAR_7, VAR_8);

put_new:
  FUNC_4(VAR_8);
free_scratch:
  FUNC_2(VAR_3);
put_mpol:
  FUNC_4(VAR_5);
 }
}
