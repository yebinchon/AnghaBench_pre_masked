
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct video_output_info {int width; int height; int format; } ;
struct video_frame {int * data; int * linesize; } ;
struct video_data {int const* const* data; int * linesize; } ;
struct obs_core_video {scalar_t__ using_nv12_tex; } ;
 int * FUNC_0 (int const,int const,int ,int ,int const* const,int ) ;

__attribute__((used)) static void FUNC_1(struct obs_core_video *VAR_0,
       struct video_frame *VAR_1,
       const struct video_data *VAR_2,
       const struct video_output_info *VAR_3)
{
 if (VAR_0->using_nv12_tex) {
  const uint32_t VAR_4 = VAR_3->width;
  const uint32_t VAR_5 = VAR_3->height;

  const uint8_t *const VAR_6 = FUNC_0(
   VAR_4, VAR_5, VAR_2->linesize[0], VAR_1->linesize[0],
   VAR_2->data[0], VAR_1->data[0]);

  const uint32_t VAR_7 = VAR_5 / 2;
  FUNC_0(VAR_4, VAR_7, VAR_2->linesize[0],
     VAR_1->linesize[1], VAR_6,
     VAR_1->data[1]);
 } else {
  switch (VAR_3->format) {
  case 139: {
   const uint32_t VAR_8 = VAR_3->width;
   const uint32_t VAR_9 = VAR_3->height;

   FUNC_0(VAR_8, VAR_9,
      VAR_2->linesize[0],
      VAR_1->linesize[0],
      VAR_2->data[0],
      VAR_1->data[0]);

   const uint32_t VAR_10 = VAR_8 / 2;
   const uint32_t VAR_11 = VAR_9 / 2;

   FUNC_0(VAR_10, VAR_11,
      VAR_2->linesize[1],
      VAR_1->linesize[1],
      VAR_2->data[1],
      VAR_1->data[1]);

   FUNC_0(VAR_10, VAR_11,
      VAR_2->linesize[2],
      VAR_1->linesize[2],
      VAR_2->data[2],
      VAR_1->data[2]);

   break;
  }
  case 134: {
   const uint32_t VAR_12 = VAR_3->width;
   const uint32_t VAR_13 = VAR_3->height;

   FUNC_0(VAR_12, VAR_13,
      VAR_2->linesize[0],
      VAR_1->linesize[0],
      VAR_2->data[0],
      VAR_1->data[0]);

   const uint32_t VAR_14 = VAR_13 / 2;
   FUNC_0(VAR_12, VAR_14,
      VAR_2->linesize[1],
      VAR_1->linesize[1],
      VAR_2->data[1],
      VAR_1->data[1]);

   break;
  }
  case 136: {
   const uint32_t VAR_15 = VAR_3->width;
   const uint32_t VAR_16 = VAR_3->height;

   FUNC_0(VAR_15, VAR_16,
      VAR_2->linesize[0],
      VAR_1->linesize[0],
      VAR_2->data[0],
      VAR_1->data[0]);

   FUNC_0(VAR_15, VAR_16,
      VAR_2->linesize[1],
      VAR_1->linesize[1],
      VAR_2->data[1],
      VAR_1->data[1]);

   FUNC_0(VAR_15, VAR_16,
      VAR_2->linesize[2],
      VAR_1->linesize[2],
      VAR_2->data[2],
      VAR_1->data[2]);

   break;
  }

  case 135:
  case 128:
  case 129:
  case 132:
  case 133:
  case 142:
  case 141:
  case 131:
  case 143:
  case 138:
  case 140:
  case 137:
  case 130:
  case 144:

   ;
  }
 }
}
