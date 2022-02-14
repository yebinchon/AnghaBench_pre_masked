
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_hdmi_priv {TYPE_1__* drv_data; } ;
struct hdac_device {int dummy; } ;
struct TYPE_2__ {unsigned int vendor_nid; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hdac_hdmi_priv* FUNC_0 (struct hdac_device*) ;
 unsigned int FUNC_1 (struct hdac_device*,unsigned int,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hdac_device *VAR_3)
{
 unsigned int VAR_4;
 struct hdac_hdmi_priv *VAR_5 = FUNC_0(VAR_3);
 unsigned int VAR_6 = VAR_5->drv_data->vendor_nid;

 VAR_4 = FUNC_1(VAR_3, VAR_6, 0,
    VAR_1, 0);
 if (VAR_4 == -1 || VAR_4 & VAR_0)
  return;


 VAR_4 |= VAR_0;
 VAR_4 = FUNC_1(VAR_3, VAR_6, 0,
    VAR_2, VAR_4);
 if (VAR_4 == -1)
  return;

}
