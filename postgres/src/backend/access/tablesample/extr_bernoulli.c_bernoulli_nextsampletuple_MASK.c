
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int hashinput ;
struct TYPE_5__ {scalar_t__ lt; scalar_t__ seed; scalar_t__ cutoff; } ;
struct TYPE_4__ {scalar_t__ tsm_state; } ;
typedef TYPE_1__ SampleScanState ;
typedef scalar_t__ OffsetNumber ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_2__ BernoulliSamplerData ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned char const*,int) ;

__attribute__((used)) static OffsetNumber
FUNC_2(SampleScanState *VAR_2,
        BlockNumber VAR_3,
        OffsetNumber VAR_4)
{
 BernoulliSamplerData *VAR_5 = (BernoulliSamplerData *) VAR_2->tsm_state;
 OffsetNumber VAR_6 = VAR_5->lt;
 uint32 VAR_7[3];


 if (VAR_6 == VAR_1)
  VAR_6 = VAR_0;
 else
  VAR_6++;
 VAR_7[0] = VAR_3;
 VAR_7[2] = VAR_5->seed;





 for (; VAR_6 <= VAR_4; VAR_6++)
 {
  uint32 VAR_8;

  VAR_7[1] = VAR_6;

  VAR_8 = FUNC_0(FUNC_1((const unsigned char *) VAR_7,
            (int) sizeof(VAR_7)));
  if (VAR_8 < VAR_5->cutoff)
   break;
 }

 if (VAR_6 > VAR_4)
  VAR_6 = VAR_1;

 VAR_5->lt = VAR_6;

 return VAR_6;
}
