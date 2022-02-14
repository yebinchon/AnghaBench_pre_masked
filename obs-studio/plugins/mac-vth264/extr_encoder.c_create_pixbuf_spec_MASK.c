
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_h264_encoder {int height; int width; int vt_pix_fmt; } ;
typedef int CFNumberRef ;
typedef int CFMutableDictionaryRef ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline CFMutableDictionaryRef
FUNC_4(struct vt_h264_encoder *VAR_7)
{
 CFMutableDictionaryRef VAR_8 = FUNC_1(
  VAR_0, 3, &VAR_2,
  &VAR_3);

 CFNumberRef VAR_9 =
  FUNC_2(((void*)0), VAR_1, &VAR_7->vt_pix_fmt);
 FUNC_0(VAR_8, VAR_5, VAR_9);
 FUNC_3(VAR_9);

 VAR_9 = FUNC_2(((void*)0), VAR_1, &VAR_7->width);
 FUNC_0(VAR_8, VAR_6, VAR_9);
 FUNC_3(VAR_9);

 VAR_9 = FUNC_2(((void*)0), VAR_1, &VAR_7->height);
 FUNC_0(VAR_8, VAR_4, VAR_9);
 FUNC_3(VAR_9);

 return VAR_8;
}
