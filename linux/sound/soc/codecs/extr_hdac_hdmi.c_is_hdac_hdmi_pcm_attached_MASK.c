
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_hdmi_priv {int dummy; } ;
struct hdac_hdmi_pcm {int port_list; } ;
struct hdac_device {int dummy; } ;


 struct hdac_hdmi_pcm* FUNC_0 (struct hdac_hdmi_priv*,int) ;
 struct hdac_hdmi_priv* FUNC_1 (struct hdac_device*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct hdac_device *VAR_0, int VAR_1)
{
 struct hdac_hdmi_priv *VAR_2 = FUNC_1(VAR_0);
 struct hdac_hdmi_pcm *VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (!VAR_3)
  return 0;

 if (FUNC_2(&VAR_3->port_list))
  return 0;

 return 1;
}
