
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int nFpsDen; } ;
struct TYPE_8__ {int* array; int num; } ;
struct obs_qsv {TYPE_1__ params; TYPE_4__ packet_data; } ;
struct encoder_packet {int* data; int size; int pts; int keyframe; int priority; int dts; int type; } ;
struct TYPE_7__ {scalar_t__ DataLength; size_t DataOffset; int TimeStamp; int FrameType; int DecodeTimeStamp; int * Data; } ;
typedef TYPE_2__ mfxBitstream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__,int *,scalar_t__) ;
 int FUNC_1 (TYPE_4__,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*,int ,int,int) ;
 scalar_t__ FUNC_3 (int*,int*) ;

__attribute__((used)) static void FUNC_4(struct obs_qsv *VAR_13, struct encoder_packet *VAR_14,
    mfxBitstream *VAR_15, uint32_t VAR_16,
    bool *VAR_17)
{
 uint8_t *VAR_18, *VAR_19;
 int VAR_20;

 if (VAR_15 == ((void*)0) || VAR_15->DataLength == 0) {
  *VAR_17 = 0;
  return;
 }

 FUNC_1(VAR_13->packet_data, 0);
 FUNC_0(VAR_13->packet_data, &VAR_15->Data[VAR_15->DataOffset],
      VAR_15->DataLength);

 VAR_14->data = VAR_13->packet_data.array;
 VAR_14->size = VAR_13->packet_data.num;
 VAR_14->type = VAR_4;
 VAR_14->pts = VAR_15->TimeStamp * VAR_16 / 90000;
 VAR_14->keyframe = (VAR_15->FrameType & VAR_1);

 uint16_t VAR_21 = VAR_15->FrameType;
 uint8_t VAR_22;

 if (VAR_21 & VAR_0)
  VAR_22 = VAR_6;
 else if ((VAR_21 & VAR_2) ||
   (VAR_21 & VAR_3))
  VAR_22 = VAR_5;
 else
  VAR_22 = 0;

 VAR_14->priority = VAR_22;



 VAR_18 = VAR_13->packet_data.array;
 VAR_19 = VAR_18 + VAR_13->packet_data.num;

 VAR_18 = (uint8_t *)FUNC_3(VAR_18, VAR_19);
 while (1) {
  while (VAR_18 < VAR_19 && !*(VAR_18++))
   ;

  if (VAR_18 == VAR_19)
   break;

  VAR_20 = VAR_18[0] & 0x1F;
  if (VAR_20 == VAR_8 || VAR_20 == VAR_7) {
   VAR_18[0] &= ~(3 << 5);
   VAR_18[0] |=
    VAR_22
    << 5;
  }

  VAR_18 = (uint8_t *)FUNC_3(VAR_18, VAR_19);
 }





 bool VAR_23 = VAR_15->FrameType & VAR_2;





 if (VAR_11 >= 0) {
  if (VAR_9) {
   VAR_14->dts = VAR_14->pts - 3 * VAR_13->params.nFpsDen;
  } else if (VAR_23) {
   VAR_14->dts = VAR_14->pts - 10 * VAR_13->params.nFpsDen;
   VAR_10 = VAR_14->dts;
  } else {
   VAR_14->dts = VAR_10 + VAR_13->params.nFpsDen;
   VAR_10 = VAR_14->dts;
  }
 } else {
  VAR_14->dts = VAR_15->DecodeTimeStamp * VAR_16 / 90000;
 }
 *VAR_17 = 1;
 VAR_15->DataLength = 0;

 VAR_9 = 0;
}
