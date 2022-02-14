
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_hdmi_port {scalar_t__ num_mux_nids; int id; int mux_nids; } ;
struct hdac_hdmi_pin {int nid; } ;
struct hdac_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__,int ,int) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct hdac_device*,int ) ;
 scalar_t__ FUNC_3 (struct hdac_device*,struct hdac_hdmi_port*) ;
 scalar_t__ FUNC_4 (struct hdac_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hdac_device *VAR_4,
     struct hdac_hdmi_pin *VAR_5,
     struct hdac_hdmi_port *VAR_6)
{
 if (!(FUNC_2(VAR_4, VAR_5->nid) & VAR_0)) {
  FUNC_1(&VAR_4->dev,
   "HDMI: pin %d wcaps %#x does not support connection list\n",
   VAR_5->nid, FUNC_2(VAR_4, VAR_5->nid));
  return -VAR_1;
 }

 if (FUNC_3(VAR_4, VAR_6) < 0)
  return -VAR_2;

 VAR_6->num_mux_nids = FUNC_4(VAR_4, VAR_5->nid,
   VAR_6->mux_nids, VAR_3);
 if (VAR_6->num_mux_nids == 0)
  FUNC_1(&VAR_4->dev,
   "No connections found for pin:port %d:%d\n",
      VAR_5->nid, VAR_6->id);

 FUNC_0(&VAR_4->dev, "num_mux_nids %d for pin:port %d:%d\n",
   VAR_6->num_mux_nids, VAR_5->nid, VAR_6->id);

 return VAR_6->num_mux_nids;
}
