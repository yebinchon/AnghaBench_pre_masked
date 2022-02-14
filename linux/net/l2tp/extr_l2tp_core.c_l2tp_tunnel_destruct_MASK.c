
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_destruct ) (struct sock*) ;int * sk_user_data; } ;
struct l2tp_tunnel {int encap; int (* old_sk_destruct ) (struct sock*) ;int name; } ;
struct TYPE_2__ {int * encap_destroy; int * encap_rcv; int encap_type; } ;




 int VAR_0 ;
 int FUNC_0 (struct l2tp_tunnel*,int ) ;
 int FUNC_1 (struct l2tp_tunnel*,int ,char*,int ) ;
 struct l2tp_tunnel* FUNC_2 (struct sock*) ;
 int VAR_1 ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 struct l2tp_tunnel *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 == ((void*)0))
  goto end;

 FUNC_1(VAR_3, VAR_0, "%s: closing...\n", VAR_3->name);


 switch (VAR_3->encap) {
 case 128:

  (FUNC_4(VAR_2))->encap_type = 0;
  (FUNC_4(VAR_2))->encap_rcv = ((void*)0);
  (FUNC_4(VAR_2))->encap_destroy = ((void*)0);
  break;
 case 129:
  break;
 }


 VAR_2->sk_destruct = VAR_3->old_sk_destruct;
 VAR_2->sk_user_data = ((void*)0);


 if (VAR_2->sk_destruct)
  (*VAR_2->sk_destruct)(VAR_2);

 FUNC_0(VAR_3, VAR_1);
end:
 return;
}
