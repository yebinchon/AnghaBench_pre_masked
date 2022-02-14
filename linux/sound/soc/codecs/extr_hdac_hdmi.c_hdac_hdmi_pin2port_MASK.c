
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_hdmi_priv {TYPE_1__* drv_data; } ;
struct hdac_device {int dev; } ;
struct TYPE_2__ {int* port_map; int port_num; } ;


 int FUNC_0 (int *,char*,int) ;
 struct hdac_hdmi_priv* FUNC_1 (struct hdac_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int VAR_1)
{
 struct hdac_device *VAR_2 = VAR_0;
 struct hdac_hdmi_priv *VAR_3 = FUNC_1(VAR_2);
 const int *VAR_4 = VAR_3->drv_data->port_map;
 int VAR_5;

 if (!VAR_3->drv_data->port_num)
  return VAR_1 - 4;





 for (VAR_5 = 0; VAR_5 < VAR_3->drv_data->port_num; VAR_5++) {
  if (VAR_1 == VAR_4[VAR_5])
   return VAR_5 + 1;
 }


 FUNC_0(&VAR_2->dev, "Can't find the port for pin %d\n", VAR_1);
 return -1;
}
