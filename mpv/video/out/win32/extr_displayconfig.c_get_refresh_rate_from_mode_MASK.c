
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ Denominator; scalar_t__ Numerator; } ;
struct TYPE_7__ {TYPE_4__ vSyncFreq; } ;
struct TYPE_6__ {TYPE_2__ targetVideoSignalInfo; } ;
struct TYPE_8__ {scalar_t__ infoType; TYPE_1__ targetMode; } ;
typedef TYPE_2__ DISPLAYCONFIG_VIDEO_SIGNAL_INFO ;
typedef TYPE_3__ DISPLAYCONFIG_MODE_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__) ;

__attribute__((used)) static double FUNC_1(DISPLAYCONFIG_MODE_INFO *VAR_1)
{
    if (VAR_1->infoType != VAR_0)
        return 0.0;

    DISPLAYCONFIG_VIDEO_SIGNAL_INFO *VAR_2 =
        &VAR_1->targetMode.targetVideoSignalInfo;
    if (!FUNC_0(VAR_2->vSyncFreq))
        return 0.0;

    return ((double)VAR_2->vSyncFreq.Numerator) /
           ((double)VAR_2->vSyncFreq.Denominator);
}
