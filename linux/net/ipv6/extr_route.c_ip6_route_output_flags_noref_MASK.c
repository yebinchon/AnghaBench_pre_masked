
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_bound_dev_if; } ;
struct net {int dummy; } ;
struct flowi6 {scalar_t__ flowi6_oif; int daddr; int saddr; int flowi6_iif; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int srcprefs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dst_entry* FUNC_0 (struct net*,struct flowi6*,int *,int,int ) ;
 TYPE_1__* FUNC_1 (struct sock const*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct dst_entry* FUNC_4 (struct net*,struct flowi6*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

struct dst_entry *FUNC_7(struct net *VAR_7,
            const struct sock *VAR_8,
            struct flowi6 *VAR_9, int VAR_10)
{
 bool VAR_11;

 if (FUNC_3(&VAR_9->daddr) &
     (VAR_1 | VAR_0)) {
  struct dst_entry *VAR_12;


  VAR_12 = FUNC_4(VAR_7, VAR_9);
  if (VAR_12)
   return VAR_12;
 }

 VAR_9->flowi6_iif = VAR_2;

 VAR_10 |= VAR_3;
 VAR_11 = FUNC_2(&VAR_9->saddr);
 if ((VAR_8 && VAR_8->sk_bound_dev_if) || FUNC_5(&VAR_9->daddr) ||
     (VAR_9->flowi6_oif && VAR_11))
  VAR_10 |= VAR_5;

 if (!VAR_11)
  VAR_10 |= VAR_4;
 else if (VAR_8)
  VAR_10 |= FUNC_6(FUNC_1(VAR_8)->srcprefs);

 return FUNC_0(VAR_7, VAR_9, ((void*)0), VAR_10, VAR_6);
}
