
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cChannels; int cSamples; int * rglForceData; int dwSamplePeriod; } ;
typedef TYPE_1__* LPCDICUSTOMFORCE ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(LPCDICUSTOMFORCE VAR_1)
{
    unsigned int VAR_2;
    FUNC_0("Custom force uses %d channels, sample period %d.  Has %d samples at %p.\n",
          VAR_1->cChannels, VAR_1->dwSamplePeriod, VAR_1->cSamples, VAR_1->rglForceData);
    if (VAR_1->cSamples % VAR_1->cChannels != 0)
        FUNC_2("Custom force has a non-integral samples-per-channel count!\n");
    if (FUNC_1(VAR_0)) {
        FUNC_0("Custom force data (time aligned, axes in order):\n");
        for (VAR_2 = 1; VAR_2 <= VAR_1->cSamples; ++VAR_2) {
            FUNC_0("%d ", VAR_1->rglForceData[VAR_2]);
            if (VAR_2 % VAR_1->cChannels == 0)
                FUNC_0("\n");
        }
    }
}
