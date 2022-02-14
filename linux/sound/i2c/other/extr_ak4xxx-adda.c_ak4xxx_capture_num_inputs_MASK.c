
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_akm4xxx {TYPE_1__* adc_info; } ;
struct TYPE_2__ {char** input_names; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_akm4xxx *VAR_1, int VAR_2)
{
 int VAR_3;
 const char **VAR_4;

 VAR_4 = VAR_1->adc_info[VAR_2].input_names;
 VAR_3 = 0;
 while (VAR_3 < VAR_0 && VAR_4[VAR_3])
  ++VAR_3;
 return VAR_3;
}
