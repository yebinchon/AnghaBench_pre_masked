
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ type; int * ops; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ sq_port; int sq_node; int sq_family; } ;
struct qrtr_sock {TYPE_1__ us; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct qrtr_sock* FUNC_0 (struct sock*) ;
 struct sock* FUNC_1 (struct net*,int ,int ,int *,int) ;
 int FUNC_2 (struct socket*,struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_9, struct socket *VAR_10,
         int VAR_11, int VAR_12)
{
 struct qrtr_sock *VAR_13;
 struct sock *VAR_14;

 if (VAR_10->type != VAR_4)
  return -VAR_2;

 VAR_14 = FUNC_1(VAR_9, VAR_0, VAR_3, &VAR_7, VAR_12);
 if (!VAR_14)
  return -VAR_1;

 FUNC_3(VAR_14, VAR_5);

 FUNC_2(VAR_10, VAR_14);
 VAR_10->ops = &VAR_8;

 VAR_13 = FUNC_0(VAR_14);
 VAR_13->us.sq_family = VAR_0;
 VAR_13->us.sq_node = VAR_6;
 VAR_13->us.sq_port = 0;

 return 0;
}
