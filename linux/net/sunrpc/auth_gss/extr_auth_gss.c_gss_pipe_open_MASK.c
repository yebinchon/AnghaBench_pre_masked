
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunrpc_net {int pipe_version; int pipe_users; } ;
struct net {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct net* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5, int VAR_6)
{
 struct net *VAR_7 = VAR_5->i_sb->s_fs_info;
 struct sunrpc_net *VAR_8 = FUNC_1(VAR_7, VAR_4);
 int VAR_9 = 0;

 FUNC_3(&VAR_1);
 if (VAR_8->pipe_version < 0) {

  VAR_8->pipe_version = VAR_6;
  FUNC_2(&VAR_2);
  FUNC_5(&VAR_3);
 } else if (VAR_8->pipe_version != VAR_6) {

  VAR_9 = -VAR_0;
  goto out;
 }
 FUNC_0(&VAR_8->pipe_users);
out:
 FUNC_4(&VAR_1);
 return VAR_9;

}
