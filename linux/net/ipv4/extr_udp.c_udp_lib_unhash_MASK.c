
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udp_table {int dummy; } ;
struct udp_hslot {int lock; int count; } ;
struct sock {TYPE_3__* sk_prot; int sk_reuseport_cb; } ;
struct TYPE_8__ {scalar_t__ inet_num; } ;
struct TYPE_5__ {struct udp_table* udp_table; } ;
struct TYPE_7__ {TYPE_1__ h; } ;
struct TYPE_6__ {int udp_portaddr_node; int udp_portaddr_hash; int udp_port_hash; } ;


 int FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int ,TYPE_3__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct udp_hslot* FUNC_12 (struct udp_table*,int ,int ) ;
 struct udp_hslot* FUNC_13 (struct udp_table*,int ) ;
 TYPE_2__* FUNC_14 (struct sock*) ;

void FUNC_15(struct sock *VAR_0)
{
 if (FUNC_5(VAR_0)) {
  struct udp_table *VAR_1 = VAR_0->sk_prot->h.udp_table;
  struct udp_hslot *VAR_2, *VAR_3;

  VAR_2 = FUNC_12(VAR_1, FUNC_6(VAR_0),
          FUNC_14(VAR_0)->udp_port_hash);
  VAR_3 = FUNC_13(VAR_1, FUNC_14(VAR_0)->udp_portaddr_hash);

  FUNC_9(&VAR_2->lock);
  if (FUNC_2(VAR_0->sk_reuseport_cb))
   FUNC_3(VAR_0);
  if (FUNC_4(VAR_0)) {
   VAR_2->count--;
   FUNC_1(VAR_0)->inet_num = 0;
   FUNC_7(FUNC_6(VAR_0), VAR_0->sk_prot, -1);

   FUNC_8(&VAR_3->lock);
   FUNC_0(&FUNC_14(VAR_0)->udp_portaddr_node);
   VAR_3->count--;
   FUNC_10(&VAR_3->lock);
  }
  FUNC_11(&VAR_2->lock);
 }
}
