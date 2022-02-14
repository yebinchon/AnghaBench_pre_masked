
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int channels; int precision; scalar_t__ error; scalar_t__ eof; scalar_t__ samples; int sample_rate; int encoding; } ;
struct TYPE_9__ {TYPE_1__ play; } ;
typedef TYPE_2__ audio_info_t ;
struct TYPE_10__ {int wBitsPerSample; int nChannels; int nSamplesPerSec; } ;
typedef TYPE_3__ WAVEFORMATEX ;
struct TYPE_11__ {int dsp_; } ;
typedef void* BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_6__* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int ) ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (char*) ;

BOOL
FUNC_4(WAVEFORMATEX * VAR_10)
{
 audio_info_t VAR_11;

 FUNC_2(VAR_5->dsp_, VAR_0, 0);
 VAR_9 = VAR_4;
 FUNC_0(&VAR_11);


 if (VAR_10->wBitsPerSample == 8)
 {
  VAR_11.play.encoding = VAR_2;
 }
 else if (VAR_10->wBitsPerSample == 16)
 {
  VAR_11.play.encoding = VAR_1;




  VAR_9 = 0;

 }

 VAR_8 = VAR_10->wBitsPerSample / 8;

 if (VAR_10->nChannels == 1)
 {
  VAR_11.play.channels = 1;
 }
 else if (VAR_10->nChannels == 2)
 {
  VAR_11.play.channels = 2;
  VAR_8 *= 2;
 }

 VAR_11.play.sample_rate = VAR_10->nSamplesPerSec;
 VAR_11.play.precision = VAR_10->wBitsPerSample;
 VAR_11.play.samples = 0;
 VAR_11.play.eof = 0;
 VAR_11.play.error = 0;
 VAR_7 = VAR_6;

 if (FUNC_2(VAR_5->dsp_, VAR_3, &VAR_11) == -1)
 {
  FUNC_3("AUDIO_SETINFO");
  FUNC_1(VAR_5->dsp_);
  return VAR_4;
 }

 return VAR_6;
}
