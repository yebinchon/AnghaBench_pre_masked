
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_filelist {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct rpc_filelist const*,int,int) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static void FUNC_4(struct dentry *VAR_1,
      const struct rpc_filelist *VAR_2,
      int VAR_3, int VAR_4)
{
 struct inode *VAR_5 = FUNC_1(VAR_1);

 FUNC_2(VAR_5, VAR_0);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_5);
}
