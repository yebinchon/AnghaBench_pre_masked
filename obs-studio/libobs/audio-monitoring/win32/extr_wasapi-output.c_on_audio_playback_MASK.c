
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct audio_monitor {int channels; int playback_mutex; scalar_t__ source_has_video; TYPE_7__* client; int resampler; TYPE_4__* render; } ;
struct audio_data {scalar_t__ timestamp; scalar_t__ frames; scalar_t__ data; } ;
struct TYPE_11__ {float user_volume; scalar_t__ async_decoupled; scalar_t__ async_unbuffered; int activate_refs; } ;
typedef TYPE_3__ obs_source_t ;
typedef int UINT32 ;
struct TYPE_13__ {TYPE_1__* lpVtbl; } ;
struct TYPE_12__ {TYPE_2__* lpVtbl; } ;
struct TYPE_10__ {int (* ReleaseBuffer ) (TYPE_4__*,int,int ) ;int (* GetBuffer ) (TYPE_4__*,int,int **) ;} ;
struct TYPE_9__ {int (* GetCurrentPadding ) (TYPE_7__*,int *) ;} ;
typedef TYPE_4__ IAudioRenderClient ;
typedef int HRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int **,int*,scalar_t__*,int const* const*,int) ;
 int FUNC_2 (float,float,int ) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct audio_monitor*,float**,int*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_7__*,int *) ;
 int FUNC_9 (TYPE_4__*,int,int **) ;
 int FUNC_10 (TYPE_4__*,int,int ) ;

__attribute__((used)) static void FUNC_11(void *VAR_3, obs_source_t *VAR_4,
         const struct audio_data *VAR_5, bool VAR_6)
{
 struct audio_monitor *VAR_7 = VAR_3;
 IAudioRenderClient *VAR_8 = VAR_7->render;
 uint8_t *VAR_9[VAR_2];
 float VAR_10 = VAR_4->user_volume;
 uint32_t VAR_11;
 uint64_t VAR_12;
 bool VAR_13;
 BYTE *VAR_14;

 if (FUNC_6(&VAR_7->playback_mutex) != 0) {
  return;
 }
 if (FUNC_4(&VAR_4->activate_refs) == 0) {
  goto unlock;
 }

 VAR_13 = FUNC_1(
  VAR_7->resampler, VAR_9, &VAR_11, &VAR_12,
  (const uint8_t *const *)VAR_5->data,
  (uint32_t)VAR_5->frames);
 if (!VAR_13) {
  goto unlock;
 }

 UINT32 VAR_15 = 0;
 VAR_7->client->lpVtbl->GetCurrentPadding(VAR_7->client, &VAR_15);

 bool VAR_16 = VAR_4->async_unbuffered &&
         VAR_4->async_decoupled;

 if (VAR_7->source_has_video && !VAR_16) {
  uint64_t VAR_17 = VAR_5->timestamp - VAR_12;

  if (!FUNC_5(VAR_7, (float **)(&VAR_9[0]),
      &VAR_11, VAR_17, VAR_15)) {
   goto unlock;
  }
 }

 HRESULT VAR_18 =
  VAR_8->lpVtbl->GetBuffer(VAR_8, VAR_11, &VAR_14);
 if (FUNC_0(VAR_18)) {
  goto unlock;
 }

 if (!VAR_6) {

  if (!FUNC_2(VAR_10, 1.0f, VAR_1)) {
   register float *VAR_19 = (float *)VAR_9[0];
   register float *VAR_20 =
    VAR_19 + VAR_11 * VAR_7->channels;

   while (VAR_19 < VAR_20)
    *(VAR_19++) *= VAR_10;
  }
  FUNC_3(VAR_14, VAR_9[0],
         VAR_11 * VAR_7->channels * sizeof(float));
 }

 VAR_8->lpVtbl->ReleaseBuffer(VAR_8, VAR_11,
          VAR_6 ? VAR_0 : 0);

unlock:
 FUNC_7(&VAR_7->playback_mutex);
}
