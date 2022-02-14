
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct encoder_packet {scalar_t__ size; int timebase_num; int timebase_den; int type; void* data; void* dts; void* pts; } ;
struct encoder_frame {void** data; } ;
struct TYPE_10__ {int frameLength; void* encoderDelay; void* nDelay; } ;
struct TYPE_11__ {int frame_size_bytes; int channels; int packet_buffer_size; void* total_samples; int sample_rate; void* packet_buffer; TYPE_1__ info; int fdkhandle; } ;
typedef TYPE_2__ libfdk_encoder_t ;
typedef void* int64_t ;
struct TYPE_14__ {int numBufs; void** bufs; int* bufferIdentifiers; int* bufSizes; int* bufElSizes; int member_0; } ;
struct TYPE_13__ {int numInSamples; int member_0; } ;
struct TYPE_12__ {scalar_t__ numOutBytes; int member_0; } ;
typedef TYPE_3__ AACENC_OutArgs ;
typedef TYPE_4__ AACENC_InArgs ;
typedef int AACENC_ERROR ;
typedef TYPE_5__ AACENC_BufDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_5__*,TYPE_5__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(void *VAR_5, struct encoder_frame *VAR_6,
     struct encoder_packet *VAR_7, bool *VAR_8)
{
 libfdk_encoder_t *VAR_9 = VAR_5;

 AACENC_BufDesc VAR_10 = {0};
 AACENC_BufDesc VAR_11 = {0};
 AACENC_InArgs VAR_12 = {0};
 AACENC_OutArgs VAR_13 = {0};
 int VAR_14 = VAR_1;
 int VAR_15, VAR_16;
 int VAR_17 = VAR_4;
 int VAR_18, VAR_19;
 void *VAR_20;
 void *VAR_21;
 AACENC_ERROR VAR_22;
 int64_t VAR_23;

 VAR_20 = VAR_6->data[0];
 VAR_15 = VAR_9->frame_size_bytes;
 VAR_16 = 2;

 VAR_12.numInSamples = VAR_9->info.frameLength * VAR_9->channels;
 VAR_10.numBufs = 1;
 VAR_10.bufs = &VAR_20;
 VAR_10.bufferIdentifiers = &VAR_14;
 VAR_10.bufSizes = &VAR_15;
 VAR_10.bufElSizes = &VAR_16;

 VAR_21 = VAR_9->packet_buffer;
 VAR_18 = VAR_9->packet_buffer_size;
 VAR_19 = 1;

 VAR_11.numBufs = 1;
 VAR_11.bufs = &VAR_21;
 VAR_11.bufferIdentifiers = &VAR_17;
 VAR_11.bufSizes = &VAR_18;
 VAR_11.bufElSizes = &VAR_19;

 if ((VAR_22 = FUNC_0(VAR_9->fdkhandle, &VAR_10, &VAR_11, &VAR_12,
    &VAR_13)) != VAR_0) {
  FUNC_1(VAR_2, "Failed to encode frame: %s",
       FUNC_2(VAR_22));
  return 0;
 }

 VAR_9->total_samples += VAR_9->info.frameLength;

 if (VAR_13.numOutBytes == 0) {
  *VAR_8 = 0;
  return 1;
 }

 *VAR_8 = 1;



 VAR_23 = VAR_9->info.encoderDelay;

 VAR_7->pts = VAR_9->total_samples - VAR_23;
 VAR_7->dts = VAR_9->total_samples - VAR_23;
 VAR_7->data = VAR_9->packet_buffer;
 VAR_7->size = VAR_13.numOutBytes;
 VAR_7->type = VAR_3;
 VAR_7->timebase_num = 1;
 VAR_7->timebase_den = VAR_9->sample_rate;

 return 1;
}
