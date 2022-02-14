
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum video_format { ____Placeholder_video_format } video_format ;
 int FUNC_0 (int ) ;

__attribute__((used)) static const char *FUNC_1(enum video_format VAR_0,
            bool VAR_1)
{
 switch (VAR_0) {
 case 132:
  return "UYVY_Reverse";

 case 129:
  return "YUY2_Reverse";

 case 128:
  return "YVYU_Reverse";

 case 139:
  return "I420_Reverse";

 case 134:
  return "NV12_Reverse";

 case 136:
  return "I444_Reverse";

 case 131:
  return VAR_1 ? "Y800_Full" : "Y800_Limited";

 case 143:
  return VAR_1 ? "BGR3_Full" : "BGR3_Limited";

 case 138:
  return "I422_Reverse";

 case 140:
  return "I40A_Reverse";

 case 137:
  return "I42A_Reverse";

 case 130:
  return "YUVA_Reverse";

 case 144:
  return "AYUV_Reverse";

 case 142:
 case 141:
 case 133:
 case 135:
  if (VAR_1)
   FUNC_0(0 && "No conversion requested");
  else
   return "RGB_Limited";
  break;
 }
 return ((void*)0);
}
