
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ src_name; scalar_t__ sa; scalar_t__ dst_name; scalar_t__ da; } ;
struct j1939_sock {int state; scalar_t__ pgn_rx_filter; TYPE_1__ addr; int sk; } ;
struct TYPE_4__ {scalar_t__ dst_name; scalar_t__ da; scalar_t__ src_name; scalar_t__ sa; scalar_t__ pgn; } ;
struct j1939_sk_buff_cb {TYPE_2__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static bool FUNC_3(struct j1939_sock *VAR_3,
          const struct j1939_sk_buff_cb *VAR_4)
{
 if ((VAR_3->state & VAR_1))
  return 1;


 if (VAR_3->addr.src_name && VAR_4->addr.dst_name) {
  if (VAR_3->addr.src_name != VAR_4->addr.dst_name)
   return 0;
 } else {





  if (FUNC_0(VAR_4->addr.da)) {
   if (VAR_3->addr.sa != VAR_4->addr.da)
    return 0;
  } else if (!FUNC_2(&VAR_3->sk, VAR_2)) {



   return 0;
  }
 }


 if (VAR_3->state & VAR_0) {



  if (VAR_3->addr.dst_name && VAR_4->addr.src_name) {
   if (VAR_3->addr.dst_name != VAR_4->addr.src_name)
    return 0;
  } else {
   if (VAR_3->addr.da != VAR_4->addr.sa)
    return 0;
  }
 }


 if (FUNC_1(VAR_3->pgn_rx_filter) &&
     VAR_3->pgn_rx_filter != VAR_4->addr.pgn)
  return 0;

 return 1;
}
