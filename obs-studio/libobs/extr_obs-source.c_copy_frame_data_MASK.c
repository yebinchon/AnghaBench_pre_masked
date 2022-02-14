
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame {int format; int height; int color_range_max; int color_range_min; int full_range; int color_matrix; int timestamp; int flip; } ;
 int FUNC_0 (struct obs_source_frame*,struct obs_source_frame const*,int,int) ;
 int FUNC_1 (int ,int ,size_t const) ;

__attribute__((used)) static void FUNC_2(struct obs_source_frame *VAR_0,
       const struct obs_source_frame *VAR_1)
{
 VAR_0->flip = VAR_1->flip;
 VAR_0->full_range = VAR_1->full_range;
 VAR_0->timestamp = VAR_1->timestamp;
 FUNC_1(VAR_0->color_matrix, VAR_1->color_matrix, sizeof(float) * 16);
 if (!VAR_0->full_range) {
  size_t const VAR_2 = sizeof(float) * 3;
  FUNC_1(VAR_0->color_range_min, VAR_1->color_range_min, VAR_2);
  FUNC_1(VAR_0->color_range_max, VAR_1->color_range_max, VAR_2);
 }

 switch (VAR_1->format) {
 case 139:
  FUNC_0(VAR_0, VAR_1, 0, VAR_0->height);
  FUNC_0(VAR_0, VAR_1, 1, VAR_0->height / 2);
  FUNC_0(VAR_0, VAR_1, 2, VAR_0->height / 2);
  break;

 case 134:
  FUNC_0(VAR_0, VAR_1, 0, VAR_0->height);
  FUNC_0(VAR_0, VAR_1, 1, VAR_0->height / 2);
  break;

 case 136:
 case 138:
  FUNC_0(VAR_0, VAR_1, 0, VAR_0->height);
  FUNC_0(VAR_0, VAR_1, 1, VAR_0->height);
  FUNC_0(VAR_0, VAR_1, 2, VAR_0->height);
  break;

 case 128:
 case 129:
 case 132:
 case 135:
 case 133:
 case 142:
 case 141:
 case 131:
 case 143:
 case 144:
  FUNC_0(VAR_0, VAR_1, 0, VAR_0->height);
  break;

 case 140:
  FUNC_0(VAR_0, VAR_1, 0, VAR_0->height);
  FUNC_0(VAR_0, VAR_1, 1, VAR_0->height / 2);
  FUNC_0(VAR_0, VAR_1, 2, VAR_0->height / 2);
  FUNC_0(VAR_0, VAR_1, 3, VAR_0->height);
  break;

 case 137:
 case 130:
  FUNC_0(VAR_0, VAR_1, 0, VAR_0->height);
  FUNC_0(VAR_0, VAR_1, 1, VAR_0->height);
  FUNC_0(VAR_0, VAR_1, 2, VAR_0->height);
  FUNC_0(VAR_0, VAR_1, 3, VAR_0->height);
  break;
 }
}
