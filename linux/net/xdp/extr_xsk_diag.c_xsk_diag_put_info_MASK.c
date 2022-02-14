
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_sock {int queue_id; TYPE_1__* dev; } ;
struct xdp_diag_info {int queue_id; int ifindex; } ;
struct sk_buff {int dummy; } ;
typedef int di ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct xdp_diag_info*) ;

__attribute__((used)) static int FUNC_1(const struct xdp_sock *VAR_1, struct sk_buff *VAR_2)
{
 struct xdp_diag_info VAR_3 = {};

 VAR_3.ifindex = VAR_1->dev ? VAR_1->dev->ifindex : 0;
 VAR_3.queue_id = VAR_1->queue_id;
 return FUNC_0(VAR_2, VAR_0, sizeof(VAR_3), &VAR_3);
}
