
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bits; int rate; int byte_format; int channels; } ;
typedef TYPE_1__ ao_sample_format ;
struct TYPE_7__ {int wBitsPerSample; int nSamplesPerSec; int nChannels; } ;
typedef TYPE_2__ WAVEFORMATEX ;
struct TYPE_8__ {int channels; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,TYPE_1__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;

BOOL
FUNC_2(WAVEFORMATEX * VAR_9)
{
 ao_sample_format VAR_10;

 VAR_10.bits = VAR_9->wBitsPerSample;
 VAR_10.channels = VAR_9->nChannels;
 VAR_2->channels = VAR_9->nChannels;
 VAR_10.rate = 44100;
 VAR_6 = VAR_9->nSamplesPerSec;
 VAR_10.byte_format = VAR_0;

 VAR_7 = VAR_9->wBitsPerSample / 8;

 if (VAR_8 != ((void*)0))
  FUNC_0(VAR_8);

 VAR_8 = FUNC_1(VAR_4, &VAR_10, ((void*)0));
 if (VAR_8 == ((void*)0))
 {
  return VAR_1;
 }

 VAR_5 = VAR_3;

 return VAR_3;
}
