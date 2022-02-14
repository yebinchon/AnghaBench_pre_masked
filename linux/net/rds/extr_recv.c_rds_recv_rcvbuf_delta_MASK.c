
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rds_sock {int rs_rcv_bytes; int rs_congested; int rs_bound_port; int rs_bound_addr; TYPE_1__* rs_transport; } ;
struct rds_cong_map {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {scalar_t__ t_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rds_cong_map*,int ) ;
 int FUNC_2 (struct rds_cong_map*) ;
 int FUNC_3 (struct rds_cong_map*,int ) ;
 int FUNC_4 (struct rds_sock*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,struct rds_sock*,int *,int ,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct rds_sock *VAR_3, struct sock *VAR_4,
      struct rds_cong_map *VAR_5,
      int VAR_6, __be16 VAR_7)
{
 int VAR_8;

 if (VAR_6 == 0)
  return;

 VAR_3->rs_rcv_bytes += VAR_6;
 if (VAR_6 > 0)
  FUNC_5(VAR_1, VAR_6);
 else
  FUNC_5(VAR_2, -VAR_6);


 if (VAR_3->rs_transport->t_type == VAR_0)
  return;

 VAR_8 = VAR_3->rs_rcv_bytes > FUNC_4(VAR_3);

 FUNC_6("rs %p (%pI6c:%u) recv bytes %d buf %d "
   "now_cong %d delta %d\n",
   VAR_3, &VAR_3->rs_bound_addr,
   FUNC_0(VAR_3->rs_bound_port), VAR_3->rs_rcv_bytes,
   FUNC_4(VAR_3), VAR_8, VAR_6);


 if (!VAR_3->rs_congested && VAR_8) {
  VAR_3->rs_congested = 1;
  FUNC_3(VAR_5, VAR_7);
  FUNC_2(VAR_5);
 }



 else if (VAR_3->rs_congested && (VAR_3->rs_rcv_bytes < (FUNC_4(VAR_3)/2))) {
  VAR_3->rs_congested = 0;
  FUNC_1(VAR_5, VAR_7);
  FUNC_2(VAR_5);
 }


}
