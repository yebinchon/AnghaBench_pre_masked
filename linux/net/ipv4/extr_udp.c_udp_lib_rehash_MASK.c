
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct udp_table {int dummy; } ;
struct udp_hslot {int lock; int count; int head; } ;
struct sock {int sk_reuseport_cb; TYPE_2__* sk_prot; } ;
struct TYPE_6__ {int udp_portaddr_node; int udp_port_hash; int udp_portaddr_hash; } ;
struct TYPE_4__ {struct udp_table* udp_table; } ;
struct TYPE_5__ {TYPE_1__ h; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct udp_hslot* FUNC_10 (struct udp_table*,int ,int ) ;
 struct udp_hslot* FUNC_11 (struct udp_table*,int ) ;
 TYPE_3__* FUNC_12 (struct sock*) ;

void FUNC_13(struct sock *VAR_0, u16 VAR_1)
{
 if (FUNC_4(VAR_0)) {
  struct udp_table *VAR_2 = VAR_0->sk_prot->h.udp_table;
  struct udp_hslot *VAR_3, *VAR_4, *VAR_5;

  VAR_4 = FUNC_11(VAR_2, FUNC_12(VAR_0)->udp_portaddr_hash);
  VAR_5 = FUNC_11(VAR_2, VAR_1);
  FUNC_12(VAR_0)->udp_portaddr_hash = VAR_1;

  if (VAR_4 != VAR_5 ||
      FUNC_2(VAR_0->sk_reuseport_cb)) {
   VAR_3 = FUNC_10(VAR_2, FUNC_5(VAR_0),
          FUNC_12(VAR_0)->udp_port_hash);

   FUNC_7(&VAR_3->lock);
   if (FUNC_2(VAR_0->sk_reuseport_cb))
    FUNC_3(VAR_0);

   if (VAR_4 != VAR_5) {
    FUNC_6(&VAR_4->lock);
    FUNC_1(&FUNC_12(VAR_0)->udp_portaddr_node);
    VAR_4->count--;
    FUNC_8(&VAR_4->lock);

    FUNC_6(&VAR_5->lock);
    FUNC_0(&FUNC_12(VAR_0)->udp_portaddr_node,
        &VAR_5->head);
    VAR_5->count++;
    FUNC_8(&VAR_5->lock);
   }

   FUNC_9(&VAR_3->lock);
  }
 }
}
