
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rds_sock {int rs_recv_lock; } ;
struct TYPE_4__ {int h_dport; int h_len; } ;
struct rds_incoming {int i_item; TYPE_2__ i_hdr; TYPE_1__* i_conn; } ;
struct TYPE_3__ {int c_lcong; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rds_incoming*) ;
 int FUNC_4 (struct rds_sock*,struct sock*,int ,int ,int ) ;
 struct sock* FUNC_5 (struct rds_sock*) ;
 int FUNC_6 (char*,struct rds_incoming*,struct rds_sock*,int,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct rds_sock *VAR_0, struct rds_incoming *VAR_1,
       int VAR_2)
{
 struct sock *VAR_3 = FUNC_5(VAR_0);
 int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_7(&VAR_0->rs_recv_lock, VAR_5);
 if (!FUNC_2(&VAR_1->i_item)) {
  VAR_4 = 1;
  if (VAR_2) {

   FUNC_4(VAR_0, VAR_3, VAR_1->i_conn->c_lcong,
           -FUNC_0(VAR_1->i_hdr.h_len),
           VAR_1->i_hdr.h_dport);
   FUNC_1(&VAR_1->i_item);
   FUNC_3(VAR_1);
  }
 }
 FUNC_8(&VAR_0->rs_recv_lock, VAR_5);

 FUNC_6("inc %p rs %p still %d dropped %d\n", VAR_1, VAR_0, VAR_4, VAR_2);
 return VAR_4;
}
