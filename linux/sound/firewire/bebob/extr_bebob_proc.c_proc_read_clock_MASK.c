
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct snd_bebob* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_bebob_rate_spec {scalar_t__ (* get ) (struct snd_bebob*,unsigned int*) ;} ;
struct snd_bebob_clock_spec {int dummy; } ;
struct snd_bebob {int sync_input_plug; TYPE_1__* spec; } ;
typedef enum snd_bebob_clock_type { ____Placeholder_snd_bebob_clock_type } snd_bebob_clock_type ;
struct TYPE_2__ {struct snd_bebob_clock_spec* clock; struct snd_bebob_rate_spec* rate; } ;


 scalar_t__ FUNC_0 (struct snd_bebob*,int*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;
 scalar_t__ FUNC_2 (struct snd_bebob*,unsigned int*) ;

__attribute__((used)) static void
FUNC_3(struct snd_info_entry *VAR_0,
  struct snd_info_buffer *VAR_1)
{
 static const char *const VAR_2[] = {
  "Internal",
  "External",
  "SYT-Match",
 };
 struct snd_bebob *VAR_3 = VAR_0->private_data;
 const struct snd_bebob_rate_spec *VAR_4 = VAR_3->spec->rate;
 const struct snd_bebob_clock_spec *VAR_5 = VAR_3->spec->clock;
 enum snd_bebob_clock_type VAR_6;
 unsigned int VAR_7;

 if (VAR_4->get(VAR_3, &VAR_7) >= 0)
  FUNC_1(VAR_1, "Sampling rate: %d\n", VAR_7);

 if (FUNC_0(VAR_3, &VAR_6) >= 0) {
  if (VAR_5)
   FUNC_1(VAR_1, "Clock Source: %s\n",
        VAR_2[VAR_6]);
  else
   FUNC_1(VAR_1, "Clock Source: %s (MSU-dest: %d)\n",
        VAR_2[VAR_6], VAR_3->sync_input_plug);
 }
}
