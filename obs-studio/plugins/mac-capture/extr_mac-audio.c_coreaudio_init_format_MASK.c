
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct obs_audio_info {int speakers; } ;
struct coreaudio_data {int speakers; scalar_t__ sample_rate; int format; int unit; } ;
typedef int desc ;
typedef int UInt32 ;
struct TYPE_4__ {int mChannelsPerFrame; int mBytesPerFrame; int mBitsPerChannel; int mBytesPerPacket; int mFramesPerPacket; scalar_t__ mFormatID; scalar_t__ mSampleRate; scalar_t__ mFormatFlags; } ;
typedef int OSStatus ;
typedef TYPE_1__ AudioStreamBasicDescription ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct coreaudio_data*,char*,char*) ;
 int FUNC_2 (struct coreaudio_data*,char*,char*,...) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,TYPE_1__*,int*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct obs_audio_info*) ;
 int FUNC_8 (int ,int ,int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static bool FUNC_9(struct coreaudio_data *VAR_8)
{
 AudioStreamBasicDescription VAR_9;
 OSStatus VAR_10;
 UInt32 VAR_11 = sizeof(VAR_9);
 struct obs_audio_info VAR_12;
 int VAR_13;

 if (!FUNC_7(&VAR_12)) {
  FUNC_0(VAR_2, "No active audio");
  return 0;
 }
 VAR_13 = FUNC_5(VAR_12.speakers);

 VAR_10 = FUNC_6(VAR_8->unit, VAR_7,
       VAR_3, VAR_1, &VAR_9, &VAR_11);
 if (!FUNC_1(VAR_10, VAR_8, "coreaudio_init_format", "get input format"))
  return 0;




 if (VAR_9.mChannelsPerFrame > 8) {
  VAR_9.mChannelsPerFrame = VAR_13;
  VAR_9.mBytesPerFrame = VAR_13 * VAR_9.mBitsPerChannel / 8;
  VAR_9.mBytesPerPacket =
   VAR_9.mFramesPerPacket * VAR_9.mBytesPerFrame;
 }

 VAR_10 = FUNC_8(VAR_8->unit, VAR_7,
       VAR_4, VAR_1, &VAR_9, VAR_11);
 if (!FUNC_1(VAR_10, VAR_8, "coreaudio_init_format", "set output format"))
  return 0;

 if (VAR_9.mFormatID != VAR_6) {
  FUNC_2(VAR_8, "coreaudio_init_format", "format is not PCM");
  return 0;
 }

 VAR_8->format = FUNC_3(VAR_9.mFormatFlags, VAR_9.mBitsPerChannel);
 if (VAR_8->format == VAR_0) {
  FUNC_2(VAR_8, "coreaudio_init_format",
   "unknown format flags: "
   "%u, bits: %u",
   (unsigned int)VAR_9.mFormatFlags,
   (unsigned int)VAR_9.mBitsPerChannel);
  return 0;
 }

 VAR_8->sample_rate = (uint32_t)VAR_9.mSampleRate;
 VAR_8->speakers = FUNC_4(VAR_9.mChannelsPerFrame);

 if (VAR_8->speakers == VAR_5) {
  FUNC_2(VAR_8, "coreaudio_init_format",
   "unknown speaker layout: "
   "%u channels",
   (unsigned int)VAR_9.mChannelsPerFrame);
  return 0;
 }

 return 1;
}
