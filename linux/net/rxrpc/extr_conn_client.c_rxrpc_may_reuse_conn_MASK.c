
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rxrpc_net {scalar_t__ epoch; } ;
struct TYPE_4__ {scalar_t__ epoch; int cid; } ;
struct TYPE_6__ {TYPE_2__* local; } ;
struct rxrpc_connection {int flags; TYPE_1__ proto; TYPE_3__ params; } ;
struct TYPE_5__ {struct rxrpc_net* rxnet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(struct rxrpc_connection *VAR_4)
{
 struct rxrpc_net *VAR_5 = VAR_4->params.local->rxnet;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (FUNC_3(VAR_1, &VAR_4->flags))
  goto dont_reuse;

 if (VAR_4->proto.epoch != VAR_5->epoch)
  goto mark_dont_reuse;







 VAR_6 = FUNC_0(&VAR_2);
 VAR_7 = VAR_4->proto.cid >> VAR_0;
 VAR_8 = VAR_7 - VAR_6;
 if (VAR_8 < 0)
  VAR_8 = -VAR_8;
 VAR_9 = FUNC_1(VAR_3 * 4, 1024U);
 if (VAR_8 > VAR_9)
  goto mark_dont_reuse;

 return 1;

mark_dont_reuse:
 FUNC_2(VAR_1, &VAR_4->flags);
dont_reuse:
 return 0;
}
