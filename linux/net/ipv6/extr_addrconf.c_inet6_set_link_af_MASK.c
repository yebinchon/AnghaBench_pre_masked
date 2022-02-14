
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int addr_gen_mode; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_dev*,int ) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 scalar_t__ FUNC_5 (struct nlattr**,int ,struct nlattr const*,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, const struct nlattr *VAR_4)
{
 struct inet6_dev *VAR_5 = FUNC_1(VAR_3);
 struct nlattr *VAR_6[VAR_1 + 1];
 int VAR_7;

 if (FUNC_5(VAR_6, VAR_1, VAR_4, ((void*)0), ((void*)0)) < 0)
  FUNC_0();

 if (VAR_6[VAR_2]) {
  VAR_7 = FUNC_2(VAR_5, FUNC_3(VAR_6[VAR_2]));
  if (VAR_7)
   return VAR_7;
 }

 if (VAR_6[VAR_0]) {
  u8 VAR_8 = FUNC_4(VAR_6[VAR_0]);

  VAR_5->cnf.addr_gen_mode = VAR_8;
 }

 return 0;
}
