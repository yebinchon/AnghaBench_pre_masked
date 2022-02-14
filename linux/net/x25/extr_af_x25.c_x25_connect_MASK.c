
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int x25_addr; } ;
struct x25_sock {int state; int * neighbour; int dest_addr; TYPE_2__ source_addr; int lci; int facilities; } ;
struct x25_route {int dev; } ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sockaddr_x25 {scalar_t__ sx25_family; int sx25_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct TYPE_3__ {int x25_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (TYPE_2__*,char,int ) ;
 TYPE_1__ VAR_18 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ) ;
 struct x25_route* FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_19 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct x25_route*) ;
 struct x25_sock* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_18(struct socket *VAR_20, struct sockaddr *VAR_21,
         int VAR_22, int VAR_23)
{
 struct sock *VAR_24 = VAR_20->sk;
 struct x25_sock *VAR_25 = FUNC_13(VAR_24);
 struct sockaddr_x25 *VAR_26 = (struct sockaddr_x25 *)VAR_21;
 struct x25_route *VAR_27;
 int VAR_28 = 0;

 FUNC_0(VAR_24);
 if (VAR_24->sk_state == VAR_12 && VAR_20->state == VAR_9) {
  VAR_20->state = VAR_8;
  goto out;
 }

 VAR_28 = -VAR_1;
 if (VAR_24->sk_state == VAR_11 && VAR_20->state == VAR_9) {
  VAR_20->state = VAR_10;
  goto out;
 }

 VAR_28 = -VAR_4;
 if (VAR_24->sk_state == VAR_12)
  goto out;

 VAR_24->sk_state = VAR_11;
 VAR_20->state = VAR_10;

 VAR_28 = -VAR_3;
 if (VAR_22 != sizeof(struct sockaddr_x25) ||
     VAR_26->sx25_family != VAR_0)
  goto out;

 VAR_28 = -VAR_5;
 VAR_27 = FUNC_8(&VAR_26->sx25_addr);
 if (!VAR_27)
  goto out;

 VAR_25->neighbour = FUNC_7(VAR_27->dev);
 if (!VAR_25->neighbour)
  goto out_put_route;

 FUNC_9(&VAR_25->facilities, VAR_25->neighbour);

 VAR_25->lci = FUNC_11(VAR_25->neighbour);
 if (!VAR_25->lci)
  goto out_put_neigh;

 VAR_28 = -VAR_3;
 if (FUNC_5(VAR_24, VAR_7))
  goto out_put_neigh;

 if (!FUNC_6(VAR_25->source_addr.x25_addr, VAR_18.x25_addr))
  FUNC_1(&VAR_25->source_addr, '\0', VAR_14);

 VAR_25->dest_addr = VAR_26->sx25_addr;


 VAR_20->state = VAR_9;
 VAR_24->sk_state = VAR_13;

 VAR_25->state = VAR_17;

 FUNC_17(VAR_24, VAR_15);

 FUNC_14(VAR_24);
 FUNC_15(VAR_24);


 VAR_28 = -VAR_2;
 if (VAR_24->sk_state != VAR_12 && (VAR_23 & VAR_6))
  goto out_put_neigh;

 VAR_28 = FUNC_16(VAR_24);
 if (VAR_28)
  goto out_put_neigh;

 VAR_20->state = VAR_8;
 VAR_28 = 0;
out_put_neigh:
 if (VAR_28) {
  FUNC_2(&VAR_19);
  FUNC_10(VAR_25->neighbour);
  VAR_25->neighbour = ((void*)0);
  FUNC_3(&VAR_19);
  VAR_25->state = VAR_16;
 }
out_put_route:
 FUNC_12(VAR_27);
out:
 FUNC_4(VAR_24);
 return VAR_28;
}
