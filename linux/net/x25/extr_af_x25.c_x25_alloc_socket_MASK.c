
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int interrupt_out_queue; int interrupt_in_queue; int fragment_queue; int ack_queue; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sock*) ;
 int VAR_2 ;
 struct x25_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_4(struct net *VAR_3, int VAR_4)
{
 struct x25_sock *VAR_5;
 struct sock *VAR_6 = FUNC_0(VAR_3, VAR_0, VAR_1, &VAR_2, VAR_4);

 if (!VAR_6)
  goto out;

 FUNC_2(((void*)0), VAR_6);

 VAR_5 = FUNC_3(VAR_6);
 FUNC_1(&VAR_5->ack_queue);
 FUNC_1(&VAR_5->fragment_queue);
 FUNC_1(&VAR_5->interrupt_in_queue);
 FUNC_1(&VAR_5->interrupt_out_queue);
out:
 return VAR_6;
}
