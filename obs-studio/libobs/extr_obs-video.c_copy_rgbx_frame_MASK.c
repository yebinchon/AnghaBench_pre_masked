
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct video_output_info {int height; int width; } ;
struct video_frame {int* linesize; int ** data; } ;
struct video_data {int* linesize; int ** data; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct video_frame *VAR_0,
       const struct video_data *VAR_1,
       const struct video_output_info *VAR_2)
{
 uint8_t *VAR_3 = VAR_1->data[0];
 uint8_t *VAR_4 = VAR_0->data[0];


 if (VAR_1->linesize[0] == VAR_0->linesize[0]) {
  FUNC_0(VAR_4, VAR_3, VAR_1->linesize[0] * VAR_2->height);
 } else {
  for (size_t VAR_5 = 0; VAR_5 < VAR_2->height; VAR_5++) {
   FUNC_0(VAR_4, VAR_3, VAR_2->width * 4);
   VAR_3 += VAR_1->linesize[0];
   VAR_4 += VAR_0->linesize[0];
  }
 }
}
