
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct packet_sock {int pg_vec_lock; int tp_version; int tx_ring; int rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct packet_sock *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2->pg_vec_lock);
 VAR_4 = FUNC_2(&VAR_2->rx_ring, VAR_2->tp_version,
   VAR_0, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_2(&VAR_2->tx_ring, VAR_2->tp_version,
    VAR_1, VAR_3);
 FUNC_1(&VAR_2->pg_vec_lock);

 return VAR_4;
}
