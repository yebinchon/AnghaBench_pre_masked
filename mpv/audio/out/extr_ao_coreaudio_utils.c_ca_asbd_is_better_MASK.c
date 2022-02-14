
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mChannelsPerFrame; scalar_t__ mFormatID; scalar_t__ mBitsPerChannel; scalar_t__ mSampleRate; } ;
typedef TYPE_1__ AudioStreamBasicDescription ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

bool FUNC_1(AudioStreamBasicDescription *VAR_1,
                       AudioStreamBasicDescription *VAR_2,
                       AudioStreamBasicDescription *VAR_3)
{
    if (VAR_3->mChannelsPerFrame > VAR_0)
        return 0;
    if (VAR_2->mChannelsPerFrame > VAR_0)
        return 1;
    if (VAR_1->mFormatID != VAR_3->mFormatID)
        return 0;
    if (VAR_1->mFormatID != VAR_2->mFormatID)
        return 1;

    if (!FUNC_0(VAR_1->mBitsPerChannel, VAR_2->mBitsPerChannel,
                         VAR_3->mBitsPerChannel))
        return 0;

    if (!FUNC_0(VAR_1->mSampleRate, VAR_2->mSampleRate, VAR_3->mSampleRate))
        return 0;

    if (!FUNC_0(VAR_1->mChannelsPerFrame, VAR_2->mChannelsPerFrame,
                         VAR_3->mChannelsPerFrame))
        return 0;

    return 1;
}
