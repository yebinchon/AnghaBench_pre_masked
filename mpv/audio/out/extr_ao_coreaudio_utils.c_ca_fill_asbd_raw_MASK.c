
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mSampleRate; int mChannelsPerFrame; int mBitsPerChannel; int mFramesPerPacket; int mBytesPerPacket; int mBytesPerFrame; int mFormatFlags; int mFormatID; } ;
typedef TYPE_1__ AudioStreamBasicDescription ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(AudioStreamBasicDescription *VAR_9, int VAR_10,
                             int VAR_11, int VAR_12)
{
    VAR_9->mSampleRate = VAR_11;

    VAR_9->mFormatID = FUNC_2(VAR_10) ?
                              VAR_2 :
                              VAR_8;
    VAR_9->mChannelsPerFrame = VAR_12;
    VAR_9->mBitsPerChannel = FUNC_4(VAR_10) * 8;
    VAR_9->mFormatFlags = VAR_6;

    int VAR_13 = VAR_12;
    if (FUNC_1(VAR_10)) {
        VAR_9->mFormatFlags |= VAR_5;
        VAR_13 = 1;
    }

    if (FUNC_0(VAR_10)) {
        VAR_9->mFormatFlags |= VAR_4;
    } else if (!FUNC_3(VAR_10)) {
        VAR_9->mFormatFlags |= VAR_7;
    }

    if (VAR_1 == VAR_0)
        VAR_9->mFormatFlags |= VAR_3;

    VAR_9->mFramesPerPacket = 1;
    VAR_9->mBytesPerPacket = VAR_9->mBytesPerFrame =
        VAR_9->mFramesPerPacket * VAR_13 *
        (VAR_9->mBitsPerChannel / 8);
}
