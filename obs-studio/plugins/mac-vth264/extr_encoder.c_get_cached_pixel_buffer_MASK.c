
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_h264_encoder {int colorspace; int session; } ;
typedef int OSStatus ;
typedef int CVPixelBufferRef ;
typedef int CVPixelBufferPoolRef ;
typedef int CFStringRef ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;

bool FUNC_5(struct vt_h264_encoder *VAR_7, CVPixelBufferRef *VAR_8)
{
 OSStatus VAR_9;
 CVPixelBufferPoolRef VAR_10 =
  FUNC_3(VAR_7->session);
 if (!VAR_10)
  return VAR_6;

 CVPixelBufferRef VAR_11;
 FUNC_2(FUNC_1(((void*)0), VAR_10, &VAR_11));





 CFStringRef VAR_12 = FUNC_4(VAR_7->colorspace);

 FUNC_0(VAR_11, VAR_5, VAR_12,
         VAR_0);
 FUNC_0(VAR_11, VAR_1,
         VAR_2,
         VAR_0);
 FUNC_0(VAR_11, VAR_3,
         VAR_4,
         VAR_0);

 *VAR_8 = VAR_11;
 return 1;

fail:
 return 0;
}
