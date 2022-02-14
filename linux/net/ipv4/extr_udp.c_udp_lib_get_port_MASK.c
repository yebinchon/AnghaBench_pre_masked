
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udp_table {int mask; unsigned short log; } ;
struct udp_hslot {int count; int lock; int head; } ;
struct sock {scalar_t__ sk_family; scalar_t__ sk_reuseport; TYPE_3__* sk_prot; } ;
struct net {int dummy; } ;
struct TYPE_8__ {unsigned short inet_num; } ;
struct TYPE_5__ {struct udp_table* udp_table; } ;
struct TYPE_7__ {TYPE_1__ h; } ;
struct TYPE_6__ {unsigned short udp_portaddr_hash; unsigned short udp_port_hash; int udp_portaddr_node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct net*,int*,int*) ;
 int FUNC_7 (struct net*,unsigned short) ;
 TYPE_4__* FUNC_8 (struct sock*) ;
 unsigned int FUNC_9 () ;
 int FUNC_10 (unsigned int,int) ;
 int FUNC_11 (struct sock*,int *) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 struct net* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct net*,TYPE_3__*,int) ;
 int FUNC_15 (struct sock*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (unsigned short,int *) ;
 struct udp_hslot* FUNC_21 (struct udp_table*,struct net*,unsigned short) ;
 struct udp_hslot* FUNC_22 (struct udp_table*,unsigned int) ;
 scalar_t__ FUNC_23 (struct net*,unsigned short,struct udp_hslot*,int *,struct sock*,unsigned short) ;
 int FUNC_24 (struct net*,unsigned short,struct udp_hslot*,struct sock*) ;
 scalar_t__ FUNC_25 (struct sock*,struct udp_hslot*) ;
 TYPE_2__* FUNC_26 (struct sock*) ;

int FUNC_27(struct sock *VAR_5, unsigned short VAR_6,
       unsigned int VAR_7)
{
 struct udp_hslot *VAR_8, *VAR_9;
 struct udp_table *VAR_10 = VAR_5->sk_prot->h.udp_table;
 int VAR_11 = 1;
 struct net *VAR_12 = FUNC_13(VAR_5);

 if (!VAR_6) {
  int VAR_13, VAR_14, VAR_15;
  unsigned int VAR_16;
  unsigned short VAR_17, VAR_18;
  FUNC_0(VAR_4, VAR_2);

  FUNC_6(VAR_12, &VAR_13, &VAR_14);
  VAR_15 = (VAR_14 - VAR_13) + 1;

  VAR_16 = FUNC_9();
  VAR_17 = FUNC_10(VAR_16, VAR_15) + VAR_13;



  VAR_16 = (VAR_16 | 1) * (VAR_10->mask + 1);
  VAR_18 = VAR_17 + VAR_10->mask + 1;
  do {
   VAR_8 = FUNC_21(VAR_10, VAR_12, VAR_17);
   FUNC_2(VAR_4, VAR_2);
   FUNC_17(&VAR_8->lock);
   FUNC_23(VAR_12, VAR_6, VAR_8, VAR_4, VAR_5,
         VAR_10->log);

   VAR_6 = VAR_17;





   do {
    if (VAR_13 <= VAR_6 && VAR_6 <= VAR_14 &&
        !FUNC_20(VAR_6 >> VAR_10->log, VAR_4) &&
        !FUNC_7(VAR_12, VAR_6))
     goto found;
    VAR_6 += VAR_16;
   } while (VAR_6 != VAR_17);
   FUNC_19(&VAR_8->lock);
   FUNC_3();
  } while (++VAR_17 != VAR_18);
  goto fail;
 } else {
  VAR_8 = FUNC_21(VAR_10, VAR_12, VAR_6);
  FUNC_17(&VAR_8->lock);
  if (VAR_8->count > 10) {
   int VAR_19;
   unsigned int VAR_20 = FUNC_26(VAR_5)->udp_portaddr_hash ^ VAR_6;

   VAR_20 &= VAR_10->mask;
   VAR_7 &= VAR_10->mask;

   VAR_9 = FUNC_22(VAR_10, VAR_20);
   if (VAR_8->count < VAR_9->count)
    goto scan_primary_hash;

   VAR_19 = FUNC_24(VAR_12, VAR_6, VAR_9, VAR_5);
   if (!VAR_19 && (VAR_7 != VAR_20)) {
    VAR_9 = FUNC_22(VAR_10, VAR_7);
    VAR_19 = FUNC_24(VAR_12, VAR_6, VAR_9,
            VAR_5);
   }
   if (VAR_19)
    goto fail_unlock;
   else
    goto found;
  }
scan_primary_hash:
  if (FUNC_23(VAR_12, VAR_6, VAR_8, ((void*)0), VAR_5, 0))
   goto fail_unlock;
 }
found:
 FUNC_8(VAR_5)->inet_num = VAR_6;
 FUNC_26(VAR_5)->udp_port_hash = VAR_6;
 FUNC_26(VAR_5)->udp_portaddr_hash ^= VAR_6;
 if (FUNC_12(VAR_5)) {
  if (VAR_5->sk_reuseport &&
      FUNC_25(VAR_5, VAR_8)) {
   FUNC_8(VAR_5)->inet_num = 0;
   FUNC_26(VAR_5)->udp_port_hash = 0;
   FUNC_26(VAR_5)->udp_portaddr_hash ^= VAR_6;
   goto fail_unlock;
  }

  FUNC_11(VAR_5, &VAR_8->head);
  VAR_8->count++;
  FUNC_14(FUNC_13(VAR_5), VAR_5->sk_prot, 1);

  VAR_9 = FUNC_22(VAR_10, FUNC_26(VAR_5)->udp_portaddr_hash);
  FUNC_16(&VAR_9->lock);
  if (FUNC_1(VAR_1) && VAR_5->sk_reuseport &&
      VAR_5->sk_family == VAR_0)
   FUNC_5(&FUNC_26(VAR_5)->udp_portaddr_node,
        &VAR_9->head);
  else
   FUNC_4(&FUNC_26(VAR_5)->udp_portaddr_node,
        &VAR_9->head);
  VAR_9->count++;
  FUNC_18(&VAR_9->lock);
 }
 FUNC_15(VAR_5, VAR_3);
 VAR_11 = 0;
fail_unlock:
 FUNC_19(&VAR_8->lock);
fail:
 return VAR_11;
}
