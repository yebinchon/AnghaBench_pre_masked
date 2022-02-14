
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct inet6_ifaddr {int flags; scalar_t__ state; int rt_priority; int prefix_len; int addr; int lock; struct fib6_info* rt; } ;
struct inet6_dev {int dev; } ;
struct fib6_info {int fib6_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct fib6_info*) ;
 int FUNC_1 (struct fib6_info*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 struct fib6_info* FUNC_3 (struct net*,struct inet6_dev*,int *,int,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct fib6_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_3,
    struct inet6_dev *VAR_4,
    struct inet6_ifaddr *VAR_5)
{




 if (!VAR_5->rt || !VAR_5->rt->fib6_node) {
  struct fib6_info *VAR_6, *VAR_7;

  VAR_6 = FUNC_3(VAR_3, VAR_4, &VAR_5->addr, 0,
      VAR_0);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);


  FUNC_6(&VAR_5->lock);
  VAR_7 = VAR_5->rt;
  VAR_5->rt = VAR_6;
  FUNC_7(&VAR_5->lock);

  FUNC_5(VAR_7);
 }

 if (!(VAR_5->flags & VAR_1)) {
  FUNC_4(&VAR_5->addr, VAR_5->prefix_len,
          VAR_5->rt_priority, VAR_4->dev, 0, 0,
          VAR_0);
 }

 if (VAR_5->state == VAR_2)
  FUNC_2(VAR_5);

 return 0;
}
