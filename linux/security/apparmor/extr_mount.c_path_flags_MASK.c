
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_2__* dentry; } ;
struct aa_profile {int path_flags; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct aa_profile *VAR_1, const struct path *VAR_2)
{
 FUNC_0(!VAR_1);
 FUNC_0(!VAR_2);

 return VAR_1->path_flags |
  (FUNC_1(VAR_2->dentry->d_inode->i_mode) ? VAR_0 : 0);
}
