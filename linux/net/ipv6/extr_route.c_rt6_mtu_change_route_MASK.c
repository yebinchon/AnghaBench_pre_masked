
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_mtu_change_arg {struct fib6_info* f6i; int dev; } ;
struct inet6_dev {int dummy; } ;
struct fib6_info {int fib6_nh; scalar_t__ nh; } ;


 int VAR_0 ;
 struct inet6_dev* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct fib6_info*,int ) ;
 int FUNC_2 (int ,struct rt6_mtu_change_arg*) ;
 int FUNC_3 (scalar_t__,int (*) (int ,struct rt6_mtu_change_arg*),struct rt6_mtu_change_arg*) ;

__attribute__((used)) static int FUNC_4(struct fib6_info *VAR_1, void *VAR_2)
{
 struct rt6_mtu_change_arg *VAR_3 = (struct rt6_mtu_change_arg *) VAR_2;
 struct inet6_dev *VAR_4;







 VAR_4 = FUNC_0(VAR_3->dev);
 if (!VAR_4)
  return 0;

 if (FUNC_1(VAR_1, VAR_0))
  return 0;

 VAR_3->f6i = VAR_1;
 if (VAR_1->nh) {

  return FUNC_3(VAR_1->nh, FUNC_2,
      VAR_3);
 }

 return FUNC_2(VAR_1->fib6_nh, VAR_3);
}
