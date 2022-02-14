
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct inet6_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 struct inet6_dev* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inet6_dev*,int ,int ) ;
 int FUNC_3 (struct net_device const*) ;
 int VAR_5 ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;

__attribute__((used)) static int FUNC_6(const struct net_device *VAR_6,
      const struct nlattr *VAR_7)
{
 struct nlattr *VAR_8[VAR_3 + 1];
 struct inet6_dev *VAR_9 = ((void*)0);
 int VAR_10;

 if (VAR_6) {
  VAR_9 = FUNC_0(VAR_6);
  if (!VAR_9)
   return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_8, VAR_3, VAR_7,
       VAR_5, ((void*)0));
 if (VAR_10)
  return VAR_10;

 if (!VAR_8[VAR_4] && !VAR_8[VAR_2])
  return -VAR_1;

 if (VAR_8[VAR_2]) {
  u8 VAR_11 = FUNC_4(VAR_8[VAR_2]);

  if (FUNC_1(VAR_11) < 0)
   return -VAR_1;
  if (VAR_6 && FUNC_2(VAR_9, FUNC_3(VAR_6), VAR_11) < 0)
   return -VAR_1;
 }

 return 0;
}
