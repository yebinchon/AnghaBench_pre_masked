
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cid; } ;
struct rxrpc_connection {TYPE_1__ proto; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct rxrpc_connection *VAR_4)
{
 if (FUNC_3(VAR_1, &VAR_4->flags)) {
  FUNC_1(&VAR_3);
  FUNC_0(&VAR_2,
      VAR_4->proto.cid >> VAR_0);
  FUNC_2(&VAR_3);
 }
}
