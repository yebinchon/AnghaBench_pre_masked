
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_video_info {int output_width; int output_height; int base_width; int base_height; int scale_type; int output_format; int fps_den; int fps_num; int range; int colorspace; } ;
struct obs_core_video {int graphics; scalar_t__ video; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct obs_video_info*) ;
 int FUNC_8 (struct obs_video_info*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int,int) ;
 int FUNC_11 () ;

int FUNC_12(struct obs_video_info *VAR_6)
{
 if (!VAR_5)
  return VAR_2;


 if (VAR_5->video.video && FUNC_9())
  return VAR_1;

 if (!FUNC_10(VAR_6->output_width, VAR_6->output_height) ||
     !FUNC_10(VAR_6->base_width, VAR_6->base_height))
  return VAR_3;

 struct obs_core_video *VAR_7 = &VAR_5->video;

 FUNC_11();
 FUNC_6();


 VAR_6->output_width &= 0xFFFFFFFC;
 VAR_6->output_height &= 0xFFFFFFFE;

 if (!VAR_7->graphics) {
  int VAR_8 = FUNC_7(VAR_6);
  if (VAR_8 != VAR_4) {
   FUNC_5();
   return VAR_8;
  }
 }

 const char *VAR_9 = "";
 switch (VAR_6->scale_type) {
 case 130:
  VAR_9 = "Disabled";
  break;
 case 128:
  VAR_9 = "Point";
  break;
 case 132:
  VAR_9 = "Bicubic";
  break;
 case 131:
  VAR_9 = "Bilinear";
  break;
 case 129:
  VAR_9 = "Lanczos";
  break;
 case 133:
  VAR_9 = "Area";
  break;
 }

 bool VAR_10 = FUNC_1(VAR_6->output_format);
 const char *VAR_11 = FUNC_2(VAR_6->colorspace);
 const char *VAR_12 =
  FUNC_4(VAR_6->output_format, VAR_6->range);

 FUNC_0(VAR_0, "---------------------------------");
 FUNC_0(VAR_0,
      "video settings reset:\n"
      "\tbase resolution:   %dx%d\n"
      "\toutput resolution: %dx%d\n"
      "\tdownscale filter:  %s\n"
      "\tfps:               %d/%d\n"
      "\tformat:            %s\n"
      "\tYUV mode:          %s%s%s",
      VAR_6->base_width, VAR_6->base_height, VAR_6->output_width,
      VAR_6->output_height, VAR_9, VAR_6->fps_num, VAR_6->fps_den,
      FUNC_3(VAR_6->output_format),
      VAR_10 ? VAR_11 : "None", VAR_10 ? "/" : "", VAR_10 ? VAR_12 : "");

 return FUNC_8(VAR_6);
}
