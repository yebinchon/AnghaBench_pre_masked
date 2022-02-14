
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct adau1761_platform_data {int lineout_mode; } ;
typedef enum adau1761_output_mode { ____Placeholder_adau1761_output_mode } adau1761_output_mode ;
struct TYPE_2__ {struct adau1761_platform_data* platform_data; } ;


 int VAR_0 ;

__attribute__((used)) static enum adau1761_output_mode FUNC_0(
 struct snd_soc_component *VAR_1)
{
 struct adau1761_platform_data *VAR_2 = VAR_1->dev->platform_data;

 if (VAR_2)
  return VAR_2->lineout_mode;

 return VAR_0;
}
