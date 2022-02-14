
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tsm_state; } ;
struct TYPE_4__ {scalar_t__ lt; } ;
typedef TYPE_1__ SystemSamplerData ;
typedef TYPE_2__ SampleScanState ;
typedef scalar_t__ OffsetNumber ;
typedef int BlockNumber ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static OffsetNumber
FUNC_0(SampleScanState *VAR_2,
        BlockNumber VAR_3,
        OffsetNumber VAR_4)
{
 SystemSamplerData *VAR_5 = (SystemSamplerData *) VAR_2->tsm_state;
 OffsetNumber VAR_6 = VAR_5->lt;


 if (VAR_6 == VAR_1)
  VAR_6 = VAR_0;
 else
  VAR_6++;


 if (VAR_6 > VAR_4)
  VAR_6 = VAR_1;

 VAR_5->lt = VAR_6;

 return VAR_6;
}
