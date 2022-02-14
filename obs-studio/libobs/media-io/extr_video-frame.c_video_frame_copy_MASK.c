
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct video_frame {int* linesize; int * data; } ;
typedef enum video_format { ____Placeholder_video_format } video_format ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct video_frame *VAR_0, const struct video_frame *VAR_1,
        enum video_format VAR_2, uint32_t VAR_3)
{
 switch (VAR_2) {
 case 135:
  return;

 case 139:
  FUNC_0(VAR_0->data[0], VAR_1->data[0], VAR_1->linesize[0] * VAR_3);
  FUNC_0(VAR_0->data[1], VAR_1->data[1], VAR_1->linesize[1] * VAR_3 / 2);
  FUNC_0(VAR_0->data[2], VAR_1->data[2], VAR_1->linesize[2] * VAR_3 / 2);
  break;

 case 134:
  FUNC_0(VAR_0->data[0], VAR_1->data[0], VAR_1->linesize[0] * VAR_3);
  FUNC_0(VAR_0->data[1], VAR_1->data[1], VAR_1->linesize[1] * VAR_3 / 2);
  break;

 case 131:
 case 128:
 case 129:
 case 132:
 case 133:
 case 142:
 case 141:
 case 143:
 case 144:
  FUNC_0(VAR_0->data[0], VAR_1->data[0], VAR_1->linesize[0] * VAR_3);
  break;

 case 136:
 case 138:
  FUNC_0(VAR_0->data[0], VAR_1->data[0], VAR_1->linesize[0] * VAR_3);
  FUNC_0(VAR_0->data[1], VAR_1->data[1], VAR_1->linesize[1] * VAR_3);
  FUNC_0(VAR_0->data[2], VAR_1->data[2], VAR_1->linesize[2] * VAR_3);
  break;

 case 140:
  FUNC_0(VAR_0->data[0], VAR_1->data[0], VAR_1->linesize[0] * VAR_3);
  FUNC_0(VAR_0->data[1], VAR_1->data[1], VAR_1->linesize[1] * VAR_3 / 2);
  FUNC_0(VAR_0->data[2], VAR_1->data[2], VAR_1->linesize[2] * VAR_3 / 2);
  FUNC_0(VAR_0->data[3], VAR_1->data[3], VAR_1->linesize[3] * VAR_3);
  break;

 case 137:
 case 130:
  FUNC_0(VAR_0->data[0], VAR_1->data[0], VAR_1->linesize[0] * VAR_3);
  FUNC_0(VAR_0->data[1], VAR_1->data[1], VAR_1->linesize[1] * VAR_3);
  FUNC_0(VAR_0->data[2], VAR_1->data[2], VAR_1->linesize[2] * VAR_3);
  FUNC_0(VAR_0->data[3], VAR_1->data[3], VAR_1->linesize[3] * VAR_3);
  break;
 }
}
