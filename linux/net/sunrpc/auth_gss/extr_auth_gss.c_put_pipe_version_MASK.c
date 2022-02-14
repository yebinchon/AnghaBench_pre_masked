
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int pipe_version; int pipe_users; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct net *VAR_2)
{
 struct sunrpc_net *VAR_3 = FUNC_1(VAR_2, VAR_1);

 if (FUNC_0(&VAR_3->pipe_users, &VAR_0)) {
  VAR_3->pipe_version = -1;
  FUNC_2(&VAR_0);
 }
}
