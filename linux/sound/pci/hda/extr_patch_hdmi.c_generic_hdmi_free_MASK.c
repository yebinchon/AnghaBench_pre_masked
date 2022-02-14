
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdmi_spec_per_pin {int work; } ;
struct hdmi_spec {int num_pins; int pcm_used; TYPE_2__* pcm_rec; scalar_t__ dyn_pcm_assign; scalar_t__ acomp_registered; } ;
struct hda_codec {int card; scalar_t__ relaxed_resume; TYPE_1__* bus; struct hdmi_spec* spec; } ;
struct TYPE_4__ {int * jack; } ;
struct TYPE_3__ {int core; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hdmi_spec_per_pin*) ;
 int FUNC_3 (struct hda_codec*) ;
 struct hdmi_spec_per_pin* FUNC_4 (struct hdmi_spec*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct hda_codec *VAR_0)
{
 struct hdmi_spec *VAR_1 = VAR_0->spec;
 int VAR_2, VAR_3;

 if (VAR_1->acomp_registered) {
  FUNC_6(&VAR_0->bus->core);
 } else if (FUNC_1(VAR_0)) {
  FUNC_7(&VAR_0->bus->core, ((void*)0));
  VAR_0->relaxed_resume = 0;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pins; VAR_2++) {
  struct hdmi_spec_per_pin *VAR_4 = FUNC_4(VAR_1, VAR_2);
  FUNC_0(&VAR_4->work);
  FUNC_2(VAR_4);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->pcm_used; VAR_3++) {
  if (VAR_1->pcm_rec[VAR_3].jack == ((void*)0))
   continue;
  if (VAR_1->dyn_pcm_assign)
   FUNC_5(VAR_0->card,
     VAR_1->pcm_rec[VAR_3].jack);
  else
   VAR_1->pcm_rec[VAR_3].jack = ((void*)0);
 }

 FUNC_3(VAR_0);
}
