
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int rt6i_flags; } ;
struct net_device {int dummy; } ;
struct fib6_result {struct fib6_info* f6i; } ;
struct fib6_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 unsigned short FUNC_1 (struct fib6_info*) ;
 int FUNC_2 (struct fib6_info*) ;
 int FUNC_3 (struct fib6_info*) ;
 struct rt6_info* FUNC_4 (int ,struct net_device*,unsigned short) ;
 int FUNC_5 (struct rt6_info*,struct fib6_result const*) ;
 struct net_device* FUNC_6 (struct fib6_result const*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static struct rt6_info *FUNC_9(const struct fib6_result *VAR_1)
{
 struct fib6_info *VAR_2 = VAR_1->f6i;
 unsigned short VAR_3 = FUNC_1(VAR_2);
 struct net_device *VAR_4;
 struct rt6_info *VAR_5;

 if (!FUNC_2(VAR_2))
  return ((void*)0);

 FUNC_7();
 VAR_4 = FUNC_6(VAR_1);
 VAR_5 = FUNC_4(FUNC_0(VAR_4), VAR_4, VAR_3);
 FUNC_8();
 if (!VAR_5) {
  FUNC_3(VAR_2);
  return ((void*)0);
 }
 FUNC_5(VAR_5, VAR_1);
 VAR_5->rt6i_flags |= VAR_0;
 return VAR_5;
}
