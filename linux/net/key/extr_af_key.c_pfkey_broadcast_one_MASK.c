
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_rcvbuf; int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; int sk_rmem_alloc; } ;
struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, gfp_t VAR_2,
          struct sock *VAR_3)
{
 int VAR_4 = -VAR_0;

 if (FUNC_0(&VAR_3->sk_rmem_alloc) > VAR_3->sk_rcvbuf)
  return VAR_4;

 VAR_1 = FUNC_1(VAR_1, VAR_2);

 if (VAR_1) {
  FUNC_3(VAR_1, VAR_3);
  FUNC_2(&VAR_3->sk_receive_queue, VAR_1);
  VAR_3->sk_data_ready(VAR_3);
  VAR_4 = 0;
 }
 return VAR_4;
}
