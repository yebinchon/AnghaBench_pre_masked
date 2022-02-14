
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct audio_input {scalar_t__ resampler; } ;
struct audio_data {int timestamp; int frames; int ** data; } ;
typedef int output ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int **,int *,scalar_t__*,int const* const*,int ) ;
 int FUNC_1 (int **,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct audio_input *VAR_1,
      struct audio_data *VAR_2)
{
 bool VAR_3 = 1;

 if (VAR_1->resampler) {
  uint8_t *VAR_4[VAR_0];
  uint32_t VAR_5;
  uint64_t VAR_6;

  FUNC_1(VAR_4, 0, sizeof(VAR_4));

  VAR_3 = FUNC_0(
   VAR_1->resampler, VAR_4, &VAR_5, &VAR_6,
   (const uint8_t *const *)VAR_2->data, VAR_2->frames);

  for (size_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   VAR_2->data[VAR_7] = VAR_4[VAR_7];
  VAR_2->frames = VAR_5;
  VAR_2->timestamp -= VAR_6;
 }

 return VAR_3;
}
