
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv ;
struct unix_diag_vfs {int udiag_vfs_dev; int udiag_vfs_ino; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dentry {TYPE_2__* d_sb; } ;
struct TYPE_8__ {int i_ino; } ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct TYPE_7__ {TYPE_1__ path; } ;
struct TYPE_6__ {int s_dev; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct sk_buff*,int ,int,struct unix_diag_vfs*) ;
 TYPE_3__* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct dentry *VAR_3 = FUNC_2(VAR_1)->path.dentry;

 if (VAR_3) {
  struct unix_diag_vfs VAR_4 = {
   .udiag_vfs_ino = FUNC_0(VAR_3)->i_ino,
   .udiag_vfs_dev = VAR_3->d_sb->s_dev,
  };

  return FUNC_1(VAR_2, VAR_0, sizeof(VAR_4), &VAR_4);
 }

 return 0;
}
