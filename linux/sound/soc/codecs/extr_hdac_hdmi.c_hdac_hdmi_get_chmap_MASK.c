
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_hdmi_priv {int dummy; } ;
struct hdac_hdmi_pcm {int chmap; } ;
struct hdac_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct hdac_hdmi_pcm* FUNC_1 (struct hdac_hdmi_priv*,int) ;
 struct hdac_hdmi_priv* FUNC_2 (struct hdac_device*) ;
 int FUNC_3 (unsigned char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hdac_device *VAR_0, int VAR_1,
     unsigned char *VAR_2)
{
 struct hdac_hdmi_priv *VAR_3 = FUNC_2(VAR_0);
 struct hdac_hdmi_pcm *VAR_4 = FUNC_1(VAR_3, VAR_1);

 FUNC_3(VAR_2, VAR_4->chmap, FUNC_0(VAR_4->chmap));
}
