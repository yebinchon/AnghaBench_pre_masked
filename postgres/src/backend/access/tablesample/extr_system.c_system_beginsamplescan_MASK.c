
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int uint32 ;
struct TYPE_5__ {int use_bulkread; int use_pagemode; scalar_t__ tsm_state; } ;
struct TYPE_4__ {int lt; scalar_t__ nextblock; int seed; scalar_t__ cutoff; } ;
typedef TYPE_1__ SystemSamplerData ;
typedef TYPE_2__ SampleScanState ;
typedef int Datum ;


 double FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (double) ;
 double FUNC_5 (double) ;

__attribute__((used)) static void
FUNC_6(SampleScanState *VAR_4,
        Datum *VAR_5,
        int VAR_6,
        uint32 VAR_7)
{
 SystemSamplerData *VAR_8 = (SystemSamplerData *) VAR_4->tsm_state;
 double VAR_9 = FUNC_0(VAR_5[0]);
 double VAR_10;

 if (VAR_9 < 0 || VAR_9 > 100 || FUNC_4(VAR_9))
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("sample percentage must be between 0 and 100")));






 VAR_10 = FUNC_5(((double) VAR_3 + 1) * VAR_9 / 100);
 VAR_8->cutoff = (uint64) VAR_10;
 VAR_8->seed = VAR_7;
 VAR_8->nextblock = 0;
 VAR_8->lt = VAR_2;







 VAR_4->use_bulkread = (VAR_9 >= 1);
 VAR_4->use_pagemode = 1;
}
