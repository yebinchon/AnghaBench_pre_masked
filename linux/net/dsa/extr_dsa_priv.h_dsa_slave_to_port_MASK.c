
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dsa_slave_priv {struct dsa_port* dp; } ;
struct dsa_port {int dummy; } ;


 struct dsa_slave_priv* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static inline struct dsa_port *FUNC_1(const struct net_device *VAR_0)
{
 struct dsa_slave_priv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->dp;
}
