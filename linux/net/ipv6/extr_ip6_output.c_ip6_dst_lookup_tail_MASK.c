
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct rt6_info {TYPE_1__ dst; int from; } ;
struct net {int dummy; } ;
struct neighbour {int nud_state; } ;
struct inet6_ifaddr {int flags; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int daddr; int saddr; scalar_t__ flowi6_oif; } ;
struct fib6_info {int dummy; } ;
struct dst_entry {int error; int dev; } ;
struct TYPE_4__ {int srcprefs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net*,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct neighbour* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (struct inet6_ifaddr*) ;
 TYPE_2__* FUNC_4 (struct sock const*) ;
 int FUNC_5 (struct net*,struct fib6_info*,int *,int ,int *) ;
 struct dst_entry* FUNC_6 (struct net*,struct sock const*,struct flowi6*) ;
 struct dst_entry* FUNC_7 (struct net*,struct sock const*,struct flowi6*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 struct inet6_ifaddr* FUNC_10 (struct net*,int *,int ,int) ;
 int FUNC_11 (struct flowi6*,struct flowi6*,int) ;
 int FUNC_12 (int *,int ,int) ;
 struct fib6_info* FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct rt6_info*,int *) ;

__attribute__((used)) static int FUNC_19(struct net *VAR_7, const struct sock *VAR_8,
          struct dst_entry **VAR_9, struct flowi6 *VAR_10)
{




 int VAR_11;
 int VAR_12 = 0;
 if (FUNC_8(&VAR_10->saddr) && (!*VAR_9 || !(*VAR_9)->error)) {
  struct fib6_info *VAR_13;
  struct rt6_info *VAR_14;
  bool VAR_15 = *VAR_9 != ((void*)0);

  if (!VAR_15)
   *VAR_9 = FUNC_6(VAR_7, VAR_8, VAR_10);
  VAR_14 = (*VAR_9)->error ? ((void*)0) : (struct rt6_info *)*VAR_9;

  FUNC_14();
  VAR_13 = VAR_14 ? FUNC_13(VAR_14->from) : ((void*)0);
  VAR_11 = FUNC_5(VAR_7, VAR_13, &VAR_10->daddr,
       VAR_8 ? FUNC_4(VAR_8)->srcprefs : 0,
       &VAR_10->saddr);
  FUNC_16();

  if (VAR_11)
   goto out_err_release;





  if (!VAR_15 && (*VAR_9)->error) {
   FUNC_2(*VAR_9);
   *VAR_9 = ((void*)0);
  }

  if (VAR_10->flowi6_oif)
   VAR_12 |= VAR_6;
 }

 if (!*VAR_9)
  *VAR_9 = FUNC_7(VAR_7, VAR_8, VAR_10, VAR_12);

 VAR_11 = (*VAR_9)->error;
 if (VAR_11)
  goto out_err_release;
 if (FUNC_9(&VAR_10->saddr) &&
     !(FUNC_9(&VAR_10->daddr) || FUNC_8(&VAR_10->daddr))) {
  VAR_11 = -VAR_0;
  goto out_err_release;
 }

 return 0;

out_err_release:
 FUNC_2(*VAR_9);
 *VAR_9 = ((void*)0);

 if (VAR_11 == -VAR_2)
  FUNC_0(VAR_7, ((void*)0), VAR_4);
 return VAR_11;
}
