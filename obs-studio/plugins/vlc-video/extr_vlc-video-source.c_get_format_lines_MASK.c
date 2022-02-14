
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum video_format { ____Placeholder_video_format } video_format ;
__attribute__((used)) static inline unsigned FUNC_0(enum video_format VAR_0,
     unsigned VAR_1, size_t VAR_2)
{
 switch (VAR_0) {
 case 136:
 case 133:
  return (VAR_2 == 0) ? VAR_1 : VAR_1 / 2;
 case 128:
 case 129:
 case 131:
 case 135:
 case 132:
 case 138:
 case 137:
 case 130:
  return VAR_1;
 case 134:
 default:
  break;
 }

 return 0;
}
