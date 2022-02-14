
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct sunrpc_net {int pipefs_sb_lock; struct super_block* pipefs_sb; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sunrpc_net* FUNC_2 (struct net const*,int ) ;
 int VAR_0 ;

struct super_block *FUNC_3(const struct net *VAR_1)
{
 struct sunrpc_net *VAR_2 = FUNC_2(VAR_1, VAR_0);

 FUNC_0(&VAR_2->pipefs_sb_lock);
 if (VAR_2->pipefs_sb)
  return VAR_2->pipefs_sb;
 FUNC_1(&VAR_2->pipefs_sb_lock);
 return ((void*)0);
}
