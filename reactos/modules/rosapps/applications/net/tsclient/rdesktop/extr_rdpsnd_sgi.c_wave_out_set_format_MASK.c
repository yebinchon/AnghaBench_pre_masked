
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int wBitsPerSample; int nChannels; int nSamplesPerSec; } ;
typedef TYPE_2__ WAVEFORMATEX ;
struct TYPE_6__ {long long ll; } ;
struct TYPE_8__ {scalar_t__ sizeOut; TYPE_1__ value; int param; } ;
typedef int BOOL ;
typedef TYPE_3__ ALpv ;
typedef scalar_t__ ALport ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,TYPE_3__*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 () ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

BOOL
FUNC_13(WAVEFORMATEX * VAR_15)
{
 int VAR_16;
 int VAR_17, VAR_18;
 ALpv VAR_19;





 VAR_9 = VAR_4;
 if (VAR_15->wBitsPerSample == 8)
  VAR_14 = VAR_3;
 else if (VAR_15->wBitsPerSample == 16)
 {
  VAR_14 = VAR_2;




  VAR_9 = 0;

 }







 VAR_16 = VAR_15->nChannels;
 VAR_8 = VAR_15->nSamplesPerSec;

 FUNC_9(VAR_6, VAR_1);
 FUNC_10(VAR_6, VAR_14);
 if (VAR_16 != FUNC_1(VAR_6))
 {
  FUNC_0(VAR_11);
  FUNC_7(VAR_6, VAR_16);
  VAR_11 = FUNC_6("rdpsnd", "w", VAR_6);

  if (VAR_11 == (ALport) 0)
  {
   FUNC_11(VAR_13, "wave_out_set_format: alOpenPort failed: %s\n",
    FUNC_2(FUNC_12()));
   return VAR_4;
  }

 }

 VAR_12 = FUNC_4(VAR_11);
 VAR_10 = FUNC_3(VAR_11);
 VAR_18 = FUNC_1(VAR_6);
 VAR_17 = FUNC_5(VAR_6);

 if (VAR_17 == 0 || VAR_18 == 0)
 {
  FUNC_11(VAR_13, "wave_out_set_format: bad frameSize or channelCount\n");
  return VAR_4;
 }
 VAR_7 = VAR_17 * VAR_18;

 VAR_19.param = VAR_0;
 VAR_19.value.ll = (long long) VAR_8 << 32;

 if (FUNC_8(VAR_12, &VAR_19, 1) < 0)
 {
  FUNC_11(VAR_13, "wave_set_format: alSetParams failed: %s\n",
   FUNC_2(FUNC_12()));
  return VAR_4;
 }
 if (VAR_19.sizeOut < 0)
 {
  FUNC_11(VAR_13, "wave_set_format: invalid rate %d\n", VAR_8);
  return VAR_4;
 }




 return VAR_5;
}
