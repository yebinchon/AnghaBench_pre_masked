
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {int dummy; } ;
struct sk_buff {int* data; } ;
struct packet_type {int dummy; } ;
struct net_device {int name; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 struct x25_neigh* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct x25_neigh*) ;
 int FUNC_9 (struct x25_neigh*) ;
 int FUNC_10 (struct x25_neigh*) ;
 int FUNC_11 (struct sk_buff*,struct x25_neigh*) ;

int FUNC_12(struct sk_buff *VAR_2, struct net_device *VAR_3,
      struct packet_type *VAR_4, struct net_device *VAR_5)
{
 struct sk_buff *VAR_6;
 struct x25_neigh *VAR_7;

 if (!FUNC_2(FUNC_0(VAR_3), &VAR_1))
  goto drop;

 VAR_6 = FUNC_5(VAR_2, VAR_0);
 if (!VAR_6)
  goto drop;
 FUNC_1(VAR_2);
 VAR_2 = VAR_6;




 VAR_7 = FUNC_7(VAR_3);
 if (!VAR_7) {
  FUNC_3("unknown neighbour - %s\n", VAR_3->name);
  goto drop;
 }

 if (!FUNC_4(VAR_2, 1))
  return 0;

 switch (VAR_2->data[0]) {

 case 129:
  FUNC_6(VAR_2, 1);
  if (FUNC_11(VAR_2, VAR_7)) {
   FUNC_10(VAR_7);
   goto out;
  }
  break;

 case 130:
  FUNC_8(VAR_7);
  break;

 case 128:
  FUNC_9(VAR_7);
  break;
 }
 FUNC_10(VAR_7);
drop:
 FUNC_1(VAR_2);
out:
 return 0;
}
