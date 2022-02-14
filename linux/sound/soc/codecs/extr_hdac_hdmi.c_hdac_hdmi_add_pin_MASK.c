
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_hdmi_priv {int num_ports; int num_pin; int pin_list; } ;
struct hdac_hdmi_pin {int mst_capable; scalar_t__ num_ports; int head; struct hdac_device* hdev; int nid; } ;
struct hdac_device {int dev; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct hdac_hdmi_pin* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hdac_device*,struct hdac_hdmi_pin*) ;
 struct hdac_hdmi_priv* FUNC_2 (struct hdac_device*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct hdac_device *VAR_2, hda_nid_t VAR_3)
{
 struct hdac_hdmi_priv *VAR_4 = FUNC_2(VAR_2);
 struct hdac_hdmi_pin *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(&VAR_2->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->nid = VAR_3;
 VAR_5->mst_capable = 0;
 VAR_5->hdev = VAR_2;
 VAR_6 = FUNC_1(VAR_2, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_3(&VAR_5->head, &VAR_4->pin_list);
 VAR_4->num_pin++;
 VAR_4->num_ports += VAR_5->num_ports;

 return 0;
}
