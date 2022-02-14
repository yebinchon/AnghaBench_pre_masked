
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ int64 ;
struct TYPE_5__ {int use_pagemode; scalar_t__ tsm_state; } ;
struct TYPE_4__ {scalar_t__ doneblocks; int lt; scalar_t__ ntuples; int seed; } ;
typedef TYPE_1__ SystemRowsSamplerData ;
typedef TYPE_2__ SampleScanState ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(SampleScanState *VAR_3,
       Datum *VAR_4,
       int VAR_5,
       uint32 VAR_6)
{
 SystemRowsSamplerData *VAR_7 = (SystemRowsSamplerData *) VAR_3->tsm_state;
 int64 VAR_8 = FUNC_0(VAR_4[0]);

 if (VAR_8 < 0)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("sample size must not be negative")));

 VAR_7->seed = VAR_6;
 VAR_7->ntuples = VAR_8;
 VAR_7->lt = VAR_2;
 VAR_7->doneblocks = 0;







 VAR_3->use_pagemode = 1;
}
