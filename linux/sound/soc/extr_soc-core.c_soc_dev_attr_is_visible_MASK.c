
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct snd_soc_pcm_runtime {scalar_t__ num_codecs; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_2__ {struct attribute attr; } ;


 TYPE_1__ VAR_0 ;
 struct snd_soc_pcm_runtime* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_1,
           struct attribute *VAR_2, int VAR_3)
{
 struct device *VAR_4 = FUNC_1(VAR_1);
 struct snd_soc_pcm_runtime *VAR_5 = FUNC_0(VAR_4);

 if (VAR_2 == &VAR_0.attr)
  return VAR_2->mode;
 return VAR_5->num_codecs ? VAR_2->mode : 0;
}
