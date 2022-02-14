
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dsa_port {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct dsa_port*,struct net_device*) ;
 int FUNC_3 (struct dsa_port*) ;
 int FUNC_4 (struct dsa_port*,char const*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(struct dsa_port *VAR_1, const char *VAR_2,
     struct device *VAR_3)
{
 if (!FUNC_5(VAR_2, "cpu")) {
  struct net_device *VAR_4;

  VAR_4 = FUNC_1(VAR_3);
  if (!VAR_4)
   return -VAR_0;

  FUNC_0(VAR_4);

  return FUNC_2(VAR_1, VAR_4);
 }

 if (!FUNC_5(VAR_2, "dsa"))
  return FUNC_3(VAR_1);

 return FUNC_4(VAR_1, VAR_2);
}
