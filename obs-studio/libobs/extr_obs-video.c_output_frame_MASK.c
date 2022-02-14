
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vframe_info ;
struct video_data {int timestamp; } ;
struct obs_vframe_info {int count; int timestamp; } ;
struct obs_core_video {int cur_texture; int vframe_info_buffer; int graphics; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,struct obs_vframe_info*,int) ;
 int FUNC_3 (struct obs_core_video*,int,struct video_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct video_data*,int ,int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct obs_core_video*,struct video_data*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct obs_core_video*,int,int const,int) ;

__attribute__((used)) static inline void FUNC_12(bool VAR_8, const bool VAR_9)
{
 struct obs_core_video *VAR_10 = &VAR_2->video;
 int VAR_11 = VAR_10->cur_texture;
 int VAR_12 = VAR_11 == 0 ? VAR_1 - 1
         : VAR_11 - 1;
 struct video_data VAR_13;
 bool VAR_14 = 0;

 FUNC_7(&VAR_13, 0, sizeof(struct video_data));

 FUNC_10(VAR_4);
 FUNC_4(VAR_10->graphics);

 FUNC_10(VAR_7);
 FUNC_0(VAR_0,
         VAR_7);
 FUNC_11(VAR_10, VAR_8, VAR_9, VAR_11);
 FUNC_1();
 FUNC_9(VAR_7);

 if (VAR_8) {
  FUNC_10(VAR_3);
  VAR_14 = FUNC_3(VAR_10, VAR_12, &VAR_13);
  FUNC_9(VAR_3);
 }

 FUNC_10(VAR_5);
 FUNC_5();
 FUNC_9(VAR_5);

 FUNC_6();
 FUNC_9(VAR_4);

 if (VAR_8 && VAR_14) {
  struct obs_vframe_info VAR_15;
  FUNC_2(&VAR_10->vframe_info_buffer, &VAR_15,
        sizeof(VAR_15));

  VAR_13.timestamp = VAR_15.timestamp;
  FUNC_10(VAR_6);
  FUNC_8(VAR_10, &VAR_13, VAR_15.count);
  FUNC_9(VAR_6);
 }

 if (++VAR_10->cur_texture == VAR_1)
  VAR_10->cur_texture = 0;
}
