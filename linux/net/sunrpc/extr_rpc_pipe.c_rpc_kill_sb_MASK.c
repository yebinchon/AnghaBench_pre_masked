
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct net* s_fs_info; } ;
struct sunrpc_net {int pipefs_sb_lock; struct super_block* pipefs_sb; } ;
struct TYPE_2__ {int inum; } ;
struct net {TYPE_1__ ns; } ;


 int FUNC_0 (struct net*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,struct super_block*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sunrpc_net* FUNC_6 (struct net*,int ) ;
 int FUNC_7 (struct net*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(struct super_block *VAR_3)
{
 struct net *VAR_4 = VAR_3->s_fs_info;
 struct sunrpc_net *VAR_5 = FUNC_6(VAR_4, VAR_2);

 FUNC_4(&VAR_5->pipefs_sb_lock);
 if (VAR_5->pipefs_sb != VAR_3) {
  FUNC_5(&VAR_5->pipefs_sb_lock);
  goto out;
 }
 VAR_5->pipefs_sb = ((void*)0);
 FUNC_2("RPC:       sending pipefs UMOUNT notification for net %x%s\n",
  VAR_4->ns.inum, FUNC_0(VAR_4));
 FUNC_1(&VAR_1,
        VAR_0,
        VAR_3);
 FUNC_5(&VAR_5->pipefs_sb_lock);
out:
 FUNC_3(VAR_3);
 FUNC_7(VAR_4);
}
