
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int hashinput ;
struct TYPE_5__ {scalar_t__ tsm_state; } ;
struct TYPE_4__ {scalar_t__ nextblock; scalar_t__ seed; scalar_t__ cutoff; } ;
typedef TYPE_1__ SystemSamplerData ;
typedef TYPE_2__ SampleScanState ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned char const*,int) ;

__attribute__((used)) static BlockNumber
FUNC_2(SampleScanState *VAR_1, BlockNumber VAR_2)
{
 SystemSamplerData *VAR_3 = (SystemSamplerData *) VAR_1->tsm_state;
 BlockNumber VAR_4 = VAR_3->nextblock;
 uint32 VAR_5[2];
 VAR_5[1] = VAR_3->seed;





 for (; VAR_4 < VAR_2; VAR_4++)
 {
  uint32 VAR_6;

  VAR_5[0] = VAR_4;

  VAR_6 = FUNC_0(FUNC_1((const unsigned char *) VAR_5,
            (int) sizeof(VAR_5)));
  if (VAR_6 < VAR_3->cutoff)
   break;
 }

 if (VAR_4 < VAR_2)
 {

  VAR_3->nextblock = VAR_4 + 1;
  return VAR_4;
 }


 VAR_3->nextblock = 0;
 return VAR_0;
}
