
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct z3fold_pool {TYPE_3__* inode; } ;
struct TYPE_7__ {TYPE_1__* i_mapping; } ;
struct TYPE_6__ {int mnt_sb; } ;
struct TYPE_5__ {int * a_ops; struct z3fold_pool* private_data; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct z3fold_pool *VAR_2)
{
 VAR_2->inode = FUNC_1(VAR_1->mnt_sb);
 if (FUNC_0(VAR_2->inode)) {
  VAR_2->inode = ((void*)0);
  return 1;
 }

 VAR_2->inode->i_mapping->private_data = VAR_2;
 VAR_2->inode->i_mapping->a_ops = &VAR_0;
 return 0;
}
