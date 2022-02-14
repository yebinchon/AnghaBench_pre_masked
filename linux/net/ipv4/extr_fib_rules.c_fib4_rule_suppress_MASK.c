
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ group; } ;
struct fib_rule {scalar_t__ suppress_prefixlen; int suppress_ifgroup; } ;
struct fib_result {scalar_t__ prefixlen; scalar_t__ fi; } ;
struct fib_nh_common {struct net_device* nhc_dev; } ;
struct fib_lookup_arg {int flags; scalar_t__ result; } ;


 int VAR_0 ;
 struct fib_nh_common* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct fib_rule *VAR_1, struct fib_lookup_arg *VAR_2)
{
 struct fib_result *VAR_3 = (struct fib_result *) VAR_2->result;
 struct net_device *VAR_4 = ((void*)0);

 if (VAR_3->fi) {
  struct fib_nh_common *VAR_5 = FUNC_0(VAR_3->fi, 0);

  VAR_4 = VAR_5->nhc_dev;
 }




 if (VAR_3->prefixlen <= VAR_1->suppress_prefixlen)
  goto suppress_route;




 if (VAR_1->suppress_ifgroup != -1 && VAR_4 && VAR_4->group == VAR_1->suppress_ifgroup)
  goto suppress_route;

 return 0;

suppress_route:
 if (!(VAR_2->flags & VAR_0))
  FUNC_1(VAR_3->fi);
 return 1;
}
