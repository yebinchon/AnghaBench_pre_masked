
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {size_t num_ports; TYPE_1__* ports; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int index; struct dsa_switch* ds; } ;


 int VAR_0 ;
 struct dsa_switch* FUNC_0 (struct device*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dsa_switch*,int ,size_t) ;

struct dsa_switch *FUNC_2(struct device *VAR_2, size_t VAR_3)
{
 struct dsa_switch *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2, FUNC_1(VAR_4, VAR_1, VAR_3), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dev = VAR_2;
 VAR_4->num_ports = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_ports; ++VAR_5) {
  VAR_4->ports[VAR_5].index = VAR_5;
  VAR_4->ports[VAR_5].ds = VAR_4;
 }

 return VAR_4;
}
