
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; unsigned int width; unsigned int height; int full_range; scalar_t__* linesize; scalar_t__* data; int color_range_max; int color_range_min; int color_matrix; } ;
struct vlc_source {TYPE_1__ frame; int media_player; } ;
typedef enum video_range_type { ____Placeholder_video_range_type } video_range_type ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int*) ;
 unsigned int FUNC_1 (int,unsigned int,size_t) ;
 int FUNC_2 (int ,int ,unsigned int*,unsigned int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,unsigned int,unsigned int) ;
 int FUNC_5 (int ,int,int ,int ,int ) ;

__attribute__((used)) static unsigned FUNC_6(void **VAR_3, char *VAR_4, unsigned *VAR_5,
      unsigned *VAR_6, unsigned *VAR_7,
      unsigned *VAR_8)
{
 struct vlc_source *VAR_9 = *VAR_3;
 enum video_format VAR_10;
 enum video_range_type VAR_11;
 bool VAR_12;
 unsigned VAR_13 = 0;
 unsigned VAR_14 = 0;
 size_t VAR_15 = 0;

 VAR_10 = FUNC_0(VAR_4, &VAR_12);
 FUNC_2(VAR_9->media_player, 0, &VAR_13, &VAR_14);

 if (VAR_13 && VAR_14) {
  *VAR_5 = VAR_13;
  *VAR_6 = VAR_14;
 }


 if (VAR_9->frame.format != VAR_10 || VAR_9->frame.width != *VAR_5 ||
     VAR_9->frame.height != *VAR_6) {
  FUNC_3(&VAR_9->frame);
  FUNC_4(&VAR_9->frame, VAR_10, *VAR_5, *VAR_6);

  VAR_9->frame.format = VAR_10;
  VAR_9->frame.full_range = VAR_12;
  VAR_11 = VAR_9->frame.full_range ? VAR_1
         : VAR_2;
  FUNC_5(VAR_0, VAR_11,
         VAR_9->frame.color_matrix,
         VAR_9->frame.color_range_min,
         VAR_9->frame.color_range_max);
 }

 while (VAR_9->frame.data[VAR_15]) {
  VAR_7[VAR_15] = (unsigned)VAR_9->frame.linesize[VAR_15];
  VAR_8[VAR_15] = FUNC_1(VAR_9->frame.format, *VAR_6, VAR_15);
  VAR_15++;
 }

 return 1;
}
