
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int pipe_version; int pipe_users; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct net *VAR_3)
{
 struct sunrpc_net *VAR_4 = FUNC_1(VAR_3, VAR_2);
 int VAR_5;

 FUNC_2(&VAR_1);
 if (VAR_4->pipe_version >= 0) {
  FUNC_0(&VAR_4->pipe_users);
  VAR_5 = VAR_4->pipe_version;
 } else
  VAR_5 = -VAR_0;
 FUNC_3(&VAR_1);
 return VAR_5;
}
