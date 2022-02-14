
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {scalar_t__ donetuples; scalar_t__ tsm_state; } ;
struct TYPE_4__ {scalar_t__ doneblocks; int nblocks; int firstblock; int lb; scalar_t__ ntuples; int step; int seed; } ;
typedef TYPE_1__ SystemRowsSamplerData ;
typedef int SamplerRandomState ;
typedef TYPE_2__ SampleScanState ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static BlockNumber
FUNC_3(SampleScanState *VAR_1, BlockNumber VAR_2)
{
 SystemRowsSamplerData *VAR_3 = (SystemRowsSamplerData *) VAR_1->tsm_state;


 if (VAR_3->doneblocks == 0)
 {

  if (VAR_3->step == 0)
  {

   SamplerRandomState VAR_4;


   if (VAR_2 == 0)
    return VAR_0;


   FUNC_2(VAR_3->seed, VAR_4);


   VAR_3->nblocks = VAR_2;



   VAR_3->firstblock = FUNC_1(VAR_4) *
    VAR_3->nblocks;


   VAR_3->step = FUNC_0(VAR_3->nblocks, VAR_4);
  }


  VAR_3->lb = VAR_3->firstblock;
 }


 if (++VAR_3->doneblocks > VAR_3->nblocks ||
  VAR_1->donetuples >= VAR_3->ntuples)
  return VAR_0;







 do
 {

  VAR_3->lb = ((uint64) VAR_3->lb + VAR_3->step) % VAR_3->nblocks;
 } while (VAR_3->lb >= VAR_2);

 return VAR_3->lb;
}
