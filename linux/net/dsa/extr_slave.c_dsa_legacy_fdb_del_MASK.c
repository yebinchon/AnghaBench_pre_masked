
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;
struct dsa_port {int dummy; } ;


 int FUNC_0 (struct dsa_port*,unsigned char const*,int ) ;
 struct dsa_port* FUNC_1 (struct net_device*) ;

int FUNC_2(struct ndmsg *VAR_0, struct nlattr *VAR_1[],
         struct net_device *VAR_2,
         const unsigned char *VAR_3, u16 VAR_4)
{
 struct dsa_port *VAR_5 = FUNC_1(VAR_2);

 return FUNC_0(VAR_5, VAR_3, VAR_4);
}
