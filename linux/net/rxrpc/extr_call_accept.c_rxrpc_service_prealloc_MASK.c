
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_sock {scalar_t__ discard_new_call; struct rxrpc_backlog* backlog; } ;
struct rxrpc_backlog {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct rxrpc_backlog* FUNC_1 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct rxrpc_sock*,struct rxrpc_backlog*,int *,int *,int ,int ,int ) ;

int FUNC_3(struct rxrpc_sock *VAR_2, gfp_t VAR_3)
{
 struct rxrpc_backlog *VAR_4 = VAR_2->backlog;

 if (!VAR_4) {
  VAR_4 = FUNC_1(sizeof(struct rxrpc_backlog), VAR_3);
  if (!VAR_4)
   return -VAR_0;
  VAR_2->backlog = VAR_4;
 }

 if (VAR_2->discard_new_call)
  return 0;

 while (FUNC_2(VAR_2, VAR_4, ((void*)0), ((void*)0), 0, VAR_3,
       FUNC_0(&VAR_1)) == 0)
  ;

 return 0;
}
