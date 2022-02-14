
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rxrpc_net {int epoch; } ;
struct TYPE_4__ {int cid; int epoch; } ;
struct TYPE_5__ {TYPE_3__* local; } ;
struct rxrpc_connection {TYPE_1__ proto; int flags; TYPE_2__ params; } ;
typedef int gfp_t ;
struct TYPE_6__ {struct rxrpc_net* rxnet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,struct rxrpc_connection*,int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct rxrpc_connection *VAR_5,
       gfp_t VAR_6)
{
 struct rxrpc_net *VAR_7 = VAR_5->params.local->rxnet;
 int VAR_8;

 FUNC_0("");

 FUNC_3(VAR_6);
 FUNC_6(&VAR_4);

 VAR_8 = FUNC_2(&VAR_3, VAR_5,
         1, 0x40000000, VAR_0);
 if (VAR_8 < 0)
  goto error;

 FUNC_7(&VAR_4);
 FUNC_4();

 VAR_5->proto.epoch = VAR_7->epoch;
 VAR_5->proto.cid = VAR_8 << VAR_1;
 FUNC_5(VAR_2, &VAR_5->flags);
 FUNC_1(" [CID %x]", VAR_5->proto.cid);
 return 0;

error:
 FUNC_7(&VAR_4);
 FUNC_4();
 FUNC_1(" = %d", VAR_8);
 return VAR_8;
}
