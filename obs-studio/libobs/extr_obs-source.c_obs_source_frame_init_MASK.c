
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct video_frame {int * linesize; int * data; } ;
struct obs_source_frame {int format; int * linesize; int * data; void* height; void* width; } ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 size_t VAR_0 ;
 int FUNC_0 (struct obs_source_frame*,char*) ;
 int FUNC_1 (struct video_frame*,int,void*,void*) ;

void FUNC_2(struct obs_source_frame *VAR_1,
      enum video_format VAR_2, uint32_t VAR_3,
      uint32_t VAR_4)
{
 struct video_frame VAR_5;

 if (!FUNC_0(VAR_1, "obs_source_frame_init"))
  return;

 FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4);
 VAR_1->format = VAR_2;
 VAR_1->width = VAR_3;
 VAR_1->height = VAR_4;

 for (size_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_1->data[VAR_6] = VAR_5.data[VAR_6];
  VAR_1->linesize[VAR_6] = VAR_5.linesize[VAR_6];
 }
}
