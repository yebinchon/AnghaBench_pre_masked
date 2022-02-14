
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mFormatFlags; scalar_t__ mBitsPerChannel; scalar_t__ mBytesPerPacket; scalar_t__ mChannelsPerFrame; scalar_t__ mSampleRate; int mFormatID; } ;
typedef TYPE_1__ AudioStreamBasicDescription ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_2(const AudioStreamBasicDescription *VAR_4,
                    const AudioStreamBasicDescription *VAR_5)
{
    int VAR_6 = VAR_2 | VAR_1 |
                VAR_3 | VAR_0;
    bool VAR_7 = FUNC_0(VAR_4->mFormatID) &&
                 FUNC_0(VAR_5->mFormatID);

    return (VAR_4->mFormatFlags & VAR_6) == (VAR_5->mFormatFlags & VAR_6) &&
           VAR_4->mBitsPerChannel == VAR_5->mBitsPerChannel &&
           FUNC_1(VAR_4->mFormatID) ==
                FUNC_1(VAR_5->mFormatID) &&
           (VAR_7 || VAR_4->mBytesPerPacket == VAR_5->mBytesPerPacket) &&
           (VAR_7 || VAR_4->mChannelsPerFrame == VAR_5->mChannelsPerFrame) &&
           VAR_4->mSampleRate == VAR_5->mSampleRate;
}
