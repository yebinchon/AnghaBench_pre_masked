
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_hdmi_priv {int num_cvt; int cvt_list; } ;
struct hdac_hdmi_cvt {int nid; int head; int name; } ;
struct hdac_device {int dev; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 struct hdac_hdmi_cvt* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct hdac_device*,struct hdac_hdmi_cvt*) ;
 struct hdac_hdmi_priv* FUNC_3 (struct hdac_device*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct hdac_device *VAR_3, hda_nid_t VAR_4)
{
 struct hdac_hdmi_priv *VAR_5 = FUNC_3(VAR_3);
 struct hdac_hdmi_cvt *VAR_6;
 char VAR_7[VAR_2];

 VAR_6 = FUNC_1(&VAR_3->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->nid = VAR_4;
 FUNC_5(VAR_7, "cvt %d", VAR_6->nid);
 VAR_6->name = FUNC_0(&VAR_3->dev, VAR_7, VAR_1);
 if (!VAR_6->name)
  return -VAR_0;

 FUNC_4(&VAR_6->head, &VAR_5->cvt_list);
 VAR_5->num_cvt++;

 return FUNC_2(VAR_3, VAR_6);
}
