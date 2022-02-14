
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int dwFlags; scalar_t__ GetDriverInfo; } ;
struct TYPE_6__ {int dwCallbackFlags; int ddMotionCompCallbacks; int ddNtPrivateDriverCaps; int ddMoreCaps; int ddNtCallbacks; int ddMiscellanous2Callbacks; int ddMiscellanousCallbacks; int ddColorControlCallbacks; int d3dNtHalCallbacks3; int ddKernelCallbacks; int ddKernelCaps; TYPE_1__ ddHalInfo; } ;
typedef TYPE_2__* PEDD_DIRECTDRAW_GLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int *,int,int ) ;

VOID FUNC_1(PEDD_DIRECTDRAW_GLOBAL VAR_19)
{
    if (VAR_19->ddHalInfo.GetDriverInfo && VAR_19->ddHalInfo.dwFlags & VAR_0)
    {
        FUNC_0(VAR_19, VAR_13, &VAR_19->ddKernelCaps, sizeof(VAR_19->ddKernelCaps), 0);
        FUNC_0(VAR_19, VAR_12, &VAR_19->ddKernelCallbacks, sizeof(VAR_19->ddKernelCallbacks), 0);

        if (FUNC_0(VAR_19, VAR_10, &VAR_19->d3dNtHalCallbacks3, sizeof(VAR_19->d3dNtHalCallbacks3), 0))
            VAR_19->dwCallbackFlags |= VAR_2;

        if (FUNC_0(VAR_19, VAR_9, &VAR_19->ddColorControlCallbacks, sizeof(VAR_19->ddColorControlCallbacks), 0))
            VAR_19->dwCallbackFlags |= VAR_1;

        if (FUNC_0(VAR_19, VAR_15, &VAR_19->ddMiscellanousCallbacks, sizeof(VAR_19->ddMiscellanousCallbacks), 0))
            VAR_19->dwCallbackFlags |= VAR_5;

        if (FUNC_0(VAR_19, VAR_14, &VAR_19->ddMiscellanous2Callbacks, sizeof(VAR_19->ddMiscellanous2Callbacks), 0))
            VAR_19->dwCallbackFlags |= VAR_4;

        if (FUNC_0(VAR_19, VAR_17, &VAR_19->ddNtCallbacks, sizeof(VAR_19->ddNtCallbacks), 0) )
            VAR_19->dwCallbackFlags |= VAR_7;

        if (FUNC_0(VAR_19, VAR_11, &VAR_19->ddMoreCaps, sizeof(VAR_19->ddMoreCaps), 0) )
            VAR_19->dwCallbackFlags |= VAR_3;

        if (FUNC_0(VAR_19, VAR_18, &VAR_19->ddNtPrivateDriverCaps, sizeof(VAR_19->ddNtPrivateDriverCaps), 0) )
            VAR_19->dwCallbackFlags |= VAR_8;

        if (FUNC_0(VAR_19, VAR_16, &VAR_19->ddMotionCompCallbacks, sizeof(VAR_19->ddMotionCompCallbacks), 0) )
            VAR_19->dwCallbackFlags |= VAR_6;
    }
}
