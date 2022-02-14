
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x264_picture_t ;
typedef int x264_nal_t ;
struct obs_x264 {int context; } ;
struct encoder_packet {int dummy; } ;
struct encoder_frame {int dummy; } ;


 int FUNC_0 (struct obs_x264*,int *,struct encoder_frame*) ;
 int FUNC_1 (struct obs_x264*,struct encoder_packet*,int *,int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int **,int*,int *,int *) ;

__attribute__((used)) static bool FUNC_4(void *VAR_0, struct encoder_frame *VAR_1,
       struct encoder_packet *VAR_2,
       bool *VAR_3)
{
 struct obs_x264 *VAR_4 = VAR_0;
 x264_nal_t *VAR_5;
 int VAR_6;
 int VAR_7;
 x264_picture_t VAR_8, VAR_9;

 if (!VAR_1 || !VAR_2 || !VAR_3)
  return 0;

 if (VAR_1)
  FUNC_0(VAR_4, &VAR_8, VAR_1);

 VAR_7 = FUNC_3(VAR_4->context, &VAR_5, &VAR_6,
      (VAR_1 ? &VAR_8 : ((void*)0)), &VAR_9);
 if (VAR_7 < 0) {
  FUNC_2("encode failed");
  return 0;
 }

 *VAR_3 = (VAR_6 != 0);
 FUNC_1(VAR_4, VAR_2, VAR_5, VAR_6, &VAR_9);

 return 1;
}
