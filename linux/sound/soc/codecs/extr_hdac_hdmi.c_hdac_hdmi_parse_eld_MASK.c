
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int spk_alloc; } ;
struct TYPE_4__ {unsigned int* eld_buffer; TYPE_1__ info; } ;
struct hdac_hdmi_port {TYPE_2__ eld; } ;
struct hdac_device {int dev; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int *,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hdac_device *VAR_11,
   struct hdac_hdmi_port *VAR_12)
{
 unsigned int VAR_13, VAR_14;

 VAR_13 = (VAR_12->eld.eld_buffer[VAR_4] & VAR_5)
      >> VAR_6;

 if (VAR_13 != VAR_9 && VAR_13 != VAR_10) {
  FUNC_0(&VAR_11->dev, "HDMI: Unknown ELD version %d\n", VAR_13);
  return -VAR_7;
 }

 VAR_14 = (VAR_12->eld.eld_buffer[VAR_0] &
  VAR_1) >> VAR_2;

 if (VAR_14 > VAR_8) {
  FUNC_0(&VAR_11->dev, "HDMI: MNL Invalid %d\n", VAR_14);
  return -VAR_7;
 }

 VAR_12->eld.info.spk_alloc = VAR_12->eld.eld_buffer[VAR_3];

 return 0;
}
