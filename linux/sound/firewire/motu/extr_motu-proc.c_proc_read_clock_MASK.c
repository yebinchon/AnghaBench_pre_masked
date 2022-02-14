
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_motu_protocol {scalar_t__ (* get_clock_rate ) (struct snd_motu*,unsigned int*) ;scalar_t__ (* get_clock_source ) (struct snd_motu*,int*) ;} ;
struct snd_motu {TYPE_1__* spec; } ;
struct snd_info_entry {struct snd_motu* private_data; } ;
struct snd_info_buffer {int dummy; } ;
typedef enum snd_motu_clock_source { ____Placeholder_snd_motu_clock_source } snd_motu_clock_source ;
struct TYPE_2__ {struct snd_motu_protocol* protocol; } ;


 unsigned int* VAR_0 ;
 int FUNC_0 (struct snd_info_buffer*,char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct snd_motu*,unsigned int*) ;
 scalar_t__ FUNC_2 (struct snd_motu*,int*) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_1,
       struct snd_info_buffer *VAR_2)
{

 struct snd_motu *VAR_3 = VAR_1->private_data;
 const struct snd_motu_protocol *const VAR_4 = VAR_3->spec->protocol;
 unsigned int VAR_5;
 enum snd_motu_clock_source VAR_6;

 if (VAR_4->get_clock_rate(VAR_3, &VAR_5) < 0)
  return;
 if (VAR_4->get_clock_source(VAR_3, &VAR_6) < 0)
  return;

 FUNC_0(VAR_2, "Rate:\t%d\n", VAR_5);
 FUNC_0(VAR_2, "Source:\t%s\n", VAR_0[VAR_6]);
}
