
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int service; int video; int video_encoder; } ;


 int FUNC_0 (struct obs_output const*,int) ;

__attribute__((used)) static bool FUNC_1(const struct obs_output *VAR_0,
       bool VAR_1, bool VAR_2, bool VAR_3,
       bool VAR_4)
{
 if (VAR_2) {
  if (VAR_1) {
   if (!VAR_0->video_encoder)
    return 0;
  } else {
   if (!VAR_0->video)
    return 0;
  }
 }

 if (VAR_3) {
  if (!FUNC_0(VAR_0, VAR_1)) {
   return 0;
  }
 }

 if (VAR_4 && !VAR_0->service)
  return 0;

 return 1;
}
