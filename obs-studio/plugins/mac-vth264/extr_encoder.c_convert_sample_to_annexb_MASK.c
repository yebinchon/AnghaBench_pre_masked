
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_h264_encoder {int dummy; } ;
struct darray {int dummy; } ;
typedef scalar_t__ OSStatus ;
typedef int CMSampleBufferRef ;
typedef int CMFormatDescriptionRef ;
typedef int CMBlockBufferRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,size_t*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct vt_h264_encoder*,struct darray*,int ,int) ;
 int FUNC_5 (struct vt_h264_encoder*,int ,size_t,struct darray*,struct darray*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,struct vt_h264_encoder*,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool FUNC_7(struct vt_h264_encoder *VAR_5,
         struct darray *VAR_6,
         struct darray *VAR_7,
         CMSampleBufferRef VAR_8, bool VAR_9)
{
 OSStatus VAR_10;
 CMFormatDescriptionRef VAR_11 =
  FUNC_1(VAR_8);

 size_t VAR_12;
 int VAR_13;
 VAR_10 = FUNC_2(
  VAR_11, 0, ((void*)0), ((void*)0), &VAR_12, &VAR_13);


 if (VAR_10 == VAR_2 ||
     VAR_10 == VAR_3) {
  FUNC_3(VAR_1, "assuming 2 parameter sets "
         "and 4 byte NAL length header");
  VAR_12 = 2;
  VAR_13 = 4;

 } else if (VAR_10 != VAR_4) {
  FUNC_6(VAR_0, VAR_5,
        "getting parameter count from sample", VAR_10);
  return 0;
 }

 if (VAR_9 &&
     !FUNC_5(VAR_5, VAR_11, VAR_12, VAR_6, VAR_7))
  return 0;

 CMBlockBufferRef VAR_14 = FUNC_0(VAR_8);
 FUNC_4(VAR_5, VAR_6, VAR_14, VAR_13);

 return 1;
}
