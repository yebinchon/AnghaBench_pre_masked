
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct tipc_bearer {TYPE_1__ pt; int up; } ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct packet_type {int dummy; } ;
struct net_device {int tipc_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 struct tipc_bearer* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,struct sk_buff*,struct tipc_bearer*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_3, struct net_device *VAR_4,
      struct packet_type *VAR_5, struct net_device *VAR_6)
{
 struct tipc_bearer *VAR_7;

 FUNC_4();
 VAR_7 = FUNC_3(VAR_4->tipc_ptr) ?:
  FUNC_3(VAR_6->tipc_ptr);
 if (FUNC_2(VAR_7 && FUNC_7(0, &VAR_7->up) &&
     (VAR_3->pkt_type <= VAR_2))) {
  FUNC_6(VAR_3);
  FUNC_8(FUNC_0(VAR_7->pt.dev), VAR_3, VAR_7);
  FUNC_5();
  return VAR_1;
 }
 FUNC_5();
 FUNC_1(VAR_3);
 return VAR_0;
}
