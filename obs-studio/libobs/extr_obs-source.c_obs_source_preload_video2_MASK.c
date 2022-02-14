
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame2 {int color_range_max; int color_range_min; int color_matrix; int flip; int format; int timestamp; int height; int width; int * linesize; int * data; int range; } ;
struct obs_source_frame {int full_range; int color_range_max; int color_range_min; int color_matrix; int flip; int format; int timestamp; int height; int width; int * linesize; int * data; } ;
typedef int obs_source_t ;
typedef enum video_range_type { ____Placeholder_video_range_type } video_range_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,struct obs_source_frame*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(obs_source_t *VAR_2,
          const struct obs_source_frame2 *VAR_3)
{
 if (!VAR_3) {
  FUNC_1(VAR_2, ((void*)0));
  return;
 }

 struct obs_source_frame VAR_4;
 enum video_range_type VAR_5 =
  FUNC_2(VAR_3->format, VAR_3->range);

 for (size_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4.data[VAR_6] = VAR_3->data[VAR_6];
  VAR_4.linesize[VAR_6] = VAR_3->linesize[VAR_6];
 }

 VAR_4.width = VAR_3->width;
 VAR_4.height = VAR_3->height;
 VAR_4.timestamp = VAR_3->timestamp;
 VAR_4.format = VAR_3->format;
 VAR_4.full_range = VAR_5 == VAR_1;
 VAR_4.flip = VAR_3->flip;

 FUNC_0(&VAR_4.color_matrix, &VAR_3->color_matrix,
        sizeof(VAR_3->color_matrix));
 FUNC_0(&VAR_4.color_range_min, &VAR_3->color_range_min,
        sizeof(VAR_3->color_range_min));
 FUNC_0(&VAR_4.color_range_max, &VAR_3->color_range_max,
        sizeof(VAR_3->color_range_max));

 FUNC_1(VAR_2, &VAR_4);
}
