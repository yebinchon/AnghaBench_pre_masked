
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ type; int state; int * ops; } ;
struct sock {int sk_destruct; int sk_protocol; } ;
struct nfc_protocol {int id; int proto; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int tx_work_scheduled; int tx_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,struct sock*) ;
 int FUNC_3 (char*,struct socket*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct sock* FUNC_4 (struct net*,int ,int ,int ,int) ;
 int FUNC_5 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_12, struct socket *VAR_13,
     const struct nfc_protocol *VAR_14, int VAR_15)
{
 struct sock *VAR_16;

 FUNC_3("sock=%p\n", VAR_13);

 if ((VAR_13->type != VAR_5) && (VAR_13->type != VAR_4))
  return -VAR_1;

 if (VAR_13->type == VAR_4)
  VAR_13->ops = &VAR_10;
 else
  VAR_13->ops = &VAR_9;

 VAR_16 = FUNC_4(VAR_12, VAR_3, VAR_2, VAR_14->proto, VAR_15);
 if (!VAR_16)
  return -VAR_0;

 FUNC_5(VAR_13, VAR_16);
 VAR_16->sk_protocol = VAR_14->id;
 VAR_16->sk_destruct = VAR_8;
 VAR_13->state = VAR_6;
 if (VAR_13->type == VAR_4)
  FUNC_2(&VAR_7, VAR_16);
 else {
  FUNC_0(&FUNC_1(VAR_16)->tx_work, VAR_11);
  FUNC_1(VAR_16)->tx_work_scheduled = 0;
 }

 return 0;
}
