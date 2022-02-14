
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {struct dsa_port* ports; } ;
struct dsa_port {int dummy; } ;
struct dsa_chip_data {char** port_names; struct device** netdev; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dsa_port*,char const*,struct device*) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_2,
      struct dsa_chip_data *VAR_3)
{
 bool VAR_4 = 0;
 struct dsa_port *VAR_5;
 struct device *VAR_6;
 const char *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = VAR_3->port_names[VAR_8];
  VAR_6 = VAR_3->netdev[VAR_8];
  VAR_5 = &VAR_2->ports[VAR_8];

  if (!VAR_7)
   continue;

  VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_6);
  if (VAR_9)
   return VAR_9;

  VAR_4 = 1;
 }

 if (!VAR_4 && VAR_8 == VAR_0)
  return -VAR_1;

 return 0;
}
