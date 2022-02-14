
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fib_dump_filter {int flags; scalar_t__ rt_type; scalar_t__ protocol; scalar_t__ dump_exceptions; scalar_t__ dump_routes; scalar_t__ filter_set; scalar_t__ dev; } ;
struct rt6_rtnl_dump_arg {TYPE_3__* cb; int skb; struct net* net; struct fib_dump_filter filter; } ;
struct TYPE_5__ {struct fib6_info* fib6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_nh_exception_dump_walker {unsigned int flags; unsigned int skip; int count; struct fib6_info* rt; struct rt6_rtnl_dump_arg* dump; } ;
struct fib6_info {int fib6_flags; scalar_t__ fib6_type; scalar_t__ fib6_protocol; int fib6_nh; scalar_t__ nh; } ;
struct TYPE_8__ {int portid; } ;
struct TYPE_7__ {TYPE_2__* nlh; int skb; } ;
struct TYPE_6__ {int nlmsg_seq; } ;


 TYPE_4__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fib6_info*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int (*) (int ,struct fib6_nh_exception_dump_walker*),struct fib6_nh_exception_dump_walker*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct net*,int ,struct fib6_info*,int *,int *,int *,int ,int ,int ,int ,unsigned int) ;
 int FUNC_6 (int ,struct fib6_nh_exception_dump_walker*) ;

int FUNC_7(struct fib6_info *VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct rt6_rtnl_dump_arg *VAR_8 = (struct rt6_rtnl_dump_arg *) VAR_6;
 struct fib_dump_filter *VAR_9 = &VAR_8->filter;
 unsigned int VAR_10 = VAR_1;
 struct net *VAR_11 = VAR_8->net;
 int VAR_12 = 0;

 if (VAR_5 == VAR_11->ipv6.fib6_null_entry)
  return -1;

 if ((VAR_9->flags & VAR_3) &&
     !(VAR_5->fib6_flags & VAR_2)) {

  return -1;
 }
 if (VAR_9->filter_set &&
     ((VAR_9->rt_type && VAR_5->fib6_type != VAR_9->rt_type) ||
      (VAR_9->dev && !FUNC_1(VAR_5, VAR_9->dev)) ||
      (VAR_9->protocol && VAR_5->fib6_protocol != VAR_9->protocol))) {
  return -1;
 }

 if (VAR_9->filter_set ||
     !VAR_9->dump_routes || !VAR_9->dump_exceptions) {
  VAR_10 |= VAR_0;
 }

 if (VAR_9->dump_routes) {
  if (VAR_7) {
   VAR_7--;
  } else {
   if (FUNC_5(VAR_11, VAR_8->skb, VAR_5, ((void*)0), ((void*)0), ((void*)0),
       0, VAR_4,
       FUNC_0(VAR_8->cb->skb).portid,
       VAR_8->cb->nlh->nlmsg_seq, VAR_10)) {
    return 0;
   }
   VAR_12++;
  }
 }

 if (VAR_9->dump_exceptions) {
  struct fib6_nh_exception_dump_walker VAR_13 = { .dump = VAR_8,
          .rt = VAR_5,
          .flags = VAR_10,
          .skip = VAR_7,
          .count = 0 };
  int VAR_14;

  FUNC_3();
  if (VAR_5->nh) {
   VAR_14 = FUNC_2(VAR_5->nh,
             FUNC_6,
             &VAR_13);
  } else {
   VAR_14 = FUNC_6(VAR_5->fib6_nh, &VAR_13);
  }
  FUNC_4();

  if (VAR_14)
   return VAR_12 += VAR_13.count;
 }

 return -1;
}
