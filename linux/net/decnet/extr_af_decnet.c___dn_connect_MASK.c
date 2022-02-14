
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ state; } ;
struct sockaddr_dn {scalar_t__ sdn_family; int sdn_flags; } ;
struct sock {int sk_route_caps; int sk_dst_cache; int sk_bound_dev_if; struct socket* sk_socket; } ;
struct flowidn {int flowidn_proto; void* saddr; void* daddr; int flowidn_oif; } ;
struct dst_entry {TYPE_1__* dev; } ;
struct dn_scp {scalar_t__ state; int segsize_loc; int addr; int peer; } ;
typedef int fld ;
struct TYPE_2__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 struct dst_entry* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct sock*,int ) ;
 scalar_t__ FUNC_4 (int *,struct flowidn*,struct sock*,int) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (struct flowidn*,struct dn_scp*) ;
 int FUNC_7 (struct sock*,long*) ;
 int FUNC_8 (struct dst_entry*) ;
 int FUNC_9 (int *,struct sockaddr_dn*,int) ;
 int FUNC_10 (struct flowidn*,int ,int) ;
 scalar_t__ FUNC_11 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_17, struct sockaddr_dn *VAR_18, int VAR_19, long *VAR_20, int VAR_21)
{
 struct socket *VAR_22 = VAR_17->sk_socket;
 struct dn_scp *VAR_23 = FUNC_0(VAR_17);
 int VAR_24 = -VAR_10;
 struct flowidn VAR_25;
 struct dst_entry *VAR_26;

 if (VAR_22->state == VAR_14)
  goto out;

 if (VAR_22->state == VAR_15) {
  VAR_24 = 0;
  if (VAR_23->state == VAR_5) {
   VAR_22->state = VAR_14;
   goto out;
  }
  VAR_24 = -VAR_6;
  if (VAR_23->state != VAR_3 && VAR_23->state != VAR_2) {
   VAR_22->state = VAR_16;
   goto out;
  }
  return FUNC_7(VAR_17, VAR_20);
 }

 VAR_24 = -VAR_9;
 if (VAR_23->state != VAR_4)
  goto out;

 if (VAR_18 == ((void*)0) || VAR_19 != sizeof(struct sockaddr_dn))
  goto out;
 if (VAR_18->sdn_family != VAR_0)
  goto out;
 if (VAR_18->sdn_flags & VAR_12)
  goto out;

 if (FUNC_11(VAR_17, VAR_13)) {
  VAR_24 = FUNC_2(VAR_17->sk_socket);
  if (VAR_24)
   goto out;
 }

 FUNC_9(&VAR_23->peer, VAR_18, sizeof(struct sockaddr_dn));

 VAR_24 = -VAR_7;
 FUNC_10(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.flowidn_oif = VAR_17->sk_bound_dev_if;
 VAR_25.daddr = FUNC_5(&VAR_23->peer);
 VAR_25.saddr = FUNC_5(&VAR_23->addr);
 FUNC_6(&VAR_25, VAR_23);
 VAR_25.flowidn_proto = VAR_1;
 if (FUNC_4(&VAR_17->sk_dst_cache, &VAR_25, VAR_17, VAR_21) < 0)
  goto out;
 VAR_26 = FUNC_1(VAR_17);
 VAR_17->sk_route_caps = VAR_26->dev->features;
 VAR_22->state = VAR_15;
 VAR_23->state = VAR_3;
 VAR_23->segsize_loc = FUNC_8(VAR_26);

 FUNC_3(VAR_17, VAR_11);
 VAR_24 = -VAR_8;
 if (*VAR_20) {
  VAR_24 = FUNC_7(VAR_17, VAR_20);
 }
out:
 return VAR_24;
}
