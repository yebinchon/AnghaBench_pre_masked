
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wFormatTag; int nChannels; int wBitsPerSample; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

BOOL
FUNC_0(WAVEFORMATEX * VAR_3)
{
 if (VAR_3->wFormatTag != VAR_2)
  return VAR_0;
 if ((VAR_3->nChannels != 1) && (VAR_3->nChannels != 2))
  return VAR_0;
 if ((VAR_3->wBitsPerSample != 8) && (VAR_3->wBitsPerSample != 16))
  return VAR_0;

 return VAR_1;
}
