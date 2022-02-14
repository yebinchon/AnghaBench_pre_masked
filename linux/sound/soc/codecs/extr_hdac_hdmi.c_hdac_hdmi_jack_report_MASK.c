
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_hdmi_port {int is_connect; TYPE_1__* pin; } ;
struct hdac_hdmi_pcm {int jack_event; int jack; int pcm_id; } ;
struct hdac_device {int dev; } ;
struct TYPE_2__ {struct hdac_device* hdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hdac_hdmi_pcm *VAR_1,
  struct hdac_hdmi_port *VAR_2, bool VAR_3)
{
 struct hdac_device *VAR_4 = VAR_2->pin->hdev;

 VAR_2->is_connect = VAR_3;
 if (VAR_3) {





  if (VAR_1->jack_event == 0) {
   FUNC_0(&VAR_4->dev,
     "jack report for pcm=%d\n",
     VAR_1->pcm_id);
   FUNC_1(VAR_1->jack, VAR_0,
      VAR_0);
  }
  VAR_1->jack_event++;
 } else {





  if (VAR_1->jack_event == 1)
   FUNC_1(VAR_1->jack, 0, VAR_0);
  if (VAR_1->jack_event > 0)
   VAR_1->jack_event--;
 }
}
