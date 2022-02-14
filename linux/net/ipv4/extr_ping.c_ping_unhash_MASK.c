
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_prot; int sk_nulls_node; } ;
struct inet_sock {scalar_t__ inet_sport; scalar_t__ inet_num; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char*,struct inet_sock*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct sock *VAR_1)
{
 struct inet_sock *VAR_2 = FUNC_1(VAR_1);

 FUNC_2("ping_unhash(isk=%p,isk->num=%u)\n", VAR_2, VAR_2->inet_num);
 FUNC_8(&VAR_0.lock);
 if (FUNC_3(VAR_1)) {
  FUNC_0(&VAR_1->sk_nulls_node);
  FUNC_4(&VAR_1->sk_nulls_node);
  FUNC_7(VAR_1);
  VAR_2->inet_num = 0;
  VAR_2->inet_sport = 0;
  FUNC_6(FUNC_5(VAR_1), VAR_1->sk_prot, -1);
 }
 FUNC_9(&VAR_0.lock);
}
