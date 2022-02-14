
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_write_space ) (struct sock*) ;int sk_wmem_alloc; } ;
struct sk_buff {int dummy; } ;
struct atm_vcc {int vci; } ;
struct TYPE_2__ {int acct_truesize; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 struct sock* FUNC_5 (struct atm_vcc*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct atm_vcc *VAR_0, struct sk_buff *VAR_1)
{
 struct sock *VAR_2 = FUNC_5(VAR_0);

 FUNC_3("(%d) %d -= %d\n",
   VAR_0->vci, FUNC_6(VAR_2), FUNC_0(VAR_1)->acct_truesize);
 FUNC_1(FUNC_4(FUNC_0(VAR_1)->acct_truesize, &VAR_2->sk_wmem_alloc));
 FUNC_2(VAR_1);
 VAR_2->sk_write_space(VAR_2);
}
