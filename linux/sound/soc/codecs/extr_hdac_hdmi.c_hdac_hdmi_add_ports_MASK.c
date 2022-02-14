
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_hdmi_port {int id; int dapm_work; struct hdac_hdmi_pin* pin; } ;
struct hdac_hdmi_pin {int num_ports; struct hdac_hdmi_port* ports; } ;
struct hdac_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct hdac_hdmi_port* FUNC_1 (int *,int,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct hdac_device *VAR_4,
          struct hdac_hdmi_pin *VAR_5)
{
 struct hdac_hdmi_port *VAR_6;
 int VAR_7 = VAR_2;
 int VAR_8;







 VAR_6 = FUNC_1(&VAR_4->dev, VAR_7, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_6[VAR_8].id = VAR_8;
  VAR_6[VAR_8].pin = VAR_5;
  FUNC_0(&VAR_6[VAR_8].dapm_work, VAR_3);
 }
 VAR_5->ports = VAR_6;
 VAR_5->num_ports = VAR_7;
 return 0;
}
