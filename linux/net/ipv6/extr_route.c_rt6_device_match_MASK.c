
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fib6_info* fib6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct fib6_result {struct fib6_nh* nh; int fib6_type; int fib6_flags; struct fib6_info* f6i; } ;
struct fib6_nh {int fib_nh_flags; } ;
struct fib6_info {int fib6_flags; int fib6_type; struct fib6_nh* fib6_nh; int nh; int fib6_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net*,struct fib6_nh*,struct in6_addr const*,int,int) ;
 scalar_t__ FUNC_1 (struct in6_addr const*) ;
 struct fib6_nh* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct fib6_info* FUNC_4 (int ) ;
 struct fib6_nh* FUNC_5 (struct net*,int ,struct fib6_result*,struct in6_addr const*,int,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct net *VAR_4, struct fib6_result *VAR_5,
        const struct in6_addr *VAR_6, int VAR_7, int VAR_8)
{
 struct fib6_info *VAR_9 = VAR_5->f6i;
 struct fib6_info *VAR_10;
 struct fib6_nh *VAR_11;

 if (!VAR_7 && FUNC_1(VAR_6)) {
  if (FUNC_6(VAR_9->nh)) {
   VAR_11 = FUNC_2(VAR_9->nh);
   if (FUNC_3(VAR_9->nh))
    goto out_blackhole;
  } else {
   VAR_11 = VAR_9->fib6_nh;
  }
  if (!(VAR_11->fib_nh_flags & VAR_2))
   goto out;
 }

 for (VAR_10 = VAR_9; VAR_10; VAR_10 = FUNC_4(VAR_10->fib6_next)) {
  bool VAR_12 = 0;

  if (FUNC_6(VAR_10->nh)) {
   VAR_11 = FUNC_5(VAR_4, VAR_10->nh, VAR_5, VAR_6,
           VAR_7, VAR_8);
   if (VAR_11)
    VAR_12 = 1;
  } else {
   VAR_11 = VAR_10->fib6_nh;
   if (FUNC_0(VAR_4, VAR_11, VAR_6, VAR_7, VAR_8))
    VAR_12 = 1;
  }
  if (VAR_12) {
   VAR_5->f6i = VAR_10;
   goto out;
  }
 }

 if (VAR_7 && VAR_8 & VAR_0) {
  VAR_5->f6i = VAR_4->ipv6.fib6_null_entry;
  VAR_11 = VAR_5->f6i->fib6_nh;
  goto out;
 }

 if (FUNC_6(VAR_9->nh)) {
  VAR_11 = FUNC_2(VAR_9->nh);
  if (FUNC_3(VAR_9->nh))
   goto out_blackhole;
 } else {
  VAR_11 = VAR_9->fib6_nh;
 }

 if (VAR_11->fib_nh_flags & VAR_2) {
  VAR_5->f6i = VAR_4->ipv6.fib6_null_entry;
  VAR_11 = VAR_5->f6i->fib6_nh;
 }
out:
 VAR_5->nh = VAR_11;
 VAR_5->fib6_type = VAR_5->f6i->fib6_type;
 VAR_5->fib6_flags = VAR_5->f6i->fib6_flags;
 return;

out_blackhole:
 VAR_5->fib6_flags |= VAR_1;
 VAR_5->fib6_type = VAR_3;
 VAR_5->nh = VAR_11;
}
