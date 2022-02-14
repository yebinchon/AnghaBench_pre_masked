
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_scaler {int swscale; int src_height; } ;
typedef struct video_scaler video_scaler_t ;
struct video_scale_info {int height; int width; int range; int colorspace; int format; } ;
typedef enum video_scale_type { ____Placeholder_video_scale_type } video_scale_type ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 struct video_scaler* FUNC_1 (int) ;
 int* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int,int ,int ,int,int,int *,int *,int *) ;
 int FUNC_7 (int ,int const*,int,int const*,int,int ,int ,int ) ;
 int FUNC_8 (struct video_scaler*) ;

int FUNC_9(video_scaler_t **VAR_7,
   const struct video_scale_info *VAR_8,
   const struct video_scale_info *VAR_9,
   enum video_scale_type VAR_10)
{
 enum AVPixelFormat VAR_11 = FUNC_5(VAR_9->format);
 enum AVPixelFormat VAR_12 = FUNC_5(VAR_8->format);
 int VAR_13 = FUNC_4(VAR_10);
 const int *VAR_14 = FUNC_2(VAR_9->colorspace);
 const int *VAR_15 = FUNC_2(VAR_8->colorspace);
 int VAR_16 = FUNC_3(VAR_9->range);
 int VAR_17 = FUNC_3(VAR_8->range);
 struct video_scaler *VAR_18;
 int VAR_19;

 if (!VAR_7)
  return VAR_5;

 if (VAR_11 == VAR_0 || VAR_12 == VAR_0)
  return VAR_4;

 VAR_18 = FUNC_1(sizeof(struct video_scaler));
 VAR_18->src_height = VAR_9->height;

 VAR_18->swscale = FUNC_6(((void*)0), VAR_9->width, VAR_9->height,
            VAR_11, VAR_8->width,
            VAR_8->height, VAR_12,
            VAR_13, ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_18->swscale) {
  FUNC_0(VAR_3, "video_scaler_create: Could not create "
    "swscale");
  goto fail;
 }

 VAR_19 = FUNC_7(VAR_18->swscale, VAR_14, VAR_16,
           VAR_15, VAR_17, 0, VAR_1,
           VAR_1);
 if (VAR_19 < 0) {
  FUNC_0(VAR_2, "video_scaler_create: "
    "sws_setColorspaceDetails failed, ignoring");
 }

 *VAR_7 = VAR_18;
 return VAR_6;

fail:
 FUNC_8(VAR_18);
 return VAR_5;
}
