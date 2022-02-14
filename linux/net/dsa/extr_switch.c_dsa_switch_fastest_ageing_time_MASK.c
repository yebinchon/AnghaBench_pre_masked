
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int num_ports; struct dsa_port* ports; } ;
struct dsa_port {unsigned int ageing_time; } ;



__attribute__((used)) static unsigned int FUNC_0(struct dsa_switch *VAR_0,
         unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_ports; ++VAR_2) {
  struct dsa_port *VAR_3 = &VAR_0->ports[VAR_2];

  if (VAR_3->ageing_time && VAR_3->ageing_time < VAR_1)
   VAR_1 = VAR_3->ageing_time;
 }

 return VAR_1;
}
