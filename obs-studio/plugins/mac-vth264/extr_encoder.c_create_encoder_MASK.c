
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_h264_encoder {int hw_enc; float keyint; float fps_den; int session; int colorspace; int rc_max_bitrate_window; int rc_max_bitrate; int limit_bitrate; int bitrate; int profile; scalar_t__ bframes; scalar_t__ fps_num; int queue; int height; int width; int vt_encoder_id; } ;
typedef int VTCompressionSessionRef ;
typedef scalar_t__ OSStatus ;
typedef int * CFDictionaryRef ;
typedef int * CFBooleanRef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *,int *,int *,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int **) ;
 int FUNC_6 (int ,char*) ;
 float FUNC_7 (float) ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (struct vt_h264_encoder*) ;
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
 int FUNC_10 (int ,struct vt_h264_encoder*,char*,scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ,float) ;

__attribute__((used)) static bool FUNC_16(struct vt_h264_encoder *VAR_15)
{
 OSStatus VAR_16;

 VTCompressionSessionRef VAR_17;

 CFDictionaryRef VAR_18 = FUNC_8(VAR_15->vt_encoder_id);
 CFDictionaryRef VAR_19 = FUNC_9(VAR_15);

 FUNC_2(FUNC_3(
  VAR_2, VAR_15->width, VAR_15->height,
  VAR_5, VAR_18, VAR_19, ((void*)0),
  &VAR_14, VAR_15->queue, &VAR_17));

 FUNC_1(VAR_18);
 FUNC_1(VAR_19);

 CFBooleanRef VAR_20 = ((void*)0);
 VAR_16 = FUNC_5(
  VAR_17,
  VAR_12,
  ((void*)0), &VAR_20);

 if (VAR_16 == VAR_13 && (VAR_15->hw_enc = FUNC_0(VAR_20)))
  FUNC_6(VAR_0, "session created with hardware encoding");
 else
  VAR_15->hw_enc = 0;

 if (VAR_20 != ((void*)0))
  FUNC_1(VAR_20);

 FUNC_2(FUNC_15(
  VAR_17, VAR_9,
  VAR_15->keyint));
 FUNC_2(FUNC_15(
  VAR_17, VAR_8,
  VAR_15->keyint * ((float)VAR_15->fps_num / VAR_15->fps_den)));
 FUNC_2(FUNC_15(
  VAR_17, VAR_7,
  FUNC_7((float)VAR_15->fps_num / VAR_15->fps_den)));
 FUNC_2(FUNC_14(
  VAR_17, VAR_6,
  VAR_15->bframes ? VAR_4 : VAR_3));


 VAR_16 = FUNC_14(VAR_17, VAR_11,
    VAR_4);
 if (VAR_16 != VAR_13)
  FUNC_10(VAR_1, VAR_15,
        "setting "
        "kVTCompressionPropertyKey_RealTime, "
        "frame delay might be increased",
        VAR_16);

 FUNC_2(FUNC_14(VAR_17, VAR_10,
          FUNC_11(VAR_15->profile)));

 FUNC_2(FUNC_12(VAR_17, VAR_15->bitrate, VAR_15->limit_bitrate,
      VAR_15->rc_max_bitrate,
      VAR_15->rc_max_bitrate_window));

 FUNC_2(FUNC_13(VAR_17, VAR_15->colorspace));

 FUNC_2(FUNC_4(VAR_17));

 VAR_15->session = VAR_17;

 return 1;

fail:
 if (VAR_18 != ((void*)0))
  FUNC_1(VAR_18);
 if (VAR_19 != ((void*)0))
  FUNC_1(VAR_19);

 return 0;
}
