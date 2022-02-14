
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int connection_id; } ;
struct TYPE_6__ {TYPE_1__ dgm; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {scalar_t__ protocol; TYPE_3__ sockaddr; } ;
struct chnl_net {TYPE_4__ conn_req; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct chnl_net* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_5, const struct net_device *VAR_6)
{
 struct chnl_net *VAR_7;
 u8 VAR_8;
 VAR_7 = FUNC_0(VAR_6);
 if (FUNC_1(VAR_5, VAR_2,
   VAR_7->conn_req.sockaddr.u.dgm.connection_id) ||
     FUNC_1(VAR_5, VAR_3,
   VAR_7->conn_req.sockaddr.u.dgm.connection_id))
  goto nla_put_failure;
 VAR_8 = VAR_7->conn_req.protocol == VAR_0;
 if (FUNC_2(VAR_5, VAR_4, VAR_8))
  goto nla_put_failure;
 return 0;
nla_put_failure:
 return -VAR_1;

}
