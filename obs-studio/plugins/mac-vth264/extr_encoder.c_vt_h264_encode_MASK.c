
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vt_h264_encoder {int queue; int session; int fps_num; int fps_den; } ;
struct encoder_packet {int dummy; } ;
struct encoder_frame {int pts; int * linesize; int ** data; } ;
typedef int OSStatus ;
typedef int * CVPixelBufferRef ;
typedef int CMTime ;
typedef int * CMSampleBufferRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 size_t FUNC_4 (int *,int) ;
 size_t FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct vt_h264_encoder*,int **) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (struct vt_h264_encoder*,int *,struct encoder_packet*,int ) ;

__attribute__((used)) static bool FUNC_14(void *VAR_2, struct encoder_frame *VAR_3,
      struct encoder_packet *VAR_4, bool *VAR_5)
{
 struct vt_h264_encoder *VAR_6 = VAR_2;

 OSStatus VAR_7;

 CMTime VAR_8 = FUNC_1(VAR_6->fps_den, VAR_6->fps_num);
 CMTime VAR_9 = FUNC_2(VAR_8, 2);
 CMTime VAR_10 = FUNC_2(VAR_8, VAR_3->pts);

 CVPixelBufferRef VAR_11 = ((void*)0);

 if (!FUNC_11(VAR_6, &VAR_11)) {
  FUNC_10(VAR_0, "Unable to create pixel buffer");
  goto fail;
 }

 FUNC_8(FUNC_6(VAR_11, 0));

 for (int VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if (VAR_3->data[VAR_12] == ((void*)0))
   break;
  uint8_t *VAR_13 = (uint8_t *)FUNC_3(
   VAR_11, VAR_12);
  uint8_t *VAR_14 = VAR_3->data[VAR_12];
  size_t VAR_15 =
   FUNC_4(VAR_11, VAR_12);
  size_t VAR_16 = FUNC_5(VAR_11, VAR_12);

  for (size_t VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   FUNC_12(VAR_13, VAR_14, VAR_3->linesize[VAR_12]);
   VAR_13 += VAR_15;
   VAR_14 += VAR_3->linesize[VAR_12];
  }
 }

 FUNC_8(FUNC_7(VAR_11, 0));

 FUNC_8(FUNC_9(VAR_6->session, VAR_11, VAR_10,
           VAR_8, ((void*)0), VAR_11, ((void*)0)));

 CMSampleBufferRef VAR_18 =
  (CMSampleBufferRef)FUNC_0(VAR_6->queue);


 if (VAR_18 == ((void*)0))
  return 1;

 *VAR_5 = 1;
 return FUNC_13(VAR_6, VAR_18, VAR_4, VAR_9);

fail:
 return 0;
}
