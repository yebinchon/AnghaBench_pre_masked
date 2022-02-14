
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int pipe_version; int pipefs_sb_lock; int gssd_dummy; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct sunrpc_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;

int FUNC_5(struct net *VAR_2)
{
 struct sunrpc_net *VAR_3 = FUNC_3(VAR_2, VAR_1);

 VAR_3->gssd_dummy = FUNC_4(&VAR_0, 0);
 if (FUNC_0(VAR_3->gssd_dummy))
  return FUNC_1(VAR_3->gssd_dummy);

 FUNC_2(&VAR_3->pipefs_sb_lock);
 VAR_3->pipe_version = -1;
 return 0;
}
