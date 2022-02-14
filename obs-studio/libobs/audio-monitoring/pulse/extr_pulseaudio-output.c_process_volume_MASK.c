
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct audio_monitor {int bytes_per_channel; int channels; } ;


 int FUNC_0 (int * const,int ,int ,float) ;
 int FUNC_1 (int * const,int ,int ,float) ;
 int FUNC_2 (int * const,int ,int ,float) ;

void FUNC_3(const struct audio_monitor *VAR_0, float VAR_1,
      uint8_t *const *VAR_2, uint32_t VAR_3)
{
 switch (VAR_0->bytes_per_channel) {
 case 1:
  FUNC_0(VAR_2[0], VAR_3,
        VAR_0->channels, VAR_1);
  break;
 case 2:
  FUNC_2(VAR_2[0], VAR_3,
         VAR_0->channels, VAR_1);
  break;
 default:
  FUNC_1(VAR_2[0], VAR_3,
         VAR_0->channels, VAR_1);
  break;
 }
}
