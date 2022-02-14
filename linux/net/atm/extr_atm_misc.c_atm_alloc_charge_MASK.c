
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {scalar_t__ truesize; } ;
struct atm_vcc {TYPE_1__* stats; } ;
typedef int gfp_t ;
struct TYPE_2__ {int rx_drop; } ;


 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (struct atm_vcc*,int) ;
 int FUNC_3 (struct atm_vcc*,int) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 struct sock* FUNC_7 (struct atm_vcc*) ;

struct sk_buff *FUNC_8(struct atm_vcc *VAR_0, int VAR_1,
     gfp_t VAR_2)
{
 struct sock *VAR_3 = FUNC_7(VAR_0);
 int VAR_4 = FUNC_0(VAR_1);

 FUNC_2(VAR_0, VAR_4);
 if (FUNC_6(&VAR_3->sk_rmem_alloc) <= VAR_3->sk_rcvbuf) {
  struct sk_buff *VAR_5 = FUNC_1(VAR_1, VAR_2);

  if (VAR_5) {
   FUNC_4(VAR_5->truesize-VAR_4,
       &VAR_3->sk_rmem_alloc);
   return VAR_5;
  }
 }
 FUNC_3(VAR_0, VAR_4);
 FUNC_5(&VAR_0->stats->rx_drop);
 return ((void*)0);
}
